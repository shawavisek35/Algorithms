import random
n = int(input())
arr = list(map(int,input().split()))
while(len(arr)!=1):
    i = random.randint(0,n-1)
    if(i==len(arr)-1):
        a = 0
        b = i-1
    elif(i==0):
        a = i+1
        b = len(arr)-1
    else:
        a = i+1
        b = i-1
    sum1 = arr[a] + arr[b]
    arr[i] = sum1
    arr.pop(a)
    arr.pop(b)
print(arr[0])