#include <stdio.h>
int main(void)
{
    char str[55];
    int n = 0;
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == str[i + 1])
            n += 5;
        else
            n += 10;
    }
    printf("%d", n);
    return 0;
}