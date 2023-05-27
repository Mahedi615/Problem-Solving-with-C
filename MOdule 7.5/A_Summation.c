#include <stdio.h>
#include <stdlib.h> // for abs function

int main()
{
    // Step 1: Read the number N
    int N;

    scanf("%d", &N);

    // Step 2: Read the array of N numbers
    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    // Step 3: Calculate the absolute summation
    int absoluteSum = 0;
    for (int i = 0; i < N; i++)
    {
        absoluteSum += A[i];
    }

    // Step 4: Print the result
    int sum = abs(absoluteSum);
    printf("%d", sum);

    return 0;
}
