#include<stdio.h>

int stepCount = 0 ;
int SumofPow(int a , int b );


int main()
{
    printf("%d",SumofPow(4,4));
    printf("\nstep : %d",stepCount);
 
    return 0 ;
}
 int SumofPow(int a , int b )
{
    stepCount++;
    if(b==0){
        return 1 ;
    }

    return a* SumofPow(a,b-1);
}
