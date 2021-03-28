/*
 * =====================================================================================
 *
 *       Filename:  sum.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2021/03/27 12시 51분 10초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kungyu (KG), kglee@desilo.io
 *   Organization:  dev
 *
 * =====================================================================================
 */
#include <stdio.h>

void add(int a, int b, int* c)
{
    int sum = a + b;
    *c = sum;
}

int main(void)
{
    int n1 = 1;
    int n2 = 3;
    int sum;

    add(n1, n2, &sum);
    printf("the sum is %d\n", sum);
}
