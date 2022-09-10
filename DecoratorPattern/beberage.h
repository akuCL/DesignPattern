#ifndef BEBERAGE_H
#define BEBERAGE_H

#include <QObject>

class Beberage : public QObject
{
    Q_OBJECT
public:
    explicit Beberage(QObject *parent = nullptr);

    QString description;
    virtual QString getDescription()=0;
    virtual float cost()=0;
signals:

private:

};

#endif // BEBERAGE_H
