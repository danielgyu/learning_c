/*
 * =====================================================================================
 *
 *       Filename:  bit.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2021/03/23 09시 41분 19초
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
    int num1 = 3;
    int num2 = 2;

    const unsigned char result = num1 & num2;
    const unsigned char boolean = num1 && num2;
    printf("result: %u\n", result);
    printf("result: %u\n", boolean);

    return 0;
}
