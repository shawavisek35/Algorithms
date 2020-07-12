import sys
t = int(input())
def isSorted(l):
    for i in range(len(l)-1):
        if(l[i]>l[i+1]):
            return False
    return True

def solution():
    n = int(input())
    arr = list(map(int , input().rstrip().split()))
    localMin = arr[0]
    localIndex = 0
    if(isSorted(arr)):
        return 0
    else:
        for i in range(1,len(arr)):
            if(arr[i]<localMin):
                localMin = arr[i]
                arr.insert(localIndex,localMin)
            else:
                localIndex += 1



for __ in range(t):
    pass