#include "currency.h"

Currency::Currency(Widget *parent) : QDoubleSpinBox(parent) {
    setDecimals(2);
}

QString Currency::textFromValue(double val) const {
    if (val <= 0) return 0;

    return "$" + QString::number(val, 'f', 2);
}