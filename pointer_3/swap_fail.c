/*
 * =====================================================================================
 *
 *       Filename:  swap.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2021/03/27 11시 44분 42초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kungyu (KG), kglee@desilo.io
 *   Organization:  dev
 *
 * =====================================================================================
 */

#include <stdio.h>

void swap(int num1, int num2)
{
    int tmp;
    tmp = num1;
    printf("tmp: %d, num1: %d\n", tmp, num1);
    num1 = num2;
    printf("num1: %d, num2: %d\n", num1, num2);
    num2 = tmp;
    printf("num2: %d, tmp; %d\n", num2, tmp);
}

int main(void)
{
    int num1 = 20;
    int num2 = 10;
    printf("num1: %d, num2: %d\n", num1, num2);
    printf("swapping\n");
    swap(num1, num2);
    printf("num1: %d, num2: %d\n", num1, num2);
}
