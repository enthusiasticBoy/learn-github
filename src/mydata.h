#ifndef MYDATA_H
#define MYDATA_H

#include <QtQml/qqml.h>
#include <QObject>

class MyData : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString d1 READ d1 WRITE setd1 NOTIFY d1Changed)

    QML_ELEMENT
public:
    explicit MyData(QObject *parent = nullptr);
    QString d1() const;
    void setd1(QString& val);

private slots:
//    void d1ChangeDo(QString& val);
private:
    QString _d1;
signals:
    void d1Changed(QString val);

};

#endif // MYDATA_H
