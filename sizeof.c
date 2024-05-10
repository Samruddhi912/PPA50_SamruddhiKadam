#include <stdio.h>
int main()
{
    int i = 11;              // 4 byte
    char ch = 'A';           // 1 byte
    float f = 90.89;         // 4 byte
    double d = 90.753429819; // 8 byte
    int arr[5];              // 20 byte
    double brr[5];           // 40 byte
    float crr[5];            // 20 byte
    char drr[5];             // 5 byte
    printf("%lu\n", sizeof(arr));
    printf("%lu\n", sizeof(brr));
    printf("%lu\n", sizeof(crr));
    printf("%lu\n", sizeof(drr));
    printf("%lu\n", sizeof(ch)); // lu-long unsigned
    printf("%lu\n", sizeof(i));
    printf("%lu\n", sizeof(f));
    printf("%lu\n", sizeof(d));

    return 0;
}