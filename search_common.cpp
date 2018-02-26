#include "search_common.h"
#include "ui_search_common.h"

Search_Common::Search_Common(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Search_Common)
{
    total = new NodeAVL;
    ui->setupUi(this);
    QObject::connect(ui->searchBtn,SIGNAL(clicked(bool)),this,SLOT(on_search_clicked()));
}

void Search_Common::setData(NodeAVL *data){
    total = data;
}

NodeAVL build_avl_by_list(ListNode<Info>* data){
    NodeAVL *myavl = new NodeAVL;
    ListNode<Info> *p = data;
    while (p != NULL) {
        myavl->insert(p->data);
        p = p->next;
    }
    return *myavl;
}

void Search_Common::on_search_clicked(){
    ui->friends->clear();
    ui->attentions->clear();
    ui->fans->clear();
    InfoNode node,node1;
    node.data.id = ui->firstIdEdit->text().toInt();
    node1.data.id = ui->secondIdEdit->text().toInt();
    if(total->contains(node) && total->contains(node1)){
        node = total->search(node)->data;
        NodeAVL friends1 = build_avl_by_list(node.data.friends);
        NodeAVL fans1 = build_avl_by_list(node.data.fans);
        NodeAVL attentions1 = build_avl_by_list(node.data.attention);
        node1 = total->search(node1)->data;
        NodeAVL friends2 = build_avl_by_list(node1.data.friends);
        NodeAVL fans2 = build_avl_by_list(node1.data.fans);
        NodeAVL attentions2 = build_avl_by_list(node1.data.attention);

        List<InfoNode> tree1data, result;
        friends1.traverPre(tree1data);
        Posi(InfoNode)p = tree1data.head();
        while (p != tree1data.tail()) {
            if (friends2.contains(p->data)) {
                  result.insertAsLast(p->data);
             }
            p = p->next;
        }
        p = result.head();
        ui->friends->setAlignment(Qt::AlignTop | Qt::AlignLeft);
        ui->friends->setWordWrap(true);
        while(p!=result.tail()){
            ui->friends->setText(ui->friends->text().append("  ").append(QString::fromStdString(p->data.data.userName)));
            p = p->next;
        }
        result.clear();
        tree1data.clear();
        fans1.traverPre(tree1data);
        p = tree1data.head();
        while (p != tree1data.tail()) {
            if (fans2.contains(p->data)) {
                result.insertAsLast(p->data);
            }
             p = p->next;
        }
        p = result.head();
        ui->fans->setAlignment(Qt::AlignTop | Qt::AlignLeft);
        ui->fans->setWordWrap(true);
        while(p!=result.tail()){
            ui->fans->setText(ui->fans->text().append("  ").append(QString::fromStdString(p->data.data.userName)));
            p = p->next;
        }

        result.clear();
        tree1data.clear();
        attentions1.traverPre(tree1data);
        p = tree1data.head();
        while (p != tree1data.tail()) {
            if (attentions2.contains(p->data)) {
                result.insertAsLast(p->data);
            }
             p = p->next;
        }
        p = result.head();
        ui->attentions->setAlignment(Qt::AlignTop | Qt::AlignLeft);
        ui->attentions->setWordWrap(true);
        while(p!=result.tail()){
            ui->attentions->setText(ui->attentions->text().append("  ").append(QString::fromStdString(p->data.data.userName)));
            p = p->next;
        }
    }else {
        QMessageBox::information(this,"提示","有用户不存在!");
    }

}

Search_Common::~Search_Common()
{
    delete ui;
}
