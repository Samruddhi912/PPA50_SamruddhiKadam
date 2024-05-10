#include <stdio.h>
#include <stdlib.h> //for malloc,calloc.realloc & free
int main()
{
    int arr[5]; // static memory allocation
    int size = 0;
    int *ptr = NULL;
    printf("enter number of element: \n");
    scanf("%d", &size);
    ptr = (int *)malloc(size * sizeof(int));
    // =(int*)malloc(6*4);
    // =(int*)malloc(24);

    // use the memory

    free(ptr);
    return 0;
}
