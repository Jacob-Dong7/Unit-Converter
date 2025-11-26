#include "weight.h"
#include <QString>
double Weight::convert(double curr, const QString &unit, const QString &target) {
    if (unit == "Tonne") {
        if (target == "Tonne") return curr;
        if (target == "Kilogram") return curr * 1000;
        if (target == "Gram") return curr * 1000000;
        if (target == "Milligram") return curr * 1000000000;
    }
    if (unit == "Kilogram") {
        if (target == "Tonne") return curr * 0.001;
        if (target == "Kilogram") return curr;
        if (target == "Gram") return curr * 1000;
        if (target == "Milligram") return curr * 1000000;
    }
    if (unit == "Gram") {
        if (target == "Tonne") return curr * 0.000001;
        if (target == "Kilogram") return curr * 0.001;
        if (target == "Gram") return curr;
        if (target == "Milligram") return curr * 1000;
    }
    if (unit == "Milligram") {
        if (target == "Tonne") return curr * 0.000000001;
        if (target == "Kilogram") return curr * 0.000001;
        if (target == "Gram") return curr * 0.001;
        if (target == "Milligram") return curr;
    }

    return 0;
}
