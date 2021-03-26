/*
 * =====================================================================================
 *
 *       Filename:  backreference.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2021/03/26 09시 40분 31초
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
    int num = 10;
    int* num_address = &num;

    printf("value in num_address is %d\n", *num_address);
}
