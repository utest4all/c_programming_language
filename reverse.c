#include <stdio.h>
#include <string.h>

int main() {
    int i, j;
    char temp;
    char name[] = "ivan" ;
    char last_name[5] = {'i', 'v', 'a', 'n', 'o', 'v'};

    for (i = 0, j = strlen(last_name) - 1; i < j; i++, j--)
    {
        temp = last_name[i];
        last_name[i] = last_name[j];
        last_name[j] = temp;
    }

    for (i = 0; i < strlen(last_name); i++)
    {
        printf("%c", last_name[i]);
    }

    printf("\n");

}