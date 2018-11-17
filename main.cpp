#include <iostream>
#include "Vending_machine.h"
#include "Stock.h"


using namespace std;

int main()
{
    Vending_machine v;

    v.print_info();
    v.insert_money();
    v.number_of_choice();
    system("cls");
    if(v.choice == 0)
    {
        cout<<"Pick up your money : "<<v.get_money()<<endl;
    }
    if(v.check_quntity()&&v.check_price())
    {
        cout<<"Pick up your item\n\n";
        cout<<"The rest of amount : $ ";
        v.rest_of_amount(v.get_price(v.choice));

    }
    else
    {
        if(v.check_price())
            cout<<"Sorry,out of quantity.\n"<<endl;
        else if(v.check_quntity())
            cout<<"Sorry,no enough money.\n"<<endl;
        else
        {
            cout<<"Sorry,out of quantity and no enough money."<<endl;
        }
        cout<<"Pick up your money : "<<v.get_money()<<endl;

    }





    return 0;
}
