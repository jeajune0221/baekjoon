#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d",&a,&b);
    scanf("%d",&c);
    b+=c;
    while (b>=60)
    {
        b-=60;
        a+=1;
    }
    if (a>=24) {
        a-=24;
    }
    printf("%d %d",a,b);

}







