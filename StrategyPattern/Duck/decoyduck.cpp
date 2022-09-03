#include "decoyduck.h"
#include "FlyBehavior/flywithwings.h"
#include "QuackBehavior/quack.h"
#include <QDebug>

DecoyDuck::DecoyDuck(QObject *parent) : Duck(parent)
{
    flyBehavior = new FlyWithWings;
    quackBehavior = new Quack;
    qDebug() << "Decoy Duck";
}

DecoyDuck::~DecoyDuck()
{
    qDebug() << "~Decoy Duck";
}

void DecoyDuck::performQuack()
{
    quackBehavior->quack();
}

void DecoyDuck::swim()
{
        qDebug() << "Decoy Duck swim";
}

void DecoyDuck::display()
{
        qDebug() << "Decoy Duck display";
}

void DecoyDuck::performFly()
{
    flyBehavior->fly();
}
