/*
 * =====================================================================================
 *
 *       Filename:  memory_array.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2021/03/27 12시 30분 04초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kungyu (KG), kglee@desilo.io
 *   Organization:  dev
 *
 * =====================================================================================
 */
#include <stdio.h>

void array(int arr[])
{
    printf("arr address; %p\n", (void*)&arr);
    printf("arr: %p\n", (void*)arr);
}

int main()
{
    int original[3] = {1,2,3};
    
    printf("original address: %p\n", (void*)&original);
    array(original);

    return 0;
}
