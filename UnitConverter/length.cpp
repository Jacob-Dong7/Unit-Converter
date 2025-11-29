#include "length.h"
#include <QString>
double Length::convert(double curr, const QString &unit, const QString &target) {

    if (unit == "Kilometre") {
        if (target == "Kilometre") return curr;
        if (target == "Metre") return curr * 1000;
        if (target == "Centimetre") return curr * 100000;
        if (target == "Millimetre") return curr * 1000000;
        if (target == "Micrometre") return curr * 1000000000;
    }
    if (unit == "Metre") {
        if (target == "Kilometre") return curr * 0.001;
        if (target == "Metre") return curr;
        if (target == "Centimetre") return curr * 100;
        if (target == "Millimetre") return curr * 1000;
        if (target == "Micrometre") return curr * 1000000;
    }
    if (unit == "Centimetre") {
        if (target == "Kilometre") return curr * 0.00001;
        if (target == "Metre") return curr * 0.01;
        if (target == "Centimetre") return curr;
        if (target == "Millimetre") return curr * 10;
        if (target == "Micrometre") return curr * 10000;
    }
    if (unit == "Millimetre") {
        if (target == "Kilometre") return curr * 0.000001;
        if (target == "Metre") return curr * 0.001;
        if (target == "Centimetre") return curr * 0.1;
        if (target == "Millimetre") return curr;
        if (target == "Micrometre") return curr * 1000;
    }
    if (unit == "Micrometre") {
        if (target == "Kilometre") return curr * 0.000000001;
        if (target == "Metre") return curr * 0.000001;
        if (target == "Centimetre") return curr * 0.001;
        if (target == "Millimetre") return curr * 100000;
        if (target == "Micrometre") return curr;
    }

    return 0;
}