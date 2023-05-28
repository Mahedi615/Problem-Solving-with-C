#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int sum_of_even = 0;
    int sum_of_odd = 0;
    for (int i = 0; i < N; i++)
    {
        int a;
        scanf("%d", &a);

        if (a % 2 == 0)
        {
            sum_of_even += a;
        }
        else
        {
            sum_of_odd += a;
        }
    }
    printf("%d %d", sum_of_even, sum_of_odd);

    return 0;
}