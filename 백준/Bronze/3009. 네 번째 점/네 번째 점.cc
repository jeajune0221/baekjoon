#include <stdio.h>

int main(void)
{
    int x[5], y[5];
    int yresult, xresult;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d", &x[i], &y[i]);
    }

    if (x[0] == x[1])
        xresult = x[2];
    else if (x[0] == x[2])
        xresult = x[1];
    else
        xresult = x[0];

    if (y[0] == y[1])
        yresult = y[2];
    else if (y[0] == y[2])
        yresult = y[1];
    else
        yresult = y[0];

    printf("%d %d", xresult, yresult);

    return 0;
}
