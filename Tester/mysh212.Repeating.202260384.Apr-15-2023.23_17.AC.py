# Author : ysh
# 04/15/2023 Sat 23:01:17.08
from math import gcd
for i in range(int(input())):
    a = [int(i) for i in input().split()]
    b = a[0]
    c = a[1]
    b,c = b // gcd(b,c),c // gcd(b,c)
    b = 1
    d = [-1 for i in range(c)]
    for j in range(c + 1):
        if d[b] != -1:
            print(j - d[b])
            break
        assert(b != 0)
        d[b] = j
        b = (b * 10) % c
quit()
