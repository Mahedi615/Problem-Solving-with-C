#include <stdio.h>

int main()
{
    // Step 1: Read the input number
    int N;
    scanf("%d", &N);

    // Step 2: Check if the number is within the desired range
    if (N < 10 || N > 99)
    {

        return 0;
    }

    // Step 3: Extract the tens and units digits
    int tens_digit = N / 10;
    int units_digit = N % 10;

    // Step 4: Check divisibility
    if ((units_digit != 0) && (tens_digit % units_digit == 0 || units_digit % tens_digit == 0))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
