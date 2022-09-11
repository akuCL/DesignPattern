#ifndef HIGHCAR_H
#define HIGHCAR_H

#include <QObject>
#include <QDebug>

enum HCarType{HBENZ, HBMW};
class HighCar : public QObject
{
    Q_OBJECT
public:
    explicit HighCar(QObject *parent = nullptr);
    virtual void createdCar(void) = 0;

signals:

};

#endif // HIGHCAR_H
