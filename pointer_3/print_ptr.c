/*
 * =====================================================================================
 *
 *       Filename:  print_ptr.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2021/03/27 12시 21분 57초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kungyu (KG), kglee@desilo.io
 *   Organization:  dev
 *
 * =====================================================================================
 */

#include <stdio.h>

int stack(int a)
{
    printf("a: %p\n", (void*)&a);
    return 0;
}

int main()
{
    int n = 10;
    int* ptr_n = &n;

    stack(n);
    printf("ptr_n: %p\n", (void*)&ptr_n);
    printf("n: %p\n", (void*)&n);
}
