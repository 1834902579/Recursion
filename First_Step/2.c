#include<stdio.h>

int stepCount = 0 ;
int SumofPow(int a , int b );
int Fastpow(int a, int b );

int main()
{
    printf("%d",SumofPow(4,4));
    printf("\nstep : %d",stepCount);
     printf("\n%d",Fastpow(4,24));
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
int Fastpow(int a , int b){

   stepCount ++;
    if(b==0){
        return 1 ;

    }

    if(b%2==0){
        return Fastpow(a*a,b/2);

        }
        return a * Fastpow(a,b-1);


}

