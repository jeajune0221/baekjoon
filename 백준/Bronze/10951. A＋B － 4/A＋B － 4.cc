#include <stdio.h>

int main() {
    while(1){
        int a,b;
        if (scanf("%d %d",&a,&b)==EOF)
            break;
        else 
            printf("%d",a+b);
        printf("\n");
    }
    return 0;
}