# Resub

### An esoteric programming language built around regexes

Resub (**Re**gex **Sub**stitution or **Re**peated **Sub**stitution) is an esoteric programming language where programs are composed entirely of regular expressions and the only control flow operation is regex substitute. It's not very easy to program in...

## Usage

```shell
>resub lib/sqrt.re lib/decode.re
Loaded 216 transformation rules.
?> sqrt/1 169
5278 transformation rules applied; completed in 0.59s.
13
?> sqrt/1 4819136400
27041 transformation rules applied; completed in 2.75s.
69420
?> decode/1 sqrt/1 98151623087692571623976236910206979821391529
738949 transformation rules applied; completed in 383.92s.
Go Resub!
?>
```

(this relies on the Resub programs `sqrt.re` and `decode.re` in `lib`—I highly encourage you to go check them out, `sqrt.re` in particular. Writing a O((log_{10}n)^3) sqrt in *regexes* was a very interesting challenge!)

## Motivation

I wanted to see if a bunch of regular expressions in a `while` loop can compute square roots. Turns out it can!

## How it works and example

See [EXAMPLE.md](EXAMPLE.md)

## License

[ISC License](https://choosealicense.com/licenses/isc/)