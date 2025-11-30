#ifndef CURRENCY_H
#define CURRENCY_H
#include <QDoubleSpinBox>

namespace Ui {
    class Currency;
}

class Currency : public QDoubleSpinBox {
    Q_OBJECT
    public:
    explicit Currency(QWidget *parent = nullptr);

    protected:
    QString textFromValue(double) const override;
};
#endif