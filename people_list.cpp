#include "people_list.h"
#include "ui_people_list.h"

people_list::people_list(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::people_list)
{
    ui->setupUi(this);
}

people_list::~people_list()
{
    delete ui;
}

void people_list::setData(NodeAVL *data,int user){
    userId = user;
    avl = data;
    for(int i =1;i<=avl->size();i++){
           InfoNode node;
           node.data.id = i;
           node = avl->search(node)->data;
           QListWidgetItem *item = new QListWidgetItem;
           item->setText(QString::fromStdString(node.data.userName.append(to_string(node.data.id))));
           ui->listWidget->addItem(item);
    }
    connect(ui->listWidget,SIGNAL(itemClicked(QListWidgetItem*)),this,SLOT(toPerson_Specific()));
}

void people_list::toPerson_Specific(){
    Person_Specific *person_specific = new Person_Specific();
    person_specific->setData(avl,ui->listWidget->currentRow()+1,userId);
    person_specific->show();
}
