/*
 * =====================================================================================
 *
 *       Filename:  practice.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2021/03/29 00시 38분 49초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kungyu (KG), kglee@desilo.io
 *   Organization:  dev
 *
 * =====================================================================================
 */
#include <stdio.h>

int main(void)
{
    int nums[5] = { 10, 20, 30, 40, 50 };
    int* ptr1 = &nums[1] - 1;
    int* ptr2 = ptr1 - 1;

    printf("nums: %p\n", (void*)nums);
    printf("ptr1: %p\n", (void*)ptr1);
    printf("ptr2: %p\n", (void*)ptr2);

    return 0;
}
