#include "Money_handler.h"

Money_handler::Money_handler():Coins() {}

void Money_handler::insert_money()
{
    int m;
    cout<<"Insert money : ";
    cin>>m;
    money = m;
}
float Money_handler::get_money()
{
    return money;
}

void Money_handler::rest_of_amount(float mi)
{
    float rest = money - mi;
    if(rest == 0)
    {
        cout<<0<<endl;
    }

    if(rest - 10 > 0)
    {
        rest-=10;
        cout<<10<<",";
    }

    if(rest - 5 > 0)
    {
        rest-=5;
        cout<<5<<",";
    }

    for(int i=0; i< 4; i++)
    {
        if(rest - 1 > 0)
        {
            rest-=1;
            cout<<1<<",";
        }
        else
            break;
    }
    if(rest - 0.5 == 0)
    {
        rest-=0.5;
        cout<<0.5<<endl;
    }
}
