#include <stdio.h>
#include <string.h>
#define MAXLINE 100



char* reverse(char string[]);
int getLine(char line[], int maxline);


int main()
{
    int len;
    char line[MAXLINE];

    while((len = getLine(line, MAXLINE)) > 0)
    {
       printf("%s\n", line);
       printf("%s\n", reverse(line));
    }

    return 0;

}


char* reverse(char line[])
{
    int i, j;
    char tmp;

    for (i = 0, j = strlen(line) -1; i < j; ++i, --j)
    {
        tmp = line[i];
        line[i] = line[j];
        line[j] = tmp;
    }

    return line;
}

int getLine(char line[], int maxLine)
{
    int c, i;

    for (i = 0; i < maxLine - 1 && (c = getchar()) != EOF && c !='\n'; ++i) {
        line[i] = c;

    }

    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';

    return i;
}