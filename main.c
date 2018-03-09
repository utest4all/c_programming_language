#include <stdio.h>
#define MAXLINE 1000


int getLine(char line[], int maxLine);
void copy(char to[], char from[]);


int main()
{

    int len;
    int max;
    int tmp;
    char line[MAXLINE];
    char longest[MAXLINE];

    len = 0;
    max = 0;
    while((tmp = getLine(line, MAXLINE)) > 0)
    {
        len += tmp;
        if (tmp != MAXLINE -1)
        {
            if (len > max)
            {
                max = len;
                copy(longest, line);
            }
            len = 0;

        }
    }

    if (max > 0)
    {
        printf("%s", longest);
    }

    return 0;

}

void copy(char to[], char from[])
{
    int i;

    i = 0;
    while((to[i] = from[i]) != '\0')
    {
        ++i;
    }
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