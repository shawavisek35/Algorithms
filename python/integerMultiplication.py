#Integer Multiplication algorithm in python
import math

def IM(n1,n2,pp,count):
    if(n2<=0):
        return pp
    
    else:
        pp = pp + ((n2%10)*n1)*math.pow(10,count)
        return IM(n1,n2//10,pp,count+1)

n1 = int(input("Enter first number : "))
n2 = int(input("Enter second number : "))

result = IM(n1,n2,0,0)
print(result)