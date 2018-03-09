#include <stdio.h>
#define MAXLINE 10


int getLine(char line[], int maxLine);
void copy(char to[], char from[]);


int main()
{

    int len;
    int cont;
    int last;

    char line[MAXLINE];

    len = 0;
    cont = 0;

    while((len = getLine(line, MAXLINE)) > 0)
    {
        last = line[len -1];

        if (len == MAXLINE -1 && last != '\n')
        {
            printf("%s", line);
            cont = 1;
        }
        else if (cont == 1)
        {
            printf("%s\n", line);
            cont = 0;
        }

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