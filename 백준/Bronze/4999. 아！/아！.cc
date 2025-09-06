#include<stdio.h>
int main(void){
    char str[1010];
    char str1[1100];
    scanf("%s",str);
    int cont1 = 0, cont2 = 0;
    for(int i = 0; str[i] !='\0'; i++ ){
        if(str[i] == 'a'){
            cont1++;
        }
    }
    scanf("%s",str1);
    for(int i = 0; str1[i] !='\0'; i++ ){
        if(str1[i] == 'a'){
            cont2++;
        }
    }
    if(cont1 >= cont2){
        printf("go");
    }
    else{
        printf("no");
    }
    return 0;
    
}