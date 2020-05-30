def solution(xs):
    p = 0
    t = 0
    coun = 0
    if(len(xs)==1):
        return str(xs[0])
    
    else:
        xs.sort()
        for i in xs:
            if(i==1 or i==0):
                continue

            elif(i<0):
                t = i
                if(coun==0):
                
                    p = p+i
                    coun= coun+1
                else:
                    p = p*i
                    coun = coun + 1
            else:
                if(coun==0):
                    p=p+i
                    coun = coun + 1
                else:
                    p = p*i
                    coun = coun+1
        
        if(p>0):
            return str(p)
        else:
            if(coun==1):
                p = p-t
            p = p//t
            return str(p)

s = solution([-2,-3,4,-5])
print(s)
    
"""
original solution = 
def solution(xs):
    p = 1
    t = 0
    if(len(xs)==1):
        return str(xs[0])
        
    coun = xs.count(0)
    if(coun==len(xs)):
        return str(0)
        
    else:
        xs.sort()

        for i in xs:
            if(i==1 or i==0):
                continue
            elif(i<0):
                t = i
                p = p*i
            else:
                p = p*i
        
        if(p>0):
            return str(p)
        else:
            p = p//t
            return str(p)
"""
        