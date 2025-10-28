#include<stdio.h>
int main(void){
    int a,v,w;
    scanf("%d",&a);
    scanf("%d %d",&w,&v);
    if(a <= w/v){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}