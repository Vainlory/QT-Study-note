#ifndef MYSIGNAL_H
#define MYSIGNAL_H

#include <QObject>

class MySignal : public QObject
{
    Q_OBJECT
public:
    explicit MySignal(QObject *parent = nullptr);

signals:
    void sig();
};

#endif // MYSIGNAL_H
