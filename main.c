#include <stdio.h>

int main()
{
    int c;

    c = getchar() != EOF;
    if (c == 1)
        printf("1");
    else
        printf("0");

    return 0;
}