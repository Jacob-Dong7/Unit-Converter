#include "weight.h"
#include <QString>
double Weight::convert(int curr, const QString &unit, const QString &target) {

    static const Map<QString, double> toKg = {
        {"Tonne", 1000}
        {"Kilogram", 1}
        {"Gram", 1000}
        {"Milligram", 1000000000}
    };

    if ((!toKg.contain(unit)) || (!toKg.contain(target))) return 0;

    double result = toKg.value(unit) * curr; 
    result = result / toKg.value(target); 

    return result;
}
