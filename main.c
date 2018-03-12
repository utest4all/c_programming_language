#include <string.h>
#include <stdio.h>


#define MAXLEN 1000
#define NEW_LINE_MESSAGE "New line! Stop getting symbols\n"
#define EOF_MESSAGE "End of file. Stop\n"

int main()
{

    int i = 0;
    int c;
    char string[MAXLEN];

    while (i < MAXLEN)
    {
        c = getchar();

        if (c == '\n')
        {
            printf("%s", NEW_LINE_MESSAGE);
            break;
        }
        else if (c == EOF)
        {
            printf("%s", EOF_MESSAGE);
            break;
        }

        string[i++] = c;

    }
    string[i] = '\0';

    printf("%s", string);


}