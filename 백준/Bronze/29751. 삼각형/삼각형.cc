#include <stdio.h>

int main() {
    int w,h;
    double result;
    scanf("%d %d",&w,&h);
    result = (float) w*h/2;
    printf("%.1lf",result);
        
    return 0;
}