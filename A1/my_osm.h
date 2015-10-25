#ifndef MYOSM_H
#define MYOSM_H

#include <QObject>
#include <QDebug>

class MyOSM : public QObject
{
    Q_OBJECT
public:
    explicit MyOSM(QObject *parent = 0);

signals:

public slots:
};

#endif // MYOSM_H
