#include <limits.h>
#include <stdio.h>


int main()
{

    printf("Integer datatypes:\n");
    printf("%d <= char <= %d\n", CHAR_MIN, CHAR_MAX);
    printf("%d <= int <= %d\n", INT_MIN, INT_MAX);
    printf("%ld <= long <= %ld\n", LONG_MIN, LONG_MAX);
    printf("%d <= signed char <= %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("%d <= short <= %d\n", SHRT_MIN, SHRT_MAX);
    printf("0 <= unsigned char <= %d\n", UCHAR_MAX);
    printf("0 <= unsigned int <= %u\n", UINT_MAX);
    printf("0 <= unsigned long <= %lu\n", ULONG_MAX);
    printf("0 <= unsigned short <= %d\n", USHRT_MAX);
    return 0;

}