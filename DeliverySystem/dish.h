#ifndef DISH_H
#define DISH_H

#include <QObject>

class Dish : public QObject
{
    Q_OBJECT
public:                                                            //菜品图片地址将会设置一个默认值，待定
    explicit Dish(int id,QString name,double price,QString infor="",QString photo="",QObject *parent = nullptr);

    //菜品ID号
    int dish_Id;
    //菜品图片地址
    QString dish_Photo;
    //菜品名字
    QString dish_Name;
    //菜品价格
    double dish_Price;
    //菜品描述
    QString dish_Infor;

signals:
};

#endif // DISH_H
