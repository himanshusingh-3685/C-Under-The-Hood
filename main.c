#include "lib_fun.h"

int main()
{
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {0,0,0,0,0};
    custom_memcpy(arr1+2,arr1,sizeof(arr1));
    mini_printf("%d %d %d",10,20,30);
    return 0;
}