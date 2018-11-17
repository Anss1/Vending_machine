#include "Vending_machine.h"

Vending_machine::Vending_machine():Food_item(),Money_handler(){}

 void Vending_machine::print_info()
{
    cout<<"\t\t\t\t\t\t* List of Items *\n\n\n"<<endl;
    cout<<"\t\t\tPrice\t\t\tQuantity\n\n";
    cout<<"1-Item1 \t\t$"<<get_price(1)<<"\t\t\t"<<get_quan(1);
    cout<<"\n\n2-Item2 \t\t$"<<get_price(2)<<"\t\t\t"<<get_quan(2);
    cout<<"\n\n3-Item3 \t\t$"<<get_price(3)<<"\t\t\t"<<get_quan(3);
    cout<<"\n\n4-Item4 \t\t$"<<get_price(4)<<"\t\t\t"<<get_quan(4);
    cout<<"\n\n5-Item5 \t\t$"<<get_price(5)<<"\t\t\t"<<get_quan(5);
    cout<<"\n\n6-Item6 \t\t$"<<get_price(6)<<"\t\t\t"<<get_quan(6);
    cout<<"\n\n7-Item7 \t\t$"<<get_price(7)<<"\t\t\t"<<get_quan(7);
    cout<<"\n\n8-Item8 \t\t$"<<get_price(8)<<"\t\t\t"<<get_quan(8);
    cout<<"\n\n9-Item9 \t\t$"<<get_price(9)<<"\t\t\t"<<get_quan(9);
    cout<<"\n\n10-Item10 \t\t$"<<get_price(10)<<"\t\t\t"<<get_quan(10);
    cout<<"\n\n\n\t\t\t0-Cancel\n\n";
}

void Vending_machine::number_of_choice()
{
    int c;
    cout<<"Enter number of item ,or (0) to cancel: ";cin>>c;
    choice=c;
}
bool Vending_machine::check_quntity()
{
    return (quantity[choice] > 0? true:false);
}

bool Vending_machine::check_price()
{
    return (money >= price[choice]? true:false);
}


