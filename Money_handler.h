#ifndef MONEY_HANDLER_H
#define MONEY_HANDLER_H
#include "Coins.h"
#include "Food_item.h"

class Money_handler:public Coins
{
protected:
    int money;
public:
    Money_handler();
    float get_money();
    void insert_money();
    void rest_of_amount(float);

};

#endif // MONEY_HANDLER_H
