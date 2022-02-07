#!/usr/bin/env python3

n = int(input())
p = ''
c = 0

for i in range(n):
    a = input()
    if a != p:
        p = a
        c += 1

print(c)