# Author : ysh
# 05/18/2023 Thu  9:45:23.66
a,b,c = [int(i) for i in input().split()]
assert(1 <= a <= 2500 and 1 <= b <= 2500)
sig = 0
for i in range(a):
    f = input().split()
    assert(len(f) == b)
    assert(len([int(i) for i in f if 0 <= int(i) <= int(1e9)]) == b)
    sig = sig + sum([int(i) for i in f])
assert(1 <= c <= sig * 2)
quit()