/*
3,5
 *****
 *****
 *****
 */
#include<stdio.h>
int main(void){
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i = 0; i < n; i++){
        for(int j= 0; j < m; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}