digit-gt/2 9 [0-8]
1

digit-gt/2 8 [0-7]
1

digit-gt/2 7 [0-6]
1

digit-gt/2 6 [0-5]
1

digit-gt/2 5 [0-4]
1

digit-gt/2 4 [0-3]
1

digit-gt/2 3 [0-2]
1

digit-gt/2 2 [01]
1

digit-gt/2 1 0
1

digit-gt/2 \d \d
0

digit-eq/2 (\d) \1
1

digit-eq/2 \d \d
0

not/1 0
1

not/1 1
0

order/3 (\d) (\d) 1
\2\1

order/3 (\d) (\d) 0
\1\2

order/2 (\d) (\d)
order/3 \1 \2 digit-gt/2 \2 \1

rshift/1 (\d+)\d
\1

rshift/1 \d
0

last/1 \d*(\d)
\1

add/5 (\d*X) (\d+) (\d+) 00 0
add/4 0\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 00 1
add/4 1\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 10 0
add/4 1\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 10 1
add/4 2\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 11 0
add/4 2\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 11 1
add/4 3\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 20 0
add/4 2\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 20 1
add/4 3\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 21 0
add/4 3\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 21 1
add/4 4\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 22 0
add/4 4\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 22 1
add/4 5\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 30 0
add/4 3\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 30 1
add/4 4\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 31 0
add/4 4\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 31 1
add/4 5\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 32 0
add/4 5\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 32 1
add/4 6\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 33 0
add/4 6\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 33 1
add/4 7\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 40 0
add/4 4\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 40 1
add/4 5\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 41 0
add/4 5\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 41 1
add/4 6\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 42 0
add/4 6\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 42 1
add/4 7\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 43 0
add/4 7\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 43 1
add/4 8\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 44 0
add/4 8\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 44 1
add/4 9\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 50 0
add/4 5\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 50 1
add/4 6\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 51 0
add/4 6\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 51 1
add/4 7\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 52 0
add/4 7\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 52 1
add/4 8\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 53 0
add/4 8\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 53 1
add/4 9\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 54 0
add/4 9\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 54 1
add/4 0\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 55 0
add/4 0\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 55 1
add/4 1\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 60 0
add/4 6\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 60 1
add/4 7\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 61 0
add/4 7\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 61 1
add/4 8\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 62 0
add/4 8\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 62 1
add/4 9\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 63 0
add/4 9\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 63 1
add/4 0\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 64 0
add/4 0\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 64 1
add/4 1\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 65 0
add/4 1\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 65 1
add/4 2\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 66 0
add/4 2\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 66 1
add/4 3\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 70 0
add/4 7\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 70 1
add/4 8\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 71 0
add/4 8\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 71 1
add/4 9\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 72 0
add/4 9\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 72 1
add/4 0\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 73 0
add/4 0\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 73 1
add/4 1\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 74 0
add/4 1\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 74 1
add/4 2\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 75 0
add/4 2\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 75 1
add/4 3\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 76 0
add/4 3\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 76 1
add/4 4\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 77 0
add/4 4\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 77 1
add/4 5\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 80 0
add/4 8\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 80 1
add/4 9\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 81 0
add/4 9\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 81 1
add/4 0\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 82 0
add/4 0\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 82 1
add/4 1\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 83 0
add/4 1\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 83 1
add/4 2\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 84 0
add/4 2\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 84 1
add/4 3\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 85 0
add/4 3\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 85 1
add/4 4\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 86 0
add/4 4\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 86 1
add/4 5\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 87 0
add/4 5\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 87 1
add/4 6\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 88 0
add/4 6\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 88 1
add/4 7\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 90 0
add/4 9\1 \2 \3 0

add/5 (\d*X) (\d+) (\d+) 90 1
add/4 0\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 91 0
add/4 0\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 91 1
add/4 1\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 92 0
add/4 1\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 92 1
add/4 2\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 93 0
add/4 2\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 93 1
add/4 3\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 94 0
add/4 3\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 94 1
add/4 4\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 95 0
add/4 4\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 95 1
add/4 5\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 96 0
add/4 5\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 96 1
add/4 6\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 97 0
add/4 6\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 97 1
add/4 7\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 98 0
add/4 7\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 98 1
add/4 8\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 99 0
add/4 8\1 \2 \3 1

add/5 (\d*X) (\d+) (\d+) 99 1
add/4 9\1 \2 \3 1

add/4 X 0 0 0
0

add/4 (\d+)X 0 0 0
\1

add/4 (\d+)X 0 0 1
1\1

add/4 (\d*X) (\d+) (\d+) (\d)
add/5 \1 rshift/1 \2 rshift/1 \3 order/2 last/1 \2 last/1 \3 \4

add/2 (\d+) (\d+)
add/4 X \1 \2 0

mulprep/n ((?:\d+ ){8})(\d+)
\1\2

mulprep/n (\d+) ((?:\d+ ?)+) (\d+)
mulprep/n \1 \2 \3 add/2 \1 \3

mulprep/2 (\d+) (\d+)
mulprep/n \1 \2 add/2 \1 \2

mulprep/1 (\d+)
mulprep/2 \1 add/2 \1 \1

mul/12 (\d+) (\d+) 0 (\d+) (\d+) (\d+) (\d+) (\d+) (\d+) (\d+) (\d+) (\d+)
mul/11 \1 \2 \g<3>0 \g<4>0 \g<5>0 \g<6>0 \g<7>0 \g<8>0 \g<9>0 \g<10>0 \g<11>0

mul/12 (\d+) (\d+) 1 (\d+) (\d+) (\d+) (\d+) (\d+) (\d+) (\d+) (\d+) (\d+)
mul/11 add/2 \1 \3 \2 \g<3>0 \g<4>0 \g<5>0 \g<6>0 \g<7>0 \g<8>0 \g<9>0 \g<10>0 \g<11>0

mul/12 (\d+) (\d+) 2 (\d+) (\d+) (\d+) (\d+) (\d+) (\d+) (\d+) (\d+) (\d+)
mul/11 add/2 \1 \4 \2 \g<3>0 \g<4>0 \g<5>0 \g<6>0 \g<7>0 \g<8>0 \g<9>0 \g<10>0 \g<11>0

mul/12 (\d+) (\d+) 3 (\d+) (\d+) (\d+) (\d+) (\d+) (\d+) (\d+) (\d+) (\d+)
mul/11 add/2 \1 \5 \2 \g<3>0 \g<4>0 \g<5>0 \g<6>0 \g<7>0 \g<8>0 \g<9>0 \g<10>0 \g<11>0

mul/12 (\d+) (\d+) 4 (\d+) (\d+) (\d+) (\d+) (\d+) (\d+) (\d+) (\d+) (\d+)
mul/11 add/2 \1 \6 \2 \g<3>0 \g<4>0 \g<5>0 \g<6>0 \g<7>0 \g<8>0 \g<9>0 \g<10>0 \g<11>0

mul/12 (\d+) (\d+) 5 (\d+) (\d+) (\d+) (\d+) (\d+) (\d+) (\d+) (\d+) (\d+)
mul/11 add/2 \1 \7 \2 \g<3>0 \g<4>0 \g<5>0 \g<6>0 \g<7>0 \g<8>0 \g<9>0 \g<10>0 \g<11>0

mul/12 (\d+) (\d+) 6 (\d+) (\d+) (\d+) (\d+) (\d+) (\d+) (\d+) (\d+) (\d+)
mul/11 add/2 \1 \8 \2 \g<3>0 \g<4>0 \g<5>0 \g<6>0 \g<7>0 \g<8>0 \g<9>0 \g<10>0 \g<11>0

mul/12 (\d+) (\d+) 7 (\d+) (\d+) (\d+) (\d+) (\d+) (\d+) (\d+) (\d+) (\d+)
mul/11 add/2 \1 \9 \2 \g<3>0 \g<4>0 \g<5>0 \g<6>0 \g<7>0 \g<8>0 \g<9>0 \g<10>0 \g<11>0

mul/12 (\d+) (\d+) 8 (\d+) (\d+) (\d+) (\d+) (\d+) (\d+) (\d+) (\d+) (\d+)
mul/11 add/2 \1 \10 \2 \g<3>0 \g<4>0 \g<5>0 \g<6>0 \g<7>0 \g<8>0 \g<9>0 \g<10>0 \g<11>0

mul/12 (\d+) (\d+) 9 (\d+) (\d+) (\d+) (\d+) (\d+) (\d+) (\d+) (\d+) (\d+)
mul/11 add/2 \1 \11 \2 \g<3>0 \g<4>0 \g<5>0 \g<6>0 \g<7>0 \g<8>0 \g<9>0 \g<10>0 \g<11>0

mul/11 (\d+) 0 \d+ \d+ \d+ \d+ \d+ \d+ \d+ \d+ \d+
\1

mul/11 (\d+) (\d+) (\d+) (\d+) (\d+) (\d+) (\d+) (\d+) (\d+) (\d+) (\d+)
mul/12 \1 rshift/1 \2 last/1 \2 \3 \4 \5 \6 \7 \8 \9 \10 \11

mul/2 (\d+) (\d+)
mul/11 0 \1 mulprep/1 \2

digit-gt-eq/2 (\d) (\d)
digit-gt/2 \1 \2 digit-eq/2 \1 \2

gt/5 \d 1 0 (\d+) (\d+)
gt/3 1 \1 \2

gt/5 1 0 1 (\d+) (\d+)
gt/3 1 \1 \2

gt/5 \d \d \d (\d+) (\d+)
gt/3 0 \1 \2

gt/3 (\d) 0 0
\1

gt/3 (\d) (\d+) (\d+)
gt/5 \1 digit-gt-eq/2 last/1 \2 last/1 \3 rshift/1 \2 rshift/1 \3

gt/2 (\d+) (\d+)
gt/3 digit-gt/2 last/1 \1 last/1 \2 rshift/1 \1 rshift/1 \2

lt/2 (\d+) \1
0

lt/2 (\d+) (\d+)
not/1 gt/2 \1 \2

max/3 (\d+) \d+ 1
\1

max/3 \d+ (\d+) 0
\1

max/2 (\d+) (\d+)
max/3 \1 \2 gt/2 \1 \2

min/3 (\d+) \d+ 1
\1

min/3 \d+ (\d+) 0
\1

min/2 (\d+) (\d+)
min/3 \1 \2 lt/2 \1 \2

hex-to-bin/2 X ([01]+)X
\1X

hex-to-bin/2 0([A-F\d]*)X ([01]*)X
hex-to-bin/2 \1X \g<2>0000X

hex-to-bin/2 1([A-F\d]*)X ([01]*)X
hex-to-bin/2 \1X \g<2>0001X

hex-to-bin/2 2([A-F\d]*)X ([01]*)X
hex-to-bin/2 \1X \g<2>0010X

hex-to-bin/2 3([A-F\d]*)X ([01]*)X
hex-to-bin/2 \1X \g<2>0011X

hex-to-bin/2 4([A-F\d]*)X ([01]*)X
hex-to-bin/2 \1X \g<2>0100X

hex-to-bin/2 5([A-F\d]*)X ([01]*)X
hex-to-bin/2 \1X \g<2>0101X

hex-to-bin/2 6([A-F\d]*)X ([01]*)X
hex-to-bin/2 \1X \g<2>0110X

hex-to-bin/2 7([A-F\d]*)X ([01]*)X
hex-to-bin/2 \1X \g<2>0111X

hex-to-bin/2 8([A-F\d]*)X ([01]*)X
hex-to-bin/2 \1X \g<2>1000X

hex-to-bin/2 9([A-F\d]*)X ([01]*)X
hex-to-bin/2 \1X \g<2>1001X

hex-to-bin/2 A([A-F\d]*)X ([01]*)X
hex-to-bin/2 \1X \g<2>1010X

hex-to-bin/2 B([A-F\d]*)X ([01]*)X
hex-to-bin/2 \1X \g<2>1011X

hex-to-bin/2 C([A-F\d]*)X ([01]*)X
hex-to-bin/2 \1X \g<2>1100X

hex-to-bin/2 D([A-F\d]*)X ([01]*)X
hex-to-bin/2 \1X \g<2>1101X

hex-to-bin/2 E([A-F\d]*)X ([01]*)X
hex-to-bin/2 \1X \g<2>1110X

hex-to-bin/2 F([A-F\d]*)X ([01]*)X
hex-to-bin/2 \1X \g<2>1111X

hex-to-bin/1 ([A-F\d]+)
hex-to-bin/2 \1X X

bin-to-dec/3 X (\d+) (\d+)
\1

bin-to-dec/3 X([01]*)0 (\d+) (\d+)
bin-to-dec/3 X\1 \2 add/2 \3 \3

bin-to-dec/3 X([01]*)1 (\d+) (\d+)
bin-to-dec/3 X\1 add/2 \2 \3 add/2 \3 \3

bin-to-dec/1 ([01]+)
bin-to-dec/3 X\1 0 1

read-literal/3 1([01]{4})([01]*)X (\d+) ([01]*)X
read-literal/3 \2X add/2 5 \3 \4\1X

read-literal/3 0([01]{4})([01]*)X (\d+) ([01]*)X
\2X add/2 5 \3 bin-to-dec/1 \4\1

read-packet/1 [01]{3}100([01]*)X
read-literal/3 \1X 6 X

read-operator-0/6 ([01]*)X (\d+) (\S+) (\d+) \4 {(\S+)&}
\1X \2 {\3&\5}

read-operator-0/8 (\d+) (\S+) (\d+) (\d+) {(\S*)} ([01]*)X (\d+) (\S+)
read-operator-0/6 \6X add/2 \1 \7 \2 \3 \4 {\5\8&}

read-operator-0/6 ([01]*)X (\d+) (\S+) (\d+) (\d+) {(\S*)}
read-operator-0/8 \2 \3 \4 add/2 1 \5 {\6} read-packet/1 \1X

read-operator/3 1([01]{11})([01]*)X (\d+) (\S+)
read-operator-0/6 \2X add/2 12 \3 \4 bin-to-dec/1 \1 0 {}

read-operator-1/6 ([01]*)X (\d+) (\S+) (\d+) \4 {(\S+)&}
\1X \2 {\3&\5}

read-operator-1/8 (\d+) (\S+) (\d+) (\d+) {(\S*)} ([01]*)X (\d+) (\S+)
read-operator-1/6 \6X add/2 \1 \7 \2 \3 add/2 \7 \4 {\5\8&}

read-operator-1/6 ([01]*)X (\d+) (\S+) (\d+) (\d+) {(\S*)}
read-operator-1/8 \2 \3 \4 \5 {\6} read-packet/1 \1X

read-operator/3 0([01]{15})([01]*)X (\d+) (\S+)
read-operator-1/6 \2X add/2 16 \3 \4 bin-to-dec/1 \1 0 {}

read-packet/1 [01]{3}000([01]*)X
read-operator/3 \1X 6 add

read-packet/1 [01]{3}001([01]*)X
read-operator/3 \1X 6 mul

read-packet/1 [01]{3}010([01]*)X
read-operator/3 \1X 6 min

read-packet/1 [01]{3}011([01]*)X
read-operator/3 \1X 6 max

read-packet/1 [01]{3}101([01]*)X
read-operator/3 \1X 6 gt

read-packet/1 [01]{3}110([01]*)X
read-operator/3 \1X 6 lt

read-packet/1 [01]{3}111([01]*)X
read-operator/3 \1X 6 eq

read-puzzle/3 [01]*X \d+ (\S+)
\1

read-puzzle/1 ([A-F\d]+)
read-puzzle/3 read-packet/1 hex-to-bin/1 \1

repl/2 (\S*)%(\S*) %(\S+)%
\1\3\2

add-eval/2 (\d+) (\d+)
%add/2 \1 \2%

add-eval/2 (\d+)&([\d&]+) (\d+)
add-eval/2 \2 add/2 \1 \3

mul-eval/2 (\d+) (\d+)
%mul/2 \1 \2%

mul-eval/2 (\d+)&([\d&]+) (\d+)
mul-eval/2 \2 mul/2 \1 \3

min-eval/2 (\d+) (\d+)
%min/2 \1 \2%

min-eval/2 (\d+)&([\d&]+) (\d+)
min-eval/2 \2 min/2 \1 \3

max-eval/2 (\d+) (\d+)
%max/2 \1 \2%

max-eval/2 (\d+)&([\d&]+) (\d+)
max-eval/2 \2 max/2 \1 \3

eq-eval/1 (\d+)&\1
%1%

eq-eval/1 \d+&\d+
%0%

eval/1 (\S*){add&([\d&]+)}(\S*)
eval/1 repl/2 \1%\3 add-eval/2 \2 0

eval/1 (\S*){mul&([\d&]+)}(\S*)
eval/1 repl/2 \1%\3 mul-eval/2 \2 1

eval/1 (\S*){(?:min|max)&(\d+)}(\S*)
eval/1 \1\2\3

eval/1 (\S*){min&(\d+)&([\d&]+)}(\S*)
eval/1 repl/2 \1%\4 min-eval/2 \3 \2

eval/1 (\S*){max&(\d+)&([\d&]+)}(\S*)
eval/1 repl/2 \1%\4 max-eval/2 \3 \2

eval/1 (\S*){eq&([\d&]+)}(\S*)
eval/1 repl/2 \1%\3 eq-eval/1 \2

eval/1 (\S*){lt&(\d+)&(\d+)}(\S*)
eval/1 repl/2 \1%\4 %lt/2 \2 \3%

eval/1 (\S*){gt&(\d+)&(\d+)}(\S*)
eval/1 repl/2 \1%\4 %gt/2 \2 \3%

eval/1 (\d+)
\1

solve/1 ([A-F\d]+)
eval/1 read-puzzle/1 \1