/*
 * =====================================================================================
 *
 *       Filename:  vector.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2021/04/01 22시 45분 12초
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

void add_vec3(const int* v1, const int* v2, int* out_v3)
{
    size_t i = 0;
    for (i = 0; i < VECTOR_LENGTH; ++i) {
        *out_v3++ = *v1++ + *v2++;
    }
}
