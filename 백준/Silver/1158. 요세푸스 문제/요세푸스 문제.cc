#include <stdio.h>
int que[50000];
int main(void)
{
    int n, k;
    scanf("%d %d", &n, &k);
    printf("<");
    int count = 0;
    int cont = 0;

    for (int i = 1; i <= n; i++)
    {
        que[i - 1] = i;
    }
    while (1)
    {
        int check = 1;
        for (int i = 0; i < n; i++)
        {

            if (!que[i])
            {
                continue;
            }
            else
            {
                cont++;
            }
            if (cont == k)
            {
                count++;

                cont = 0;
                if (count == n)
                {
                    printf("%d", que[i]);
                }
                else
                {
                    printf("%d, ", que[i]);
                }

                que[i] = 0;
            }
            for (int j = 0; j < n; j++)
            {
                if (que[j])
                {
                    check = 0;
                    break;
                }
                else
                {
                    check = 1;
                }
            }
            if (check)
            {
                break;
            }
        }
        if (check)
        {
            break;
        }
    }
    printf(">");
    return 0;
}