def arrangeStudents(a, b):
    # Write your code here
    a.sort()
    b.sort()
    a.insert(0,0)
    b.insert(0,0)
    result = "YES"
    if(a[1]>b[1]):
        for i in range(1,len(a)):
            
            if(b[i]>a[i] or b[i]<a[i-1]):
                result = "NO"
                break

    else:
        for i in range(1,len(a)):
            
            if(a[i]>b[i] or a[i]<b[i-1]):
                result = "NO"
                break
        
    return result


a = [5,3,8]
b = [2,4,6]

print(arrangeStudents(a,b))