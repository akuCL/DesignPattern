#ifndef OBSERVER_H
#define OBSERVER_H

#include <QObject>

class Observer : public QObject
{
    Q_OBJECT
public:
    explicit Observer(QObject *parent = nullptr);

    virtual void update()=0;
signals:

};

#endif // OBSERVER_H
