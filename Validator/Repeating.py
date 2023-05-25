# Author : ysh
# 05/20/2023 Sat  9:13:27.33
n = int(input())
assert(n <= 25)
for i in range(n):
    a,b = [int(i) for i in input().split()]
    assert(1 <= a <= int(1e6) and 1 <= b <= int(1e6))
    while not b & 1:
        b =  b >> 1
    while b % 5 == 0:
        b = b // 5
    assert(b != 1)
quit()