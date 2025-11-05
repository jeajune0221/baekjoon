#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    char s[150];
    int sum = 0;
    scanf("%s",s);
    for(int i = 0; s[i] != '\0'; i++){
        sum +=s[i] - 'A'+1;
    }
    printf("%d",sum);
    return 0;
}