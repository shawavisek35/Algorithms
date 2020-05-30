//Factorial of a number using recursion

#include<stdio.h>

//function declaration
int findFactorial(int,int);

//diver code
int main()
{
    int n,factorial;
    printf("Enter the no. of terms : ");
    scanf("%d",&n);
    printf("\n------The factorial of %d------------- \n",n);
    factorial = findFactorial(n,1);
    printf("\nFactorial : %d\n",factorial);
    return 0;
}

//function definition
int findFactorial(int n,int factorial)
{
    if(n==0)
    {
        return factorial;
    }
    else
    {
        findFactorial(n-1,factorial*n);
    }
}