#include <stdio.h>
#define LOWER 0
#define UPPER 200
#define STEP 20

int convertFahrToCelsius(int fahr);


int main()
{

    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("%d %d\n", fahr, convertFahrToCelsius(fahr));
    }

    return 0;

}


int convertFahrToCelsius(int fahr)
{
    int celsius;

    celsius = 5 * (fahr - 32) / 9;

    return celsius;
}