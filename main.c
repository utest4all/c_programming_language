#include <stdio.h>

#define IN   1 /*inside word*/
#define OUT  0 /*outside word*/

int main() {
    int c, state;

    state = OUT;

    while((c = getchar()) != EOF){
        if (c != ' ' && c != '\n' && '\t'){
            state = IN;
            putchar(c);
        }
        else if ( state == IN ) {
            state = OUT;
            putchar('\n');
        }
    }
}