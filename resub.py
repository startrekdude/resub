import re

from dataclasses import dataclass
from sys import argv as args, exit
from time import time, sleep

@dataclass(frozen=True)
class TransformationRule:
	pattern : re.Pattern
	repl    : str

def load_program(path):
	with open(path) as f:
		lines = f.read().splitlines()
	
	if lines[-1]: lines.append("")
	
	rules = []
	
	current_pattern = None
	current_repl = None
	for i, line in enumerate(lines):
		if not line:
			if not current_pattern or not current_repl:
				print(f"Malformed rule; line {i+1}")
				exit(-1)
			rules.append(TransformationRule(current_pattern, current_repl))
			current_pattern = current_repl = None
			continue
		
		if not current_pattern:
			current_pattern = re.compile(line)
		elif not current_repl:
			current_repl = line
		else:
			current_repl += "\n" + line
	
	return rules

LINE_WIDTH = 130

def clearline():
	print(f"\r{' ' * LINE_WIDTH}", end="")

def pline(s):
	clearline()
	print(f"\r{s[:LINE_WIDTH]}", end="")

# set this to show intermediate states, helpful for debugging
DELAY = 0

def evaluate(rules, state):
	total = 0
	begin = time()
	
	while True:
		for rule in rules:
			state, count = rule.pattern.subn(rule.repl, state, count=1)
			if count:
				total += 1
				pline(state)
				sleep(DELAY)
				break
		else: break
	
	clearline()
	print(f"\r{total} transformation rules applied; completed in {time()-begin:.2f}s.")
	
	return state

def main():
	if len(args) < 2:
		print("Usage: resub <program.re> [other.re...]")
		exit(-1)
	
	program_path = args[1]
	rules = load_program(program_path)
	
	for lib_path in args[2:]:
		rules += load_program(lib_path)
	
	print(f"Loaded {len(rules)} transformation rules.")
	
	while True:
		state = input("?> ")
		if not state: break
		result = evaluate(rules, state)
		print(result)

if __name__ == "__main__":
	main()