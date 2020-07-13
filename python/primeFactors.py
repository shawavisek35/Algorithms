#Program to find the prime factorization of a given composite number
import math
n = int(input())
prime_factors = []

def isPrime(n):
    if(n==2):
        return True
    for i in range(2,int(math.sqrt(n))+1):
        if(n%i==0):
            return False
    return True

while(not isPrime(n)):
    for i in range(2,n):
        if(isPrime(i)):
            if(n%i==0):
                n = n//i
                prime_factors.append(i)
                break

prime_factors.append(n)
print(prime_factors)
