#include <QCoreApplication>
#include "beberage.h"
#include "espresso.h"
#include "darkroast.h"
#include "mocha.h"
#include <QDebug>
#include "houseblend.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Beberage* beberage = new Espresso;
    qDebug() << beberage->getDescription() << " $" << beberage->cost();

    Beberage* beberage2 = new DarkRoast;
    beberage2 = new Mocha(beberage2);
    beberage2 = new Mocha(beberage2);
    qDebug() << beberage2->getDescription() << " $" << beberage2->cost();

    Beberage* beberage3 = new HouseBlend;
    beberage3 = new Mocha(beberage3);
    beberage3 = new Mocha(beberage3);
    qDebug() << beberage3->getDescription() << " $" << beberage3->cost();

    return a.exec();
}
