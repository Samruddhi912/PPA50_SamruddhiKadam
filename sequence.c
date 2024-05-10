#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int ans = 0;
    printf("enter 1st number\n");
    scanf("%d", &a);
    printf("enter 2nd number\n");
    scanf("%d", &b);
    ans = a + b;
    printf("Addition = %d", ans);

    return 0;
}