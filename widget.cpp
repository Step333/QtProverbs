#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    QString mas[] = {"PocTucLaB 2", "CBaTocLaB", "AHDpei", "PocTucLaB"};
    ui->label->setText(mas[rand()%4]);
}
