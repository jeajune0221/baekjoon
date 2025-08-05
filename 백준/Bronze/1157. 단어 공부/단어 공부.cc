#include <stdio.h>
int main(void)
{
    int check = 0, max = 0, in = 0;
    char st[1000000];
    int str[27] = {0};
    scanf("%s", st);
    for (int i = 0; st[i] != '\0'; i++)
    {
        if ('a' <= st[i] && st[i] <= 'z')
            st[i] -= 32;
        str[st[i] - 'A']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (str[i] > max)
        {
            max = str[i];
            in = i;
            check = 0;
        }
        else if (max == str[i])
            check = 1;
    }
    if (check == 1)
        printf("?");
    else
    {
        printf("%c", in + 65);
    }
    return 0;
}