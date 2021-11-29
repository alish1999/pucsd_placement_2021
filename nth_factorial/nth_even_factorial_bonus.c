#include <stdio.h>

int main()
{
    long long  n;
    long long a=1,b=1,k;
    k=a+b;
    scanf("%lld",&n);
    if(n==0)
    {
        printf("The 0 th even fibonacci number is 0");
        return 0;
    }
    
    for(long long i=1;i<n;)
    {
       a=b;
       b=k;
       k=a+b;
       if(k%2==0)
       {
           i++;
       }
    }
    printf("The %lld th even fibonacci number is %lld \n",n,k);

    return 0;
}
