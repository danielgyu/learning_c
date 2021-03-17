/*
 * =====================================================================================
 *
 *       Filename:  prefix.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2021/03/15 22시 30분 51초
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
    int i = 0;
    int j = 0;
    int k = 0;

    int a = 0;
    int c = 1;

    if (++i || (++j && ++k))
    {
        printf("true!\n");
    }

    printf("%d, %d, %d\n", i, j, k);

    if (--a && c++)
    {
        printf("it's true\n");
    }
    printf("%d, %d\n", a, c);
}

