# Enter your code here. Read input from STDIN. Print output to STDOUT
import re

# Getting the input
N = int(raw_input())
pairs = []
for _ in range(N):
    pairs.append(raw_input())

match_regex = re.compile(
    r"""
    \(                                # Starting bracket
    ([\+\-]?[1-9][0-9]*(?:\.[0-9]+)?) # First number
    ,[ ]                              # Comma space
    ([\+\-]?[1-9][0-9]*(?:\.[0-9]+)?) # Second number
    \)                                # Closing bracket
    """,
    re.VERBOSE
)

for line in pairs:
    m = match_regex.match(line)
    if m is None:
        print "Invalid"
        continue
    X, Y = map(float, m.groups())
    if ((-90) <= X <= 90) and ((-180) <= Y <= 180):
        print "Valid"
    else:
        print "Invalid"