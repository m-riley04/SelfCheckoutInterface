#ifndef ITEM_H
#define ITEM_H

#include <QWidget>

namespace Ui {
    class Item;
}
class Item : public QWidget
{
    Q_OBJECT
public:
    explicit Item(QString name="null", double price=0.01, QWidget *parent = nullptr);
    ~Item();

signals:
    void removed();
    void priceChanged();

private:
    std::string name;
    double price;
    Ui::Item *ui;
};

#endif // ITEM_H
