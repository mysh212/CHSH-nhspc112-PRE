# Author : ysh
# 04/15/2023 Sat 23:01:17.08
from math import gcd
import sys
input = sys.stdin.readline
print = sys.stdout.write
for i in range(int(input())):
    b,c = [int(i) for i in input().split()]
    b,c = 1,c // gcd(b,c)
    d = [-1 for i in range(c)]
    for j in range(c + 1):
        if d[b] != -1:
            print(f'{j - d[b]}\n')
            break
        assert(b != 0)
        d[b] = j
        b = (b * 10) % c
quit()
