//Sum of n natural numbers using recursion

#include<stdio.h>

//function declaration
int findSum(int,int);

//diver code
int main()
{
    int n,sum;
    printf("Enter the no. of terms : ");
    scanf("%d",&n);
    printf("\n------The sum of natural numbers upto %dth term------------- \n",n);
    sum = findSum(n,0);
    printf("\nSum : %d\n",sum);
    return 0;
}

//function definition
int findSum(int n,int sum)
{
    if(n==0)
    {
        return sum;
    }
    else
    {
        findSum(n-1,sum+n);
    }
}