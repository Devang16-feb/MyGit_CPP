#include<stdio.h>
#include<stdlib.h>  // for malloc, callo,realloc & free

int main()
{
    int Arr[5];  // Static memory allocation
    int Size = 0;
    int *ptr = NULL;

    printf("enter the number of elements :\n");
    scanf("%d",&Size);

    ptr = (int *)calloc(Size , sizeof(int));
   // ptr = (int *)calloc(12 , 500ml);   first calculated
    //  = (int *)malloc(6000ml);       direct parameter passed
    
    //Use The Memory 
    free(ptr);
    return 0;
}