#include <stdio.h>
int main()
{
    int K;
    scanf("%d", &K);
    for (int i = 1; i <= K; i++)
    {
        if (K % i == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}