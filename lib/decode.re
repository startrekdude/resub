pair-decode/1 00
_

pair-decode/1 01
a

pair-decode/1 02
b

pair-decode/1 03
c

pair-decode/1 04
d

pair-decode/1 05
e

pair-decode/1 06
f

pair-decode/1 07
g

pair-decode/1 08
h

pair-decode/1 09
i

pair-decode/1 10
j

pair-decode/1 11
k

pair-decode/1 12
l

pair-decode/1 13
m

pair-decode/1 14
n

pair-decode/1 15
o

pair-decode/1 16
p

pair-decode/1 17
q

pair-decode/1 18
r

pair-decode/1 19
s

pair-decode/1 20
t

pair-decode/1 21
u

pair-decode/1 22
v

pair-decode/1 23
w

pair-decode/1 24
x

pair-decode/1 25
y

pair-decode/1 26
z

pair-decode/1 27
!

pair-decode/1 28
,

translate/3 (\S) \1\S* (\S)\S*
\2

translate/3 (\S) \S(\S+) \S(\S+)
translate/3 \1 \2 \3

letter-capitalize/1 (\S)
translate/3 \1 abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ

rcat/2 (\S+) & (\S+)
\1\2

underscore-to-space/1 ([^_]*)_([^_]*)
\1 \2

underscore-to-space/1 ([^_]+)
\1

decode/2 99(\d\d) X(\S+)
underscore-to-space/1 rcat/2 \2 & letter-capitalize/1 pair-decode/1 \1

decode/2 (\d\d) X(\S+)
underscore-to-space/1 rcat/2 \2 & pair-decode/1 \1

decode/2 99(\d\d)(\d+) (X\S*)
decode/2 \2 rcat/2 \3 & letter-capitalize/1 pair-decode/1 \1

decode/2 (\d\d)(\d+) (X\S*)
decode/2 \2 rcat/2 \3 & pair-decode/1 \1

decode/1 (\S+)
decode/2 \1 X