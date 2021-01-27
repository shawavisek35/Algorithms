t = input()
t = int(t)

for _ in range(t):
    n, m, x, y = input().split()
    n = int(n)
    m = int(m)
    x = int(x)
    y = int(y)
    n -= 1
    m -= 1
    flag = 0

    if(n==1 and m==1):
        flag=1
    elif(n%x==0):
        if(m%y==0):
            flag=1
    elif((n-1)%x==0):
        if((m-1)%y==0):
            flag=1


    if flag == 1:
        print("Chefirnemo");
    else:
        print("Pofik")