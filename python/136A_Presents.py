#!/usr/bin/env python3

n = int(input())
a = [0] * n
b = list(map(int,input().split()))

for i in range(n):
    c = b[i]
    a[c - 1] = str(i + 1)

print(' '.join(a))