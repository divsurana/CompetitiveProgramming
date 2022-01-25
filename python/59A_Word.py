#!/usr/bin/env python3

s = input()
n = sum(1 for c in s if c.isupper())
print(s.upper() if n > len(s) // 2 else s.lower())