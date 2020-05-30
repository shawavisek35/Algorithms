//Merge sort algorithm

#include<stdio.h>
int a[100];

//function declaration
void mergeSort(int,int);
void merge(int,int,int);


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
    mergeSort(0,n-1);
    
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
void mergeSort(int beg,int end)
{
    int mid;
    if(beg<end)
    {
        mid = (beg+end)/2;   
        mergeSort(beg,mid);
        mergeSort(mid+1,end);
        merge(beg,mid,end);
    }
}

void merge(int beg,int mid,int end)
{
    int i=beg,j=mid+1,k=beg;
    int b[100];
    while(i<=mid && j<=end)
    {
        if(a[i]<=a[j])
        {
            b[k] = a[i];
            k++;
            i++;
        }
        else
        {
            b[k] = a[j];
            k++;
            j++;
        }
    }
    while(i<=mid)
    {
        b[k] = a[i];
        k++;
        i++;
    }
    while(j<=end)
    {
        b[k] = a[j];
        k++;
        j++;
    }

    for(i=beg;i<k;i++)
    {
        a[i] = b[i];
    }

}