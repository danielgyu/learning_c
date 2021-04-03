/*
 * =====================================================================================
 *
 *       Filename:  compare.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2021/04/03 22시 54분 01초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kungyu (KG), kglee@desilo.io
 *   Organization:  dev
 *
 * =====================================================================================
 */

int compare_string(const char* ch1, const char* ch2)
{
    while (*ch1 != '\0' && *ch1 == *ch2) {
        ++ch1;
        ++ch2;
    }
    return *ch1 - *ch2;
}
