# A worked example of Resub

Consider the following program (no, Resub doesn't currently support comments—submit a PR!):

```
eq/2 (\S+) \1
1

eq/2 \S+ \S+
0

ternary/3 1 (\S+) \S+
\1

ternary/3 0 \S+ (\S+)
\1

main/0
ternary/3 eq/2 Hello Hello Celebration Utter-Sadness
```

Let's consider its operation. A Resub program is defined by a set of rules; the first part of each rule is the regex that it matches on, and the second part is what it should be replaced by.

A Resub program must be run with an associated initial state. The current state is matched against the rules in order and, if it matches, the matching part is replaced by the replacement. Once a rule is matched, it'll start again from the beginning. If a state matches no rules the program ends—the end state is the result.

That's probably a bit abstract for the uninitiated, so let's go through an example. With the program above and input `main/0`:

| **Matching part of state**<br />(capturing groups in []) | **Matching rule**                                            | **New state**                                          |
| -------------------------------------------------------- | ------------------------------------------------------------ | ------------------------------------------------------ |
| `main/0`                                                 | `main/0`                                                     | `ternary/3 eq/2 Hello Hello Celebration Utter-Sadness` |
| `eq/2 [Hello] Hello`                                     | `eq/2 (\S+) \1`<br />(this rule is defined **before** `ternary/3`) | `ternary/3 1 Celebration Utter-Sadness`                |
| `ternary/3 1 [Celebration] Utter-Sadness`                | `tenary/3 1 (\S+) \S+`                                       | `Celebration`                                          |

