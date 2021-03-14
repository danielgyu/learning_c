/*
 * =====================================================================================
 *
 *       Filename:  data_type.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2021/03/11 23시 41분 35초
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
    int int_value = 10;
    long long_value = 100;
    float float_value = 1.5;
    char char_value = 'A';

    printf("int_value: %d\n", int_value);
    printf("long_value: %ld\n", long_value);
    printf("float_value: %f\n", float_value);
    printf("char_value: %c\n", char_value);

    return 0;
}
