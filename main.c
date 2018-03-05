#include <stdio.h>

int main()
{
    int c;
    double newLineCount = 0;
    double tabsCount = 0;
    double spacesCount = 0;

    while ((c = getchar()) != EOF){
        if (c == '\n')
            ++newLineCount;
        if (c == '\t')
            ++tabsCount;
        if (c == ' ')
            ++spacesCount;
    }
    printf("New lines count: %.0f\n", newLineCount);
    printf("Tabs count: %.0f\n", tabsCount);
    printf("Spaces count: %.0f\n", spacesCount);
    return 0;
}