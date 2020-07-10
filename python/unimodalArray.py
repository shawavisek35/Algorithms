"""
    Implementation of the above algorithm using python program 
"""

def findLargest(beg,end,arr):
    
    while(beg<=end):
        mid = (beg+end)//2
        if(arr[mid]>arr[mid-1] and arr[mid]<arr[mid+1]):
            beg = mid

        elif(arr[mid]>arr[mid-1] and arr[mid]>arr[mid+1]):
            
            return arr[mid]

        else:
            end = mid
        

        

#driver code
arr = [10 , 20 , 35 , 300 , 80 , 200 , 1 , 0]
largest_element = findLargest(0,len(arr)-1,arr)
print("The largest element is : ",largest_element)