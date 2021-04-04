/*
 * =====================================================================================
 *
 *       Filename:  insensitive_compare.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2021/04/03 23시 38분 16초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kungyu (KG), kglee@desilo.io
 *   Organization:  dev
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <ctype.h>

int insensitive_compare(const char* ch1, const char* ch2)
{
    int i = tolower(*ch1);
    int j = tolower(*ch2);

    while (*ch1 != '\0' && ch1 == ch2) {
        i = tolower(*++ch1);
        j = tolower(*++ch2);
    }
    
    if (i == j) {
        return 0;
    }

    return i > j ? 1 : -1;
}
