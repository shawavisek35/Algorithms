t = int(input())
for __ in range(t):
    n = int(input())

    l = []
    l.append("O")
    if(n>1):
        for i in range(1,n):
            l.append(".")
        for j in range(i+1,64):
            l.append("X")
    else:
        for i in range(1,64):
            l.append("X")
    i=0
    while(i<len(l)):
        for j in range(8):
            print(l[i],end="")
            i+=1
        print()

        
