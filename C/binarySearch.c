//Binary search programme

#include<stdio.h>

//function declaration
void binarySearch(int [],int,int,int);

//driver code
int main()
{
    int n,a[100],i,result,key;
    printf("Enter the no. of elements : ");
    scanf("%d",&n);

    //taking input
    printf("\nEnter element in sorted order.........\n");
    for(i=0;i<n;i++)
    {
        printf("Enter element at a[%d] : ",i);
        scanf("%d",&a[i]);
    }

    //printing the array
    printf("\n---------------------------Array------------------\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");

    printf("Enter the element to search : ");
    scanf("%d",&key);

    //calling linear search method
    binarySearch(a,0,n-1,key);
   
    return 0;
}

//function definition
void binarySearch(int a[],int beg,int end,int key)
{
    int i,mid;
    mid = (beg+end)/2;

    if(a[mid]==key)
    {
        printf("\nElement %d found at %d position....\n",key,mid+1);
        return;
    }
    

    else
    {
        if(a[mid]>key)
        {
            binarySearch(a,beg,mid,key);
        }
        else
        {
            binarySearch(a,mid+1,end,key);
        }
    }
    

}