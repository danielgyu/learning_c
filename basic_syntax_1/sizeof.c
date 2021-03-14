/*
 * =====================================================================================
 *
 *       Filename:  sizeof.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2021/03/14 17시 53분 50초
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
    char ch = 'a';
    int num = 100;
    float fl = 1.5;
    char char_array[30];

    size_t size_char = sizeof(ch);
    size_t size_int = sizeof(num);
    size_t size_float = sizeof(fl);
    size_t size_array = sizeof(char_array);

    printf("%zu, %zu, %zu, %zu", size_char, size_int, size_float, size_array);

    return 0;

}
