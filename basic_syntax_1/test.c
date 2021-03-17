/*
 * =====================================================================================
 *
 *       Filename:  test.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2021/03/15 09시 39분 34초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kungyu (KG), kglee@desilo.io
 *   Organization:  dev
 *
 * =====================================================================================
 */

#include <stdio.h>

int main()
{
    int num = 0;
    int r_num;
    int num2 = 1;
    int r_num2;

    r_num = ++num;
    r_num2 = num2++;
    printf("%d\n", r_num);
    printf("%d]n", r_num2);
}
