#include <stdio.h>

int main()
{
    char c;

    printf("Enter a character:");
    scanf("%C", &c);

    printf("ASCII value of %c = %d", c, c);

    return 0;
}