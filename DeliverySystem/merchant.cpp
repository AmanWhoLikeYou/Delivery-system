#include "merchant.h"
#include "ui_merchant.h"

Merchant::Merchant(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Merchant)
{
    ui->setupUi(this);

    this->setWindowTitle("Merchant");

    //关闭表格滚轮
    ui->dishTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->dishTable->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    //表头自适应大小
    ui->dishTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    //设置行高
    ui->dishTable->verticalHeader()->setDefaultSectionSize(60);

    //绑定添加菜品按钮与函数
    connect(ui->addButton,&QPushButton::clicked,this,&Merchant::addDish);

    //绑定删除菜品
    connect(ui->deleteButton,&QPushButton::clicked,this,&Merchant::deleteDish);
}

//添加菜品函数
void Merchant::addDish()
{
    ui->dishTable->setEditTriggers(QAbstractItemView::CurrentChanged);
    //添加行
    int row=ui->dishTable->rowCount();
    ui->dishTable->insertRow(row);

    QPixmap pix=QPixmap(":/Resourse/dish.jpg");
    QLabel *dishphoto=new QLabel("");
    dishphoto->setAlignment(Qt::AlignCenter|Qt::AlignVCenter);
    dishphoto->setPixmap(QPixmap(pix).scaled(50,40));
    ui->dishTable->setCellWidget(row,0,dishphoto);

    qDebug()<<"添加菜";
}

void Merchant::deleteDish(){
    int rowIndex = ui->dishTable->currentRow();
    if (rowIndex!=-1)
    {
        ui->dishTable->removeRow(rowIndex);
    }
}

Merchant::~Merchant()
{
    delete ui;
}
