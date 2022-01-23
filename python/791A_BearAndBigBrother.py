#!/usr/bin/env python3

i, j = list(map(int,input().split()))
n = 0

while i <= j:
    i *= 3
    j *= 2
    n += 1

print(n)