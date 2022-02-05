#!/usr/bin/env python3

n = int(input())
c = 0

for i in range(n):
    a, b = list(map(int,input().split()))
    c += 1 if b - a >= 2 else 0

print(c)