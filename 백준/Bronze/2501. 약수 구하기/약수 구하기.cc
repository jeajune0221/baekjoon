#include<stdio.h>
int main(void){
    int n,k;
    int search=0;
    scanf("%d %d",&n,&k);
    int cont = 0;
    for(int i = 1; i <=n; i++){
        if(n%i == 0)
            cont++;
        if(cont == k){
            search = i;
            printf("%d",search);
            return 0;
        }
    }
    printf("%d",0);
}