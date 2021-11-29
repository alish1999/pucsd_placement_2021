#include <stdio.h>

int main()
{
    long long  n;
    long long a=1,b=1,k;
    k=a+b;
    scanf("%lld",&n);
    if(n==0)
    {
        printf("The 0 th fibonacci number is 0");
    }
    for(long long i=3;i<n;i++)
    {
       a=b;
       b=k;
       k=a+b;
    }
    printf("The %lld th fibonacci number is %lld \n",n,k);

    return 0;
}
