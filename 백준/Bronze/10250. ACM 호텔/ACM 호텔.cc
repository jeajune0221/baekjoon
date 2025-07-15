#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int h, w, p;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &h, &w, &p);
        int ten, one;
        int result = 0;
        if (p % h)
        {
            ten = p % h;
        }
        else
            ten = h;
        if (p % h == 0)
            one = p / h;
        else
            one = (p / h) + 1;
        result = (ten * 100) + one;
        printf("%d\n", result);
    }
    return 0;
}