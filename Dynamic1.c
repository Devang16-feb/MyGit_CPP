#include<stdio.h>
#include<stdlib.h>  // for malloc, callo,realloc & free

int main()
{
    int Arr[5];  // Static memory allocation
    int Size = 0;
    int *ptr = NULL;

    printf("enter the number of elements :\n");
    scanf("%d",&Size);

    ptr = (int *)malloc(Size * sizeof(int));
    //  = (int *)malloc(6*4);
    //  = (int *)malloc(24);

    
    //Use The Memory 

    free(ptr);
    return 0;
}