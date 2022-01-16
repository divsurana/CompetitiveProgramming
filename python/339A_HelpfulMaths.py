#!/usr/bin/env python3

s = input()

a = [int(i) for i in s.split("+")]
a.sort()

a = [str(i) for i in a]
s = "+".join(a)

print(s)