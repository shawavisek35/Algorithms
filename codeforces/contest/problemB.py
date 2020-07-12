from math import gcd
import sys
t = int(input())
for __ in range(t):
    lcmMin = sys.maxsize
    x = 0
    y = 0
    n = int(input())
    for i in range(1,n//2+1):
        a = i
        b = n - a
        lcm = (a*b)//gcd(a,b)
        if(lcm<lcmMin):
            lcmMin = lcm
            x = a
            y = b

    print(x,y)