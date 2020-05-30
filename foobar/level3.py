def solution(xs):
    if(len(xs)==1):
        if(xs[0]>=0):
            return str(xs[0])
        else:
            return str(0)
    else:
        negative = []
        positive = []
        max_product = 1
    
        for i in xs:
            if(i>1):
                positive.append(i)
            elif(i<0):
                negative.append(i)
        negative.sort()
        
        for i in positive:
            if(i<=1):
                continue
            else:
                max_product = max_product * i

        if(len(negative)%2==0):
            p = negative
        else:
            p = negative[0:len(negative)-1]
    
        for i in p:
            max_product = max_product *i
        return str(max_product)
