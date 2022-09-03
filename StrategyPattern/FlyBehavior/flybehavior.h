#ifndef FLYBEHAVIOR_H
#define FLYBEHAVIOR_H

#include <QObject>
#include <QDebug>

class FlyBehavior : public QObject
{
    Q_OBJECT
public:
    explicit FlyBehavior(QObject *parent = nullptr);
    ~FlyBehavior();

    virtual void fly()=0;

signals:

};

#endif // FLYBEHAVIOR_H
