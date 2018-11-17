#include "Food_item.h"

Food_item::Food_item()
{
    quantity[0]=0;
    price[0] = 0;
    quantity[1] = 0;
    for(int i=2;i<11;i++)
    {
        quantity[i] = 10;
    }
    price[1] = 5;
    price[2] = 3.5;
    price[3] = 4;
    price[4] = 6;
    price[5] = 4.5;
    price[6] = 9;
    price[7] = 8.5;
    price[8] = 10;
    price[9] = 2;
    price[10] = 2.5;
}

int Food_item::get_quan(int q)
{
    return quantity[q];
}
void Food_item::set_quan(int q,int v)
{
    quantity[q] = v;
}


float Food_item::get_price(int q)
{
    return price[q];
}
void Food_item::set_price(int q,int v)
{
    price[q] = v;
}
