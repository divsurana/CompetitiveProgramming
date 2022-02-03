#!/usr/bin/env python3

s = int(input()) + 1
while len(set(str(s))) < 4:
    s += 1
print(s)