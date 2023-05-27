#include <stdio.h>

int main()
{
    // Step 1: Read the input quantities
    int e, m, b;
    scanf("%d%d%d", &e, &m, &b);
    int temp_lowest = e < m ? e : m;
    int lowest = temp_lowest < b ? temp_lowest : b;
    // printf("%d", lowest);
    int min_e = 1, min_b = 1, min_m = 1;
    int min_available = m < b ? m : b;
    int max_possible;
    int temp_max = lowest;
    int remain_b = b - lowest;
    int remain_m = m - lowest;
    int remain_e = e - lowest;
    int required_e = 2 * remain_b;
    // printf("before:%d", temp_max);

    if (remain_m < 1)
    {

        if (remain_e >= required_e)
        {
            temp_max = temp_max + remain_b;
        }
        else
        {
            temp_max = temp_max + remain_e / 2;
        }
    }
    printf("%llu", temp_max);
    return 0;
}
