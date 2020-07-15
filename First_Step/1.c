#include<stdio.h>

static int SumofN(int n);
int main()
{

    printf("%d",SumofN(5));


    return 0;
}
static int SumofN(int n)
{
    if(n==1){
        return 1;
    }
   return n + SumofN(n-1);


}
