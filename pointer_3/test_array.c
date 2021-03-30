/*
 * =====================================================================================
 *
 *       Filename:  test_array.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2021/03/29 09시 38분 41초
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
   int array[3] = { 0, 1, 3 } ;
   int* array_ptr = array;

   printf("third element is: %d\n", array_ptr[2]);
   printf("going over: %d\n", *(array_ptr + 3));
   printf("going over: %d\n", *(array_ptr + 4));
}
