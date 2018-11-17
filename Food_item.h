#ifndef FOOD_ITEM_H
#define FOOD_ITEM_H


class Food_item
{
protected:
    int quantity[11];
    float price[11];

public:
    Food_item();
    int get_quan(int);
    void set_quan(int,int);

    float get_price(int);
    void set_price(int,int);

};

#endif // FOOD_ITEM_H
