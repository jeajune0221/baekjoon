#include <stdio.h>
int main(void)
{
    char str[100];
    while (fgets(str, 101, stdin) != NULL)
    {
        printf("%s", str);
    }
    return 0;
}