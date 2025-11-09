#include<stdio.h>
int main(void){
    int n;
    int cont = 0;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        int aa;
        scanf("%d",&aa);
        if(aa%2)
            cont++;
    }
    printf("%d",cont);
    return 0;
}