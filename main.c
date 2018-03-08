#include <stdio.h>
#define LOWER 0;
#define UPPER 200;
#define STEP 20;

int convertFahrToCelsius(int fahr);


int main()
{

    int fahr, step, upper;

    fahr = LOWER;
    step = STEP;
    upper = UPPER;

    while (fahr <= upper)
    {
        printf("%d %d\n", fahr, convertFahrToCelsius(fahr));
        fahr = fahr + step;
    }

    return 0;

}


int convertFahrToCelsius(int fahr)
{
    int celsius;

    celsius = 5 * (fahr - 32) / 9;

    return celsius;
}