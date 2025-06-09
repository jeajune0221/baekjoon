#include<stdio.h>
int main(){
    char str[101];
    int n=0;
    scanf("%s",str);
    for(int i = 0; str[i] !='\0'; i++)
        n++;
    printf("%d",n);
}