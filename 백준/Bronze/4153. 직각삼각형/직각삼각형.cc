#include <stdio.h>

int main() {
    while (1){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if (a == 0 && b == 0 && c== 0)
            break;
        if (a < b){
            int temp = a;
            a = b;
            b = temp;
            
        }
        if (a < c){
            int temp = a;
            a = c;
            c = temp;
        }
        if (a * a == b*b + c*c)
            printf("right\n");
        else 
            printf("wrong\n");
        
    }
    return 0;
}