/*예제 입력 1 
0 1 2 2 2 7
예제 출력 1 
1 0 0 0 0 1*/
#include<stdio.h>
int main(void){
    int a,b,c,d,e,f;
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    printf("%d %d %d %d %d %d",1-a,1-b,2-c,2-d,2-e,8-f);
}