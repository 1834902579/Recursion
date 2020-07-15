#include<stdio.h>


int main(){

    printf("%d",Tpath(4,4));
    return 0;
}
 int Tpath(int m,int n){

 if(m==1|| n==1) return 1 ;

 return Tpath(m,n-1) + Tpath(m-1,n);


 }
