#!/usr/bin/env python3

i, n = list(map(int,input().split()))

while n > 0:
    c = i % 10
    if c == 0:
        i //= 10
        n -= 1
    else:
        c = min(c, n)
        i -= c
        n -= c

print(i)