import random

t = int(input())
for __ in range(t):
    n = int(input())
    number = random.randint(1,1000)
    for i in range(n):
        print(number,end=" ")
    print()
    