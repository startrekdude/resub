pop/1 ([^,\s]+),([^$\s]*)\$
\1 \2$

reverse/2 ([^$\s]+),\$ \$
\1,$

reverse/2 ([^$\s]*)\$ ([^\s$]*?)([^\s$,]+?,)\$
reverse/2 \1\3$ \2$

reverse/1 ([^$\s]+),\$
reverse/2 $ \1,$

xor-bin/3 ([01]+)X X X
\1

xor-bin/3 ([01]*)X 0([01]*)X 0([01]*)X
xor-bin/3 \g<1>0X \2X \3X

xor-bin/3 ([01]*)X 0([01]*)X 1([01]*)X
xor-bin/3 \g<1>1X \2X \3X

xor-bin/3 ([01]*)X 1([01]*)X 0([01]*)X
xor-bin/3 \g<1>1X \2X \3X

xor-bin/3 ([01]*)X 1([01]*)X 1([01]*)X
xor-bin/3 \g<1>0X \2X \3X

xor-bin/2 ([01]+) ([01]+)
xor-bin/3 X \1X \2X

hex-to-bin/2 ([01]+)X X
\1

hex-to-bin/2 ([01]*)X 0([\da-f]*)X
hex-to-bin/2 \g<1>0000X \2X

hex-to-bin/2 ([01]*)X 1([\da-f]*)X
hex-to-bin/2 \g<1>0001X \2X

hex-to-bin/2 ([01]*)X 2([\da-f]*)X
hex-to-bin/2 \g<1>0010X \2X

hex-to-bin/2 ([01]*)X 3([\da-f]*)X
hex-to-bin/2 \g<1>0011X \2X

hex-to-bin/2 ([01]*)X 4([\da-f]*)X
hex-to-bin/2 \g<1>0100X \2X

hex-to-bin/2 ([01]*)X 5([\da-f]*)X
hex-to-bin/2 \g<1>0101X \2X

hex-to-bin/2 ([01]*)X 6([\da-f]*)X
hex-to-bin/2 \g<1>0110X \2X

hex-to-bin/2 ([01]*)X 7([\da-f]*)X
hex-to-bin/2 \g<1>0111X \2X

hex-to-bin/2 ([01]*)X 8([\da-f]*)X
hex-to-bin/2 \g<1>1000X \2X

hex-to-bin/2 ([01]*)X 9([\da-f]*)X
hex-to-bin/2 \g<1>1001X \2X

hex-to-bin/2 ([01]*)X a([\da-f]*)X
hex-to-bin/2 \g<1>1010X \2X

hex-to-bin/2 ([01]*)X b([\da-f]*)X
hex-to-bin/2 \g<1>1011X \2X

hex-to-bin/2 ([01]*)X c([\da-f]*)X
hex-to-bin/2 \g<1>1100X \2X

hex-to-bin/2 ([01]*)X d([\da-f]*)X
hex-to-bin/2 \g<1>1101X \2X

hex-to-bin/2 ([01]*)X e([\da-f]*)X
hex-to-bin/2 \g<1>1110X \2X

hex-to-bin/2 ([01]*)X f([\da-f]*)X
hex-to-bin/2 \g<1>1111X \2X

hex-to-bin/1 ([\da-f]+)
hex-to-bin/2 X \1X

bin-to-hex/2 ([\da-f]+)X X
\1

bin-to-hex/2 ([\da-f]*)X 0000([01]*)X
bin-to-hex/2 \g<1>0X \2X

bin-to-hex/2 ([\da-f]*)X 0001([01]*)X
bin-to-hex/2 \g<1>1X \2X

bin-to-hex/2 ([\da-f]*)X 0010([01]*)X
bin-to-hex/2 \g<1>2X \2X

bin-to-hex/2 ([\da-f]*)X 0011([01]*)X
bin-to-hex/2 \g<1>3X \2X

bin-to-hex/2 ([\da-f]*)X 0100([01]*)X
bin-to-hex/2 \g<1>4X \2X

bin-to-hex/2 ([\da-f]*)X 0101([01]*)X
bin-to-hex/2 \g<1>5X \2X

bin-to-hex/2 ([\da-f]*)X 0110([01]*)X
bin-to-hex/2 \g<1>6X \2X

bin-to-hex/2 ([\da-f]*)X 0111([01]*)X
bin-to-hex/2 \g<1>7X \2X

bin-to-hex/2 ([\da-f]*)X 1000([01]*)X
bin-to-hex/2 \g<1>8X \2X

bin-to-hex/2 ([\da-f]*)X 1001([01]*)X
bin-to-hex/2 \g<1>9X \2X

bin-to-hex/2 ([\da-f]*)X 1010([01]*)X
bin-to-hex/2 \1aX \2X

bin-to-hex/2 ([\da-f]*)X 1011([01]*)X
bin-to-hex/2 \1bX \2X

bin-to-hex/2 ([\da-f]*)X 1100([01]*)X
bin-to-hex/2 \1cX \2X

bin-to-hex/2 ([\da-f]*)X 1101([01]*)X
bin-to-hex/2 \1dX \2X

bin-to-hex/2 ([\da-f]*)X 1110([01]*)X
bin-to-hex/2 \1eX \2X

bin-to-hex/2 ([\da-f]*)X 1111([01]*)X
bin-to-hex/2 \1fX \2X

bin-to-hex/1 ([01]+)
bin-to-hex/2 X \1X

xor/2 ([\da-f]+) ([\da-f]+)
bin-to-hex/1 xor-bin/2 hex-to-bin/1 \1 hex-to-bin/1 \2

lshift8/1 ([\da-f]{02})([\da-f]*)
\2\1

next-key/3 ([\da-f]{8}) X ([\da-f]*)([\da-f]{8})
\2\3xor/2 \1 \3

next-key/3 ([\da-f]{8}) ([\da-f]{8})([\da-f]*)X ([\da-f]*)([\da-f]{8})
next-key/3 \2 \3X \4\5xor/2 \1 \5

next-key/2 ([\da-f]{8})([\da-f]{8})([\da-f]{8})([\da-f]{8}) ([\da-f]{2})
next-key/3 \2 \3\4X xor/2 xor/2 \1 sbox/1 lshift8/1 \4 \g<5>000000

expand-key/3 ([\da-f,]*)([\da-f]{32}),\$ ([\da-f]{2}) \$
\1\2,next-key/2 \2 \3,$

expand-key/3 ([\da-f,]*)([\da-f]{32}),\$ ([\da-f]{2}) ([\da-f,]*)\$
expand-key/3 \1\2,next-key/2 \2 \3,$ pop/1 \4$

expand-key/1 ([\da-f]{32})
expand-key/3 \1,$ 01 02,04,08,10,20,40,80,1b,36,$

repeat4/1 ([\da-f]+)
\1\1\1\1

shl-bin/1 [01]([01]{7})
\g<1>0

shl/1 ([\da-f]{2})
bin-to-hex/1 shl-bin/1 hex-to-bin/1 \1

xt/1 ([89a-f][\da-f])
xor/2 shl/1 \1 1b

xt/1 ([\da-f]{2})
shl/1 \1

mix-column/1 ([\da-f]{2})([\da-f]{2})([\da-f]{2})([\da-f]{2})
xor/2 \1\2\3\4 xor/2 repeat4/1 xor/2 xor/2 xor/2 \1 \2 \3 \4 oo/1 (xt/1 xor/2 \1 \2xt/1 xor/2 \2 \3xt/1 xor/2 \3 \4xt/1 xor/2 \4 \1)

shift-rows/1 (..)(..)(..)(..)(..)(..)(..)(..)(..)(..)(..)(..)(..)(..)(..)(..)
\1\6\11\16\5\10\15\4\9\14\3\8\13\2\7\12

aes-enc/3 X ([\da-f]{32}) [\da-f,]*\$
\1

aes-enc/3 0([0-3]*)X ([\da-f]{32}) ([\da-f,]*\$)
aes-enc/3 \1X xor/2 \2 pop/1 \3

aes-enc/3 1([0-3]*)X ([\da-f]{32}) ([\da-f,]*\$)
aes-enc/3 \1X sbox/1 \2 \3

aes-enc/3 2([0-3]*)X ([\da-f]{32}) ([\da-f,]*\$)
aes-enc/3 \1X shift-rows/1 \2 \3

aes-enc/3 3([0-3]*)X ([\da-f]{8})([\da-f]{8})([\da-f]{8})([\da-f]{8}) ([\da-f,]*\$)
aes-enc/3 \1X mix-column/1 \2mix-column/1 \3mix-column/1 \4mix-column/1 \5 \6

aes-enc/2 ([\da-f]{32}) ([\da-f]{32})
aes-enc/3 0123012301230123012301230123012301230120X \1 expand-key/1 \2

mix-column-inv/3 ([\da-f]{8}) ([\da-f]{2}) ([\da-f]{2})
xor/2 \1 \2\3\2\3

mix-column-inv/1 ([\da-f]{2})([\da-f]{2})([\da-f]{2})([\da-f]{2})
mix-column/1 mix-column-inv/3 \1\2\3\4 xt/1 xt/1 xor/2 \1 \3 xt/1 xt/1 xor/2 \2 \4

shift-rows-inv/1 (..)(..)(..)(..)(..)(..)(..)(..)(..)(..)(..)(..)(..)(..)(..)(..)
\1\14\11\8\5\2\15\12\9\6\3\16\13\10\7\4

aes-dec/3 X ([\da-f]{32}) [\da-f,]*\$
\1

aes-dec/3 0([0-3]*)X ([\da-f]{32}) ([\da-f,]*\$)
aes-dec/3 \1X xor/2 \2 pop/1 \3

aes-dec/3 1([0-3]*)X ([\da-f]{32}) ([\da-f,]*\$)
aes-dec/3 \1X shift-rows-inv/1 \2 \3

aes-dec/3 2([0-3]*)X ([\da-f]{32}) ([\da-f,]*\$)
aes-dec/3 \1X sbox-inv/1 \2 \3

aes-dec/3 3([0-3]*)X ([\da-f]{8})([\da-f]{8})([\da-f]{8})([\da-f]{8}) ([\da-f,]*\$)
aes-dec/3 \1X mix-column-inv/1 \2mix-column-inv/1 \3mix-column-inv/1 \4mix-column-inv/1 \5 \6

aes-dec/2 ([\da-f]{32}) ([\da-f]{32})
aes-dec/3 0120312031203120312031203120312031203120X \1 reverse/1 expand-key/1 \2

sbox-row/1 0
637c777bf26b6fc53001672bfed7ab76

sbox-row/1 1
ca82c97dfa5947f0add4a2af9ca472c0

sbox-row/1 2
b7fd9326363ff7cc34a5e5f171d83115

sbox-row/1 3
04c723c31896059a071280e2eb27b275

sbox-row/1 4
09832c1a1b6e5aa0523bd6b329e32f84

sbox-row/1 5
53d100ed20fcb15b6acbbe394a4c58cf

sbox-row/1 6
d0efaafb434d338545f9027f503c9fa8

sbox-row/1 7
51a3408f929d38f5bcb6da2110fff3d2

sbox-row/1 8
cd0c13ec5f974417c4a77e3d645d1973

sbox-row/1 9
60814fdc222a908846eeb814de5e0bdb

sbox-row/1 a
e0323a0a4906245cc2d3ac629195e479

sbox-row/1 b
e7c8376d8dd54ea96c56f4ea657aae08

sbox-row/1 c
ba78252e1ca6b4c6e8dd741f4bbd8b8a

sbox-row/1 d
703eb5664803f60e613557b986c11d9e

sbox-row/1 e
e1f8981169d98e949b1e87e9ce5528df

sbox-row/1 f
8ca1890dbfe6426841992d0fb054bb16

sbox-row-inv/1 0
52096ad53036a538bf40a39e81f3d7fb

sbox-row-inv/1 1
7ce339829b2fff87348e4344c4dee9cb

sbox-row-inv/1 2
547b9432a6c2233dee4c950b42fac34e

sbox-row-inv/1 3
082ea16628d924b2765ba2496d8bd125

sbox-row-inv/1 4
72f8f66486689816d4a45ccc5d65b692

sbox-row-inv/1 5
6c704850fdedb9da5e154657a78d9d84

sbox-row-inv/1 6
90d8ab008cbcd30af7e45805b8b34506

sbox-row-inv/1 7
d02c1e8fca3f0f02c1afbd0301138a6b

sbox-row-inv/1 8
3a9111414f67dcea97f2cfcef0b4e673

sbox-row-inv/1 9
96ac7422e7ad3585e2f937e81c75df6e

sbox-row-inv/1 a
47f11a711d29c5896fb7620eaa18be1b

sbox-row-inv/1 b
fc563e4bc6d279209adbc0fe78cd5af4

sbox-row-inv/1 c
1fdda8338807c731b11210592780ec5f

sbox-row-inv/1 d
60517fa919b54a0d2de57a9f93c99cef

sbox-row-inv/1 e
a0e03b4dae2af5b0c8ebbb3c83539961

sbox-row-inv/1 f
172b047eba77d626e169146355210c7d

sbox-select/2 0 ([\da-f]{2})[\da-f]{30}
\1

sbox-select/2 1 [\da-f]{2}([\da-f]{2})[\da-f]{28}
\1

sbox-select/2 2 [\da-f]{4}([\da-f]{2})[\da-f]{26}
\1

sbox-select/2 3 [\da-f]{6}([\da-f]{2})[\da-f]{24}
\1

sbox-select/2 4 [\da-f]{8}([\da-f]{2})[\da-f]{22}
\1

sbox-select/2 5 [\da-f]{10}([\da-f]{2})[\da-f]{20}
\1

sbox-select/2 6 [\da-f]{12}([\da-f]{2})[\da-f]{18}
\1

sbox-select/2 7 [\da-f]{14}([\da-f]{2})[\da-f]{16}
\1

sbox-select/2 8 [\da-f]{16}([\da-f]{2})[\da-f]{14}
\1

sbox-select/2 9 [\da-f]{18}([\da-f]{2})[\da-f]{12}
\1

sbox-select/2 a [\da-f]{20}([\da-f]{2})[\da-f]{10}
\1

sbox-select/2 b [\da-f]{22}([\da-f]{2})[\da-f]{8}
\1

sbox-select/2 c [\da-f]{24}([\da-f]{2})[\da-f]{6}
\1

sbox-select/2 d [\da-f]{26}([\da-f]{2})[\da-f]{4}
\1

sbox-select/2 e [\da-f]{28}([\da-f]{2})[\da-f]{2}
\1

sbox-select/2 f [\da-f]{30}([\da-f]{2})
\1

sbox/3 ([\da-f]+)X X [^\s]+
\1

sbox/3 ([\da-f]*)X ([\da-f])([\da-f])([\da-f]*)X ([^\s]+)
sbox/3 \1sbox-select/2 \3 \5/1 \2X \4X \5

sbox/1 ([\da-f]+)
sbox/3 X \1X sbox-row

sbox-inv/1 ([\da-f]+)
sbox/3 X \1X sbox-row-inv

oo/1 \(([^()]+)\)
\1