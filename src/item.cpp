#include "item.h"
#include "./ui_item.h"

Item::Item(QString name, double price, QWidget *parent)
    : name(name),
    price(price),
    QWidget(parent),
    ui(new Ui::Item)
{
    ui->setupUi(this);
}


Item::~Item() {
    delete ui;
}
