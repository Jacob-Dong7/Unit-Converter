#ifndef SCIENTIFIC_H
#define SCIENTIFIC_H
#include <QDoubleSpinBox>

namespace Ui {
    class Scientific;
}

class Scientific : public QDoubleSpinBox{
    Q_OBJECT
    public:
    explicit Scientific(QWidget *parent = nullptr);

    protected:
    QString textFromValue(double) const override;
};
#endif