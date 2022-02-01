#!/usr/bin/env python3

l = int(input())
s = input()
n = s.count('A')
print('Friendship' if n == l / 2 else 'Anton' if n > l / 2 else 'Danik')