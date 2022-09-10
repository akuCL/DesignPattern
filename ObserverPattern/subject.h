#ifndef SUBJECT_H
#define SUBJECT_H

#include <QObject>
#include "observer.h"

class Subject : public QObject
{
    Q_OBJECT
public:
    explicit Subject(QObject *parent = nullptr);

    virtual void registerObserver(Observer* O)=0;
    virtual void removeObserver(Observer* O)=0;
    virtual void notifyObserver()=0;

signals:

};

#endif // SUBJECT_H
