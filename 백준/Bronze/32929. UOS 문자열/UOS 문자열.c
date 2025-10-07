#include<stdio.h>
int main(void){
    long long n;
    scanf("%lld",&n);
    if(n%3 == 2){
        printf("O");
    }
    else if(n%3==1){
        printf("U");
    }
    else{
        printf("S");
    }
    return 0;
}