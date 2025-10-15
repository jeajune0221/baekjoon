#include<stdio.h>
int main(void){
    char str[1000000];
    scanf("%s",str);
    for(int i = 0; str[i] != '\0'; i++){
        str[i] -=32;
    }
    printf("%s",str);
    return 0;
}