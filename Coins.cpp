#include "Coins.h"

Coins::Coins()
{
    half_dollar = 100;
    dollar = 100;
    five_dollar = 100;
    ten_dollar = 100;
}

int Coins::get_h(){return half_dollar;}
int Coins::get_d(){return dollar;}
int Coins::get_f(){return five_dollar;}
int Coins::get_t(){return ten_dollar;}

void Coins::set_h(int h){half_dollar = h;}
void Coins::set_d(int d){dollar = d;}
void Coins::set_f(int f){five_dollar = f;}
void Coins::set_t(int t){ten_dollar = t;}
