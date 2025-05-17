#include <stdio.h>
int main()
{
    int N = 0, m, M, t, r, time = 0, result = 0, k=0;
    scanf("%d %d %d %d %d", &N, &m, &M, &t, &r);
    k = m ;
    if (k+t > M)
    {
        printf("-1");
        return 0;
    }
    while (1)
    {
        if (k + t <= M)
        {
            time++;
            k += t;
        }

        else {
            if (k-r <= m)
                k = m;
            else k -= r;

        }
        result +=1;
        if (time == N)
        {
            break;
        }

    }
    printf("%d",result);
}



