#include "scientific.h"
#include <iostream>

Scientific::Scientific(QWidget *parent) : QDoubleSpinBox(parent) {};

QString Scientific::textFromValue(double value) const {
    if (value == 0) return "0";
    double mantissa = value;
    int exp = 0;

    if (mantissa > 9999999) {
        while (std::abs(mantissa) >= 10) {
            mantissa /= 10;
            ++exp;
        }
    } else if (mantissa < 0.01) {
        while (std::abs(mantissa) < 1) {
        mantissa *= 10;
        --exp;
        }
    } else {
        return QString::number(mantissa, 'f', 2);
    }
    return QString::number(mantissa, 'f', 2) + "e" + QString::number(exp);
}