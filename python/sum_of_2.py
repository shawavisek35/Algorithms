def findPair(n,s):
    founded = {}
    for i in n:
        a = s-i
        if(a>0):
            if a in founded:
                return (a,i)
            else:
                founded[i] = True
    return (0,-1)

s = int(input())
n = list(map(int, input().split()))

answer = list(findPair(n,s))

if(answer[1] == -1):
    print("Such a pair does not exist.")
else:
    print("The pair is : ",answer[0],answer[1])

