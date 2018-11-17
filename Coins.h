#ifndef COINS_H
#define COINS_H
#include<iostream>
using namespace std;

class Coins
{
protected:
    int half_dollar,dollar,five_dollar,ten_dollar;

public:
    Coins();
    int get_h();
    int get_d();
    int get_f();
    int get_t();

    void set_h(int);
    void set_d(int);
    void set_f(int);
    void set_t(int);

};

#endif // COINS_H
