#include <stdio.h>
int multiplication(int No1, int No2)
{
    int total = No1 * No2;
    return total;
}
int main()
{
    int a = 0, b = 0, res = 0;
    printf("enter first number: \n");
    scanf("%d", &a);
    printf("enter second number: \n");
    scanf("%d", &b);
    res = multiplication(a, b);
    printf("the result = %d\n", res);

    return 0;
}