#ifndef DISPLAYELEMENT_H
#define DISPLAYELEMENT_H

#include <QObject>

class DisplayElement : public QObject
{
    Q_OBJECT
public:
    explicit DisplayElement(QObject *parent = nullptr);

    virtual void display()=0;
signals:

};

#endif // DISPLAYELEMENT_H
