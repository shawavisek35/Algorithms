#!/bin/python3

import math
import os
import random
import re
import sys


#
# Complete the 'getNumberOfIntegers' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. STRING L
#  2. STRING R
#  3. INTEGER K
#

def check(n):
    global K
    s = str(n)
    l = list(s)
    a = [int(i) for i in l]
    count = 0
    for j in a:
        if(j>0):
            count += 1
    if(count==K):
        return True
    else:
        return False

def getNumberOfIntegers(L,R,K):
    L = int(L)
    R = int(R)
    n = []
    for i in range(L+1,R+1):
        n.append(i)
    a = list(filter(check,n))
    return len(a)%(math.power(10,9)+7)


    
fptr = open(os.environ['OUTPUT_PATH'], 'w')
L = input()
R = input()

K = int(input().strip())

ans = getNumberOfIntegers(L, R, K)

fptr.write(str(ans) + '\n')

fptr.close()
