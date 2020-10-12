# -*- coding: utf-8 -*-
"""
Created on Thu Jun 18 22:11:44 2020

@author: MADHURIMA
"""

cases = int(input())
for caseNo in range(cases):
    s = input()
    n = len(s)
    res = 0
    for l in range(1, n):
        cnt = {}
        for i in range(n - l + 1):
            subs = list(s[i:i + l])
            subs.sort()
            subs = ''.join(subs)
            if subs in cnt:
                cnt[subs] += 1
            else:
                cnt[subs] = 1
            res += cnt[subs] - 1
    print(res)