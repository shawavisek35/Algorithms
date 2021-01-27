#include <stdio.h>

int main(){
long t,d,q,r,n,a[100000],i;
n=0;
scanf("%ld",&t);
while(t--){
    scanf("%ld",&d);
    q=d/((long)1e5-2);
    r=d%((long)1e5-2);

    for(i=1;i<d;i++)
    {
        a[3*i]=q;
        a[3*i+1]=r;
        a[3*i+2]=1;
        n+=3;
    }
    printf("%ld\n",n);
    for(i=0;i<n;i++)
        printf("%ld ",a[i]);
    printf("\n");
    n=0;
}
return 0;
}