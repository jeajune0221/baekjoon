#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int num = n % 5;
    int kg3 = 0, kg5 = 0;
    kg5 = n / 5;
    kg3 = num / 3;
    while (1)
    {
        if (kg5 < 0)
        {
            printf("-1");
            return 0;
        }
        if (!(n - kg5 * 5 - kg3 * 3))
        {
            break;
        }
        else
        {
            kg5 -= 1;
            num += 5;
            kg3 = num / 3;
        }
    }
    printf("%d", kg5 + kg3);
    return 0;
}