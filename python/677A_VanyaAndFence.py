#!/usr/bin/env python3

n, f = list(map(int,input().split()))
hts = list(map(int,input().split()))
w = 0

for h in hts:
    w += 2 if h > f else 1

print(w)