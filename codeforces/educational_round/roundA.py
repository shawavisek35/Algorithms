t = int(input())
for __ in range(t):
    n = int(input())
    a = list(map(int,input().split()))
    i=0
    ki=0
    ii=0
    ji=0
    while(i<n-1):
        j = i+1
        if(a[j]<a[i]):
            i +=1
            continue
        else:
            try:
                k = min(a[j+1:n])
            except:
                break
            if(k<a[j]):
                ki = a.index(k)+1
                ji = j+1
                ii = i+1
                break
        break
    if(ii==0 or ji==0 or ki==0):
        print("NO")
    else:
        print("YES")
        print(ii,ji,ki)

                

        


