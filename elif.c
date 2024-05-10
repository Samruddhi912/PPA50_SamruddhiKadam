#include <stdio.h>
int main()
{
    int std = 0;
    printf("enter your standard\n");
    scanf("%d", &std);
    if (std == 1)
    {
        printf("your exam is at 7 am\n");
    }
    else if (std == 2)
    {
        printf("your exam is at 8 am\n");
    }
    else if (std == 3)
    {
        printf("your exam is at 9 am\n");
    }
    else if (std == 4)
    {
        printf("your exam is at 10 am\n");
    }
    else
    {
        printf("wrong std\n");
    }
    return 0;
}