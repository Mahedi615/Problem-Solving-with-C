#include <stdio.h>
int main()
{
    // take input
    char input;
    char a = 'a';

    scanf("%c", &input);
    if (input >= 'a' && input < 'z')
    {
        printf("%c", input + 1);
    }
    if (input == 'z')
    {
        printf("a");
    }

    return 0;
}