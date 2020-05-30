#matrix inversion through piggybanking mersge sort and reading input from a file

count_inversion = 0


def merge(beg,mid,end,numbers):
    global count_inversion
    temp = [0]*len(numbers)
    
    i = beg
    j = mid+1
    k = beg
    
    

    while(i<=mid and j<=end):
        
        if(numbers[i]<numbers[j]):
            temp[k] = numbers[i]
            i = i+1
            
        else:
            count_inversion = count_inversion + ((mid+1)-i)
            temp[k] = numbers[j]
            j = j+1

        k = k+1
            
        

    while(i<=mid):
        temp[k] = numbers[i]
        i=i+1
        k = k+1
    

    while(j<=end):
        temp[k] = numbers[j]
        j=j+1
        k = k+1
        

    
    #putting all the values from l to numbers
    for m in range(beg,k):
        numbers[m] = temp[m]




def merge_sort(beg,end,numbers):
    if(beg<end):
        mid = ((beg+end)//2)
        merge_sort(beg,mid,numbers)
        merge_sort(mid+1,end,numbers)
        merge(beg,mid,end,numbers)


file = input("Enter the file name : ")
fp = open(file , "r")
numbers = fp.read().split("\n")

#using list comprehension to perform conversion fron string to int
numbers = [int(i) for i in numbers]


merge_sort(0,len(numbers)-1,numbers)



print("Number of inversions : ",count_inversion)