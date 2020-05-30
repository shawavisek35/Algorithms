def solution(n):
    n = int(n)
    count = 0
    while(n>1):
        if(isEven(n)):
            n = n>>1
        else:
            if(n==3 or n%4==1):
                n = n-1
                
            else:
                n = n+1
                
        count+=1
        
    return count
            
def isEven(to_be_tested):
    if(to_be_tested%2==0):
        return True
    else:
        return False
        