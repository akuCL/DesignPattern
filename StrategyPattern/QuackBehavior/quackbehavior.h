#ifndef QUACKBEHAVIOR_H
#define QUACKBEHAVIOR_H

#include <QObject>
#include <QDebug>

class QuackBehavior : public QObject
{
    Q_OBJECT
public:
    explicit QuackBehavior(QObject *parent = nullptr);
    ~QuackBehavior();

    virtual void quack()=0;

signals:

};

#endif // QUACKBEHAVIOR_H
