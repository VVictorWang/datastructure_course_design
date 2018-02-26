#include "people_add.h"
#include "ui_people_add.h"

people_add::people_add(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::people_add)
{
    info.data.id = 1;
    ui->setupUi(this);
    QObject::connect(ui->okBtn,SIGNAL(clicked(bool)),this,SLOT(on_ok_clicked()));
}

void people_add::on_ok_clicked(){
    info.data.id = ui->idEdit->text().toInt();
    info.data.userName = ui->nameEdit->text().toStdString();
    info.data.fans = NULL;
    info.data.friends = NULL;
    info.data.attention = info.data.hobby = NULL;
    emit sendData(info);
    this->hide();
}

people_add::~people_add()
{
    delete ui;
}
