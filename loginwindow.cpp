#include "loginwindow.h"
#include "ui_loginwindow.h"


loginwindow::loginwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginwindow)
{
    QFile file("/home/victor/qt/datas_structure/users.json");
    if(file.open(QIODevice::ReadOnly))
    {
        QByteArray data = file.readAll();
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonArray jsonOb = doc.object().value("data").toArray();
        avl = new AVL<InfoNode>;
        avl->build_avl(jsonOb);
        avl->display();
    }
    ui->setupUi(this);
    QObject::connect(ui->loginButton,SIGNAL(clicked(bool)),this,SLOT(onLoginClicked()));
}

loginwindow::~loginwindow()
{
    delete ui;
}

void loginwindow::onLoginClicked(){
    QString userId = ui->idEdit->text();
    QString name = ui->nameEdit->text();
    if(validUser(userId,name)){
        MainWindow *mainw = new MainWindow();
        mainw->show();
        connect(this,SIGNAL(toMainWindow(int,NodeAVL *)),mainw,SLOT(enterMainWindow(int,NodeAVL *)));
        emit toMainWindow(userId.toInt(),avl);
        this->hide();
    }else{
        qDebug() <<"error";
    }
}

bool loginwindow::validUser(QString userId, QString name){
    if(userId.isEmpty()){
        QMessageBox::warning(this,"警告","用户id不能为空");
    }else if(name.isEmpty()){
        QMessageBox::warning(this,"警告","用户名不能为空");
    }else{
        InfoNode node;
        node.data.id = userId.toInt();
        node = avl->search(node)->data;
        if(userId.toInt()==node.data.id)
            return true;
    }
//    && name.toStdString().compare(node.data.userName) == 0
    return false;
}
