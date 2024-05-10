#include <stdio.h>
int main()
{
    int no = 11;
    int *ptr = &no;
    double data = 90.9999;
    double *dptr = &data;
    printf("%d\n", no);           // 11
    printf("%f\n", data);         // 90.999
    printf("%d\n", sizeof(no));   // 4
    printf("%d\n", sizeof(data)); // 8
    printf("%d\n", sizeof(ptr));  // 8
    printf("%d\n", sizeof(dptr)); // 8
    printf("%d\n", *ptr);         // 11
    printf("%f\n", *dptr);        // 90.999
    return 0;
}