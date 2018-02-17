//#ifndef QFLOWLAYOUT_H
//#define QFLOWLAYOUT_H


//#include <QLayout>
//#include <QRect>
//#include <QStyle>
//#include <QWidget>

//class QFlowLayout : public QLayout
//{
//public:
//    explicit QFlowLayout(QWidget *parent, int margin = -1, int hSpacing = -1, int vSpacing = -1);
//    explicit QFlowLayout(int margin = -1, int hSpacing = -1, int vSpacing = -1);
//    ~QFlowLayout();

//    void addItem(QWidget *item);
//    int horizontalSpacing() const;
//    int verticalSpacing() const;
//    Qt::Orientations expandingDirections() const Q_DECL_OVERRIDE;
//    bool hasHeightForWidth() const Q_DECL_OVERRIDE;
//    int heightForWidth(int) const Q_DECL_OVERRIDE;
//    int count() const Q_DECL_OVERRIDE;
//    QWidget *myitemAt(int index) const ;
//    QSize minimumSize() const Q_DECL_OVERRIDE;
//    void setGeometry(const QRect &rect) Q_DECL_OVERRIDE;
//    QSize sizeHint() const Q_DECL_OVERRIDE;
//    QWidget *mytakeAt(int index) ;

//private:
//    int doLayout(const QRect &rect, bool testOnly) const;
//    int smartSpacing(QStyle::PixelMetric pm) const;

//private:
//    QList<QWidget *> itemList;
//    int m_hSpace;
//    int m_vSpace;
//};


//#endif // QFLOWLAYOUT_H
