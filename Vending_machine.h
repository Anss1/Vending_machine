#ifndef VENDING_MACHINE_H
#define VENDING_MACHINE_H
#include "Stock.h"
#include "Food_item.h"
#include "Money_handler.h"

#include<iostream>
using namespace std;


class Vending_machine:public Food_item,public Money_handler
{

public:
    int choice;

    Vending_machine();
    void print_info();
    void number_of_choice();
    bool check_quntity();
    bool check_price();


};

#endif // VENDING_MACHINE_H
