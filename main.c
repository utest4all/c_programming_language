#include <stdio.h>

#define MAXLEN 10 /*max word len*/

int main() {
    int i, c, nextWordCounter;

    int wordLenght[MAXLEN];

    nextWordCounter = 0;

    for (i = 0; i < MAXLEN; ++i)
    {
        wordLenght[i] = 0;
    }

    while ((c = getchar()) != EOF )
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            wordLenght[nextWordCounter] = wordLenght[nextWordCounter] + 1;
            nextWordCounter = 0;
        }
        else
        {
            ++nextWordCounter;
        }

    }

    for (i = 0; i < MAXLEN; ++i)
    {
        printf("word count %d: %d\n", i, wordLenght[i]);
    }

    printf("Hystogramm goes here\n");

    for (i = 0; i < MAXLEN; ++i)
    {
        printf("%d > ", i);
        for (int j = 0; j <= wordLenght[i]; ++j)
        {
            printf("|");
        }
        printf("\n");
    }


}