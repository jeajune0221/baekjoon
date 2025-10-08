//N := ⌊(n1 + 1)(n2 + 1)/(n12 + 1) - 1⌋
#include<stdio.h>
int main(void){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d",(a+1)*(b+1)/(c+1) - 1);
    return 0;
}