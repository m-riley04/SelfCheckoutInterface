#ifndef CASHMANAGER_H
#define CASHMANAGER_H

#include <QObject>

class CashManager : public QObject
{
    Q_OBJECT
public:
    explicit CashManager(QObject *parent = nullptr);

signals:
};

#endif // CASHMANAGER_H
