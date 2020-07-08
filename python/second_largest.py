#Program to find the Second largest element in an array

def findSecondLargest(end,arr):
    compared1 = findFirstLargest(0,end-1,arr,end)#getting the largest element
    compared2 = findFirstLargest(2,compared1[0]+2,compared1,compared1[0])#getting the second largest element
    return compared2[1]

def findFirstLargest(beg,end,arr,n):
    if(beg==end): #base condition
        compared = [0]*n #Initializing an empty list
        compared[0] = 1
        compared[1] = arr[beg]
        return compared
    
    #Recursively call both the subarrays to find the largest element
    compared1 = findFirstLargest(beg,(beg+end)//2,arr,n)
    compared2 = findFirstLargest((beg+end)//2+1,end,arr,n)
    if(compared1[1]>compared2[1]):
        k = compared1[0]+1
        compared1[0] = k
        compared1[k] = compared2[1]
        return compared1
    else:
        k = compared2[0]+1
        compared2[0] = k
        compared2[k] = compared1[1]
        return compared2

#Driver code
print("Second Largest Element is : ",findSecondLargest(10,[20,1990,12,1110,1,59,12,15,120,1110]))