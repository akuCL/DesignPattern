/*****************************
 * 抽象、封装、多态、继承
 * 封装变化
 * 优先使用组合而不是继承
 * 针对接口编程，而不是针对实现编程
 * 策略模式：定义算法家族，分别封装起来，让他们之间可以相互替换。
 *         策略模式让算法的变化独立于使用算法的客户。
 *
 *****************************/

#include <QCoreApplication>
#include "FlyBehavior/flybehavior.h"
#include "FlyBehavior/flynoway.h"
#include "Duck/decoyduck.h"
#include "Duck/duck.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Duck* duck = new DecoyDuck;
    duck->display();
    duck->swim();
    duck->performFly();
    duck->performQuack();

    FlyBehavior* fnw = new FlyNoWay;
    duck->setFlyBehavior(fnw);
    duck->performFly();
    return a.exec();
}
