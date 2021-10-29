translate/3 (\S) \1\S* (\S)\S*
\2

translate/3 (\S) \S(\S+) \S(\S+)
translate/3 \1 \2 \3

letter-capitalize/1 (\S)
translate/3 \1 abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ

lcat/2 (.+) & (.+)
\2\1

rcat/2 (.+) & (.+)
\1\2

capitalize/1 ([^a-z]+)$
\1

capitalize/1 ([a-z])$
letter-capitalize/1 \1

capitalize/1 ([^a-z]+)([a-z])$
capitalize/1 rcat/2 \1 & letter-capitalize/1 \2

capitalize/1 ([a-z])(.+)$
capitalize/1 lcat/2 \2 & letter-capitalize/1 \1

capitalize/1 ([^a-z]+)([a-z])(.+)$
capitalize/1 rcat/2 \1 & lcat/2 \3 & letter-capitalize/1 \2

([^a-z]*[a-z][^a-z]*)
capitalize/1 \1