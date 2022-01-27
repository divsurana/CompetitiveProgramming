#!/usr/bin/env python3

n = int(input())
curr = 0
ans = 0
for i in range(n):
    a, b = list(map(int,input().split()))
    curr += b - a
    ans = max(ans, curr)

print(ans)