#include<stdio.h>
#include<string.h>

int main () {
    char str[100];
    int a,num=1;
    scanf("%s",str);
    a= strlen(str);

    for (int i =0;  i<a/2; i++) {
        if (str[i] !=str [a-i-1]) {
            num=0;
            break;
        }
    

    }
    printf("%d",num);


}
