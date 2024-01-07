#ifndef CARDREADER_H
#define CARDREADER_H

#include <QObject>

class CardReader : public QObject
{
    Q_OBJECT
public:
    explicit CardReader(QObject *parent = nullptr);

signals:
};

#endif // CARDREADER_H
