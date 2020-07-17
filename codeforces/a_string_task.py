t = int(input())

def solve():
    result = "YES"
    l = []
    x,y,z = map(int,input().split())
    if((y==z and x>y) or (y>z and x<y)):
        result = "NO"
    elif(x==y==z):
        l = [x,y,z]
    elif(x>y and y<z):
        l = [x,y,z-y]
    else:
        l = [x,x,y]


    if(result == "NO"):
        print(result)
    else:
        print(result)
        for i in l:
            print(i,end=" ")
        print()


for __ in range(t):
    solve()