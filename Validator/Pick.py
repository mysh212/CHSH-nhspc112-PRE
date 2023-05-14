# Author : ysh
# 05/10/2023 Wed 19:42:49.74
a,b = [int(i) for i in input().split()]
c = [int(i) for i in input().split()]
assert(len(c) == a and 1 <= a <= int(1e5) and 1 <= b and b <= int(1e5))
for i in c:
    assert(i >= 1 and i <= int(1e9))
for j in range(b):
    assert(0 <= int(input()) <= int(1e18))
quit()