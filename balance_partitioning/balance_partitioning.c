#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int n=atoi(argv[1]);
    
    int i;
    int arr[n];
    for(i=0;i<n;i++)
    {
        arr[i]= 2*i +4;
    }
    int l = n/2; //first partition
    int lsum,rsum;
    int diff,tdiff;
    for(i=0;i<l;i++)
        {
            lsum+=arr[i];
        }
    for(i=l+1;i<n;i++)
        {
            rsum+=arr[i];
        }
        diff=abs(rsum-lsum);
        tdiff=diff; // first diff
     

   while(abs(tdiff)<=abs(diff)) // increment partition as long as tdiff is less
    {
        
        
        lsum=0;
        rsum=0;
        for(i=0;i<l;i++)
        {
            lsum+=arr[i];
        }
         for(i=l+1;i<n;i++)
        {
            rsum+=arr[i];
        }
        tdiff=rsum-lsum;
        if(abs(tdiff)<diff)
        {
        diff=abs(tdiff);
        }
        else
        {
        break;
        }
        l++;
    }
    
    
    
    printf("Partition at %d",l);
    

    return 0;
}
