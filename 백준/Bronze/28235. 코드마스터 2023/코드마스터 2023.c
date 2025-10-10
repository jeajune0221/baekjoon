/*구호 SONGDO에 대해 HIGHSCHOOL로 응원.
구호 CODE에 대해 MASTER로 응원.
구호 2023에 대해 0611로 응원.
구호 ALGORITHM에 대해 CONTEST로 응원.*/
#include<stdio.h>
#include<string.h>
int main(void){
    char str[100];
    scanf("%s",str);
    if(strcmp(str,"SONGDO")==0){
        printf("HIGHSCHOOL");
    }
    else if(strcmp(str,"CODE")==0){
        printf("MASTER");
    }
    else if(strcmp(str,"2023")==0){
        printf("0611");
    }
    else{
        printf("CONTEST");
    }
    return 0;
}