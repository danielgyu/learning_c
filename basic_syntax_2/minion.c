/*
 * =====================================================================================
 *
 *       Filename:  minion.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2021/03/21 23시 11분 40초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kungyu (KG), kglee@desilo.io
 *   Organization:  dev
 *
 * =====================================================================================
 */

#include "minion.h"

unsigned int g_hp = 100;
unsigned int g_strength = 10;
unsigned int g_gold = 0;

void go_berserk(void)
{
    g_hp += 50;
    g_strength += 20;
}

void add_gold(unsigned int gold)
{
    g_gold += gold;
}
