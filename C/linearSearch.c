//Linear search programme

#include<stdio.h>

//function declaration
int linearSearch(int [],int,int);

//driver code
int main()
{
    int n,a[100],i,result,key;
    printf("Enter the no. of elements : ");
    scanf("%d",&n);

    //taking input
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
    result = linearSearch(a,n,key);
    if(result==-1)
    {
        printf("\nElement %d not found try with another element........\n",key);
    }
    else
    {
        printf("\nElement %d found at %d position.......\n",key,result);
    }
    return 0;
}

//function definition
int linearSearch(int a[],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            return i+1;
        }
    }
    return -1;

}