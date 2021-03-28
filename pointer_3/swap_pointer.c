/*
 * =====================================================================================
 *
 *       Filename:  swamp_pointer.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2021/03/27 11시 56분 06초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kungyu (KG), kglee@desilo.io
 *   Organization:  dev
 *
 * =====================================================================================
 */

#include <stdio.h>

void swap_pointer(int* a, int* b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

int memory_check(int a)
{
    printf("in memory check\n");
    printf("a address is: %p\n", &a);
    return 0;
}

int main()
{
    int num1 = 10;
    int num2 = 30;

    int* ptr1 = &num1;

    printf("num1_address in main: %p\n", ptr1);
    memory_check(num1);

    printf("num1: %d, num2: %d\n", num1, num2);
    swap_pointer(&num1, &num2);
    printf("num1: %d, num2: %d\n", num1, num2);
}
