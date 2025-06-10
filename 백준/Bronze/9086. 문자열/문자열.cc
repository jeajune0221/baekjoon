#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n ; i++){
        char str[101];
        int a=0;
        scanf("%s",str);
        for(int k = 0; str[k] != '\0'; k++){
            a++;
        }
        printf("%c%c\n",str[0],str[a-1]);
    }
    return 0;
}