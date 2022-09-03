#include "quack.h"

Quack::Quack(QObject *parent) : QuackBehavior(parent)
{
    qDebug() << "Quack!";
}

Quack::~Quack()
{
    qDebug() << "~Quack!";
}

void Quack::quack()
{
    qDebug() << "I Quack!";
}
