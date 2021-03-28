/*
 * =====================================================================================
 *
 *       Filename:  pointer_size.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2021/03/29 00시 04분 13초
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
    char ch = 'c';
    int num = 934563;
    float pi = 3.1415f;

    char* char_ptr = &ch;
    int* int_ptr = &num;
    float* float_ptr = &pi;

    printf("char: %zu, char*: %zu\n", sizeof(*char_ptr), sizeof(char_ptr));
    printf("int: %zu, int*: %zu\n", sizeof(*int_ptr), sizeof(int_ptr));
    printf("float: %zu, float*: %zu\n", sizeof(*float_ptr), sizeof(float_ptr));
}
