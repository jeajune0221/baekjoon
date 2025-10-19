/*Touchdown - 6 points
Field Goal - 3 points
Safety - 2 points
After touchdown
1 point (Field Goal or Safety) - Typically called the “Point after”
2 points (touchdown) - Typically called the “Two-point conversion”*/
#include<stdio.h>
int main(void){
    int arr[5],arr2[5];
    int sum = 0, sum2 = 0;
    scanf("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
    scanf("%d %d %d %d %d",&arr2[0],&arr2[1],&arr2[2],&arr2[3],&arr2[4]);
    sum = 6*arr[0] + 3*arr[1] + 2 * arr[2] + 1*arr[3] + 2*arr[4];
    sum2 = 6*arr2[0] + 3*arr2[1] + 2 * arr2[2] + 1*arr2[3] + 2*arr2[4];
    printf("%d ",sum);
    printf("%d",sum2);
    return 0;
}