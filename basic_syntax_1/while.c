/*
 * =====================================================================================
 *
 *       Filename:  while.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2021/03/14 21시 37분 09초
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
    int counter_1 = 3;
    int counter_2 = 3;
    int counter_3;

    while (counter_1-- != 0) {
        printf("counter_1: %d\n", counter_1);
    }
    while (counter_2 != 0) {
        printf("counter_2: %d\n", counter_2);
        --counter_2;
    }
    for (counter_3 = 3; counter_3 > 0; counter_3--) {
        printf("counter_3: %d\n", counter_3);
   }
}
