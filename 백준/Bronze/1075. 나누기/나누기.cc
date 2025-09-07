#include<stdio.h>
int main(void){
    int n;
    int x;
    scanf("%d",&n);
    scanf("%d",&x);
    n = n/100 * 100;
    for (int i = 0; i < 100; i++) {
        if ((n + i) % x == 0) {
            printf("%02d\n", i);
            break;
        }
    }

    return 0;
}
