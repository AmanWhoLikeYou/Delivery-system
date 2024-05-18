#include "dish.h"

//菜品类构造函数
Dish::Dish(int id,QString name,double price,QString infor,QString photo,QObject *parent)
    : QObject{parent}
{
    dish_Id=id;
    dish_Name=name;
    dish_Price=price;
    dish_Infor=infor;
}
