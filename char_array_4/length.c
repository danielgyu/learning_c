/*
 * =====================================================================================
 *
 *       Filename:  length.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2021/04/03 00시 58분 08초
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
    const char str[] = "POCU";
    printf("str length: %lu\n", sizeof(str));
}
