/*
 * =====================================================================================
 *
 *       Filename:  switch.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2021/03/14 21시 29분 23초
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
    int num = 3;
    
    switch (num) {
        case 0:
            printf("Case 0\n");
            break;
        case 1:
            printf("Case 1\n");
            break;
        case 3:
            printf("Case 3\n");
            /*  intentional fallthrough */
        default:
            printf("Default\n");
            break;
    }

    return 0;
}
