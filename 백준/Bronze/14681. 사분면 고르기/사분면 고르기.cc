// #include <stdio.h>
//
// #include <stdlib.h>
//
// int main() {
//     int result = 0,sum=0;
//     scanf("%d",&result);
//     if(result==1) {
//         printf("소수X");
//         return 0;
//     }
//
//     for(int i=1;i <=result;i++) {
//         if (result%i==0) {
//             sum++;
//         }
//
//
//     }
//     if (sum > 2) {
//         printf("소수X");
//     }
//     else {
//         printf("소수");
//     }
//
//
// }
#include <stdio.h>

int main() {
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    if (x > 0) {
        if (y<0)
            printf("4");
        else
            printf("1");

    }
    else
        if (y>0)
            printf("2");
        else
            printf("3");
}