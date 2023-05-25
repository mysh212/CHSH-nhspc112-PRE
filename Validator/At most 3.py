a,b = [int(i) for i in input().split()]
assert(1 <= a <= 100)
assert(1 <= b <= int(1e12))
c = [int(i) for i in input().split()]
assert(len(c) == a)
assert(len([i for i in c if 1 <= i <= int(1e12)]))
quit()