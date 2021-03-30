/*
 * =====================================================================================
 *
 *       Filename:  endian.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2021/03/29 09시 58분 15초
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
    int NUM = 0x12345678;
    char* ptr = (char*)&NUM;
    size_t i;

    for (i = 0; i < sizeof(NUM); ++i) {
        printf("%hhx ", *(ptr + i));
    }
    printf("\n");
    
    printf("NUM in hex: 0x%x\n", NUM);
}
