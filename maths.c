#include <stdio.h>
int addition(int x, int y)
{
    int ans = 0;
    ans = x + y;
    return ans;
}
int main()
{
    int a = 10;
    int b = 11;
    int ret = 0;
    printf("inside main function\n");
    ret = addition(a, b);
    printf("Addition = %d\n", ret);
    return 0;
}