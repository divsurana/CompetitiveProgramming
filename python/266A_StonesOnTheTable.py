#!/usr/bin/env python3

i = input()
s = input()

prev = ''
ans = 0

for c in s:
    if prev == c:
        ans += 1
    else:
        prev = c

print(ans)