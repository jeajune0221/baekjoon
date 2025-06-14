#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        char str[21];
        int k=0,a=0;
        scanf("%d %s",&k ,str);
        for(int j =0; str[j] != 0; j++){
            a++;
        }
        
        for (int m = 0; m < a; m++){
            for (int t = 0; t < k; t++){
                printf("%c",str[m]);
            }
        }
            printf("\n");
    }
    
    return 0;
}