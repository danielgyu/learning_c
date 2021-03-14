/*
 * =====================================================================================
 *
 *       Filename:  variable_declaration.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2021/03/12 09시 58분 33초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kungyu (KG), kglee@desilo.io
 *   Organization:  dev
 *
 * =====================================================================================
 */

enum dessert {
    DESSERT_CAKE,
    DESSERT_BEER
};

int main()
{
    int x = 1;
    int y;
    int lunch_dessert = DESSERT_CAKE;
    y = x + lunch_dessert;
    return y;
}
