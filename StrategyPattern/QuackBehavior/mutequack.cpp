#include "mutequack.h"

MuteQuack::MuteQuack(QObject *parent) : QuackBehavior(parent)
{
    qDebug() << "Mute Quack!";
}

MuteQuack::~MuteQuack()
{
   qDebug() << "~ Mute Quack!";
}

void MuteQuack::quack()
{
    qDebug() << "I Mute Quack!";
}
