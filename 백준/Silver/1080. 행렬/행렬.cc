#include <stdio.h>
int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);

    int A[51][51] = {0};
    int B[51][51] = {0};
    int cont = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%1d", &A[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%1d", &B[i][j]);
        }
    }
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = 0; j < m - 2; j++)
        {
            if (A[i][j] != B[i][j])
            {
                for (int k = 0; k < 3; k++)
                {
                    for (int l = 0; l < 3; l++)
                    {
                        if (A[i + k][j + l])
                            A[i + k][j + l] = 0;
                        else
                            A[i + k][j + l] = 1;
                    }
                }
                cont++;
            }
        }
    }
    int check = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (A[i][j] != B[i][j])
            {
                check = 0;
                break;
            }
        }
        if (!check)
            break;
    }

    if (check)
    {
        printf("%d", cont);
    }
    else
    {
        printf("-1");
    }

    return 0;
}