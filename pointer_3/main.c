/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2021/04/01 22시 48분 23초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kungyu (KG), kglee@desilo.io
 *   Organization:  dev
 *
 * =====================================================================================
 */

#include <stdio.h>

#include "vector.h"

int main(void)
{
    const int v1[VECTOR_LENGTH] = { 1, 2, 3 };
    const int v2[VECTOR_LENGTH] = { 100, 300, 500 };
    int v3[VECTOR_LENGTH];

    add_vec3(v1, v2, v3);

    printf("v3: %d, %d, %d\n", v3[0], v3[1], v3[2]);
    return 0;
}
