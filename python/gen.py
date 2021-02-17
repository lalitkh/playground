# Enter your code here. Read input from STDIN. Print output to STDOUT

from collections import namedtuple

n = int(input())
header = input()
Students = namedtuple('Students', header)


marks = []
h = header.split()
for _ in range(n):
    s = input().split()

    temp = dict(list(zip(h, s)))

    ss = Students(**temp)

    marks.append(int(ss.MARKS))

print(sum(marks)/n)
