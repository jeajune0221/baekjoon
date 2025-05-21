// #include <stdio.h>
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
// }
#include <stdio.h>
#include <stdlib.h>

int main() {
    int sum=0,arr[100],n=0;
    scanf("%d",&n);

    for(int k = 0; k < n; k ++){
        int b=0;
        scanf("%d",&arr[k]);

        if(arr[k]==1) {
            b==0;
        }
        else {for(int i=2;i <=arr[k];i++) {
            if (arr[k]%i==0) {
                b++;
            }
        }

        }

        if (b ==1) {
            sum++;
        }


    }
    printf("%d",sum);
}