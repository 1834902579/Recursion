#include<stdio.h>

int stepCont = 0;
int Fastpow(int a ,int b);
int main()
{

    printf("%d\n",Fastpow(3,6000));
    printf("%d",stepCont);

    return 0;
}
int Fastpow(int a , int b){
     stepCont++;
    if(b == 0)
    {
        return 1 ;
    }
    if(b%2==0){
        return Fastpow(a*a,b/2);
    }
    else
        return a*Fastpow(a,b-1);

}
