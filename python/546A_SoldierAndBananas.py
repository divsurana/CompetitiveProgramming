#!/usr/bin/env python3

k, n, w = list(map(int,input().split()))
ans = (((w * (w + 1)) // 2) * k) - n
print(ans if ans > 0 else 0)