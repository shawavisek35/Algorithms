//Quick sort algorithm

#include<stdio.h>
int a[100];

//function declaration
void quickSort(int,int);
int partition(int,int);


//driver code
int main()
{
    int i,n;
    printf("Enter the no. of elements in the array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element at a[%d] : ",i);
        scanf("%d",&a[i]);
    }   

    //printing unsorted array
    printf("\n------------------UnSorted Array----------------------\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");

    //calling QuickSort function
    quickSort(0,n-1);
    
    //printing the sorted array
    printf("\n------------------Sorted Array----------------------\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
}

//function definition
void quickSort(int beg,int end)
{
    int loc;
    if(beg<end)
    {
        loc = partition(beg,end);
        quickSort(beg,loc-1);
        quickSort(loc+1,end);
    }
}

int partition(int beg,int end)
{
    int pivot=beg,i=beg,j=beg+1,temp;
    while(j<=end)
    {
        if(a[j]<=a[pivot])
        {
            i++;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
        j++;
    }
    temp = a[i];
    a[i] = a[pivot];
    a[pivot] = temp;
    return i;
}