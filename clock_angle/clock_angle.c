#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    float h= atoi(argv[1]);
    float m= atoi(argv[2]);
    
    if(m==60)
    {
        m=0;
        h++;
    }
    float hr = (h*30 + m*0.5); //hour angle
    float mr = m*6 ; //minute angle
    float ans = abs(hr -mr);
    if(ans>180)
    ans=360-ans;
    printf("angle is %f",ans);
    

    return 0;
}
