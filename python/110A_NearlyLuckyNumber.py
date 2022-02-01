#!/usr/bin/env python3

s = input()
c = 0

for a in s:
    if a == '4' or a == '7': c += 1

print("YES" if c == 4 or c == 7 else "NO")