/*
 * =====================================================================================
 *
 *       Filename:  hello_world.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2021/03/10 23시 20분 20초
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
    const char* name = "KG";
    const int num1 = 10;
    
    printf("Hello Kungyu!\n");
    printf("Format from %s\n", name);
    printf("number: %d\n", num1);

    return 0;
}
