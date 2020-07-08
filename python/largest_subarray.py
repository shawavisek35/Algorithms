#Program to find the largest subarray from a given array
import sys

def middle_largest(beg,end,mid,arr):
    left_sum = -(sys.maxsize)
    
    i=mid
    sum1 = 0

    while(i<=mid and i>=beg):
        sum1 += arr[i]
        if(sum1>left_sum):
            left_sum = sum1
        
        i -= 1

    j=mid+1
    sum1 = 0
    right_sum = -(sys.maxsize)

    while(j>=mid+1 and j<=end):
        sum1 += arr[j]
        if(sum1>right_sum):
            right_sum = sum1
        
        j += 1
    return max([left_sum+right_sum,left_sum,right_sum])
        

def largest_substring(beg,end,arr):
    if(beg==end):
        return arr[beg]
    
    left_sub = largest_substring(beg,(beg+end)//2,arr)
    right_sub = largest_substring((beg+end)//2+1,end,arr)
    entire_array = middle_largest(beg,end,(beg+end)//2,arr)

    return max([left_sub,right_sub,entire_array])



#driver code
arr = [13,-3,-25,20,-3,-16,-23,18,20,-7,12,-5,-22,15,-4,7]
print(largest_substring(0,len(arr)-1,arr))
