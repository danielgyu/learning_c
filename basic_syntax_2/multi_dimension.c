/*
 * =====================================================================================
 *
 *       Filename:  multi_dimension.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2021/03/20 00시 53분 06초
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
    int grades[2][3] = {
        { 65, 90, 75 },
        { 70, 40, 50 }
    };
    int average = 0;
    int i, j;

    for (i=0; i<2; ++i) {
        for (j=0; j<3; ++j) {
            average += grades[i][j];
        }
    }
    average /= (i * j);

    printf("average is %d\n", average);

}
