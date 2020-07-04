#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'getMaxScore' function below.
#
# The function is expected to return an INTEGER.
# The function accepts STRING jewels as parameter.
#

def getMaxScore(jewels):
    # Write your code here
    score = 0
    i=0
    while(i<len(jewels)-1):
        
        if(jewels[i]==jewels[i+1]):
            j=i
            while(jewels[i]==jewels[j]):
                j +=1
            score +=1
            jewels = jewels[:i] + jewels[j:]
            i=0
        else:
            i +=1
        
    return score

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        jewels = input()

        ans = getMaxScore(jewels)

        fptr.write(str(ans) + '\n')

    fptr.close()
