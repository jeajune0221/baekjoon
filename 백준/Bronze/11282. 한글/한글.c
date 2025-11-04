#include <stdio.h>

int main() {
    int n;
    unsigned char s[4];
    scanf("%d",&n);
    int code = 0xAC00 + (n - 1);
    s[0] = 0xE0 | ((code >> 12) & 0x0F);
    s[1] = 0x80 | ((code >> 6) & 0x3F);
    s[2] = 0x80 | (code & 0x3F);
    s[3] = '\0';
    
    printf("%s",s);
    return 0;
}