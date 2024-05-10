#include <stdio.h>
int main()
{
    int std = 0;
    printf("enter your standard\n");
    scanf("%d", &std);
    switch (std)
    {
    case 1:
        printf("your exam is at 7 am\n");
        break;
    case 2:
        printf("your exam is at 8 am\n");
        break;
    case 3:
        printf("your exam is at 9 am\n");
        break;
    case 4:
        printf("your exam is at 10 am\n");
        break;
    default:
        printf("wrong choice!");
    }
    return 0;
}