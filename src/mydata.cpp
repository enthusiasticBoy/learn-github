#include "mydata.h"
#include <QDebug>

MyData::MyData(QObject *parent) : QObject(parent)
{

}

QString MyData::d1() const
{
    return _d1;
}

void MyData::setd1(QString &val)
{
    _d1 = val;
    qDebug() << "d1 changed value is: " << val;
    emit d1Changed(val);
}

//void MyData::d1ChangeDo(QString& val)
//{

//}

//void MyData::d1Changed(QString val)
//{
//    qDebug() << "d1 changed value is: " << val;
//}
