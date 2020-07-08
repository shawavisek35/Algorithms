import random
import matplotlib.pyplot as plt
import time

class FindMax(object):
    def __init__(self,arr):
        self.arr = arr

    def iterative_approach(self):
        maxItem = self.arr[0]
        for i in range(len(self.arr)):
            if(maxItem<self.arr[i]):
                maxItem = self.arr[i]
        return maxItem


    def recursive_approach(self,beg,end):
        if(end==beg):
            return self.arr[beg]
            
        max1 = self.recursive_approach(beg,(beg+end)//2)
        max2 = self.recursive_approach(((beg+end)//2)+1,end)
        if(max1>max2):
            return max1
        else:
            return max2

#driver code
arr = []
for i in range(1000):
    arr.append(random.randint(0,10000))

max_object = FindMax(arr)
t1 = time.clock()
iter_answer = max_object.iterative_approach()
t2 = time.clock()
print(str(iter_answer)+"founded in "+str(t2-t1)+" seconds")

t1 = time.clock()
recur_answer = max_object.recursive_approach(0,len(arr)-1)
t2 = time.clock()
print(str(recur_answer)+"founded in "+str(t2-t1)+" seconds")