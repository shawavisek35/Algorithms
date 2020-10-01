# -*- coding: utf-8 -*-
"""
Created on Tue Jul 21 17:50:33 2020

@author: MADHURIMA
"""

from bisect import bisect_right

n = int(input())
scores = sorted(set(map(int,input().split())))
m = int(input())
alice = map(int,input().split())
print("scores:",scores)


for i in alice:
    print("i=",i)
    print("len score=",len(scores))
    print("bisect right index=",bisect_right(scores,i))
    
    print(len(scores)-bisect_right(scores,i)+1)