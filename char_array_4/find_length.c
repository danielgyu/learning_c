/*
 * =====================================================================================
 *
 *       Filename:  find_length.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2021/04/03 19시 05분 48초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kungyu (KG), kglee@desilo.io
 *   Organization:  dev
 *
 * =====================================================================================
 */

#include <stdio.h>

#define NULL_CHAR ('\0')

size_t get_string_length(const char* str)
{
    size_t i;
    size_t count = 0;
    const char* p1 = str;
    const char* p2 = str;
    for (i = 0; str[i] != NULL_CHAR; ++i){}

    while (*p1++ != NULL_CHAR) {
        ++count;
    }

    while (*p2++ != NULL_CHAR){}

    return p2 - str - 1;
}
