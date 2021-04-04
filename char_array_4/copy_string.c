/*
 * =====================================================================================
 *
 *       Filename:  copy_string.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2021/04/04 16시 30분 54초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kungyu (KG), kglee@desilo.io
 *   Organization:  dev
 *
 * =====================================================================================
 */

void copy_string(char* dest, const char* src)
{
    while (*src != '\0') {
        *dest++ = *src++;
    }
    *dest = '\0';
}
