/*
 * =====================================================================================
 *
 *       Filename:  pointer_address.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2021/04/01 23시 46분 24초
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
    int x = 5;
    int* ptr_x = &x;

    printf("ptr_x value is: %p\n", (void*)ptr_x);
    printf("ptr_x address is: %p\n", (void*)&ptr_x);
}
