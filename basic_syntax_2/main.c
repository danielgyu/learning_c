/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2021/03/21 23시 15분 18초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kungyu (KG), kglee@desilo.io
 *   Organization:  dev
 *
 * =====================================================================================
 */

#include <stdio.h>

#include "minion.h"

extern unsigned int g_hp;
extern unsigned int g_strength;

int main(void)
{
    printf("g_hp: %d\n", g_hp);
    printf("g_strength: %d\n", g_strength);

    go_berserk();

    printf("berserk applied\n");
    printf("g_hp: %d\n", g_hp);
    printf("g_strength: %d\n", g_strength);
}
