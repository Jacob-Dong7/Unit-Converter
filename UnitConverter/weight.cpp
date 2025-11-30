#include "weight.h"
#include <QString>
#include <QMap>
double Weight::convert(double curr, const QString &unit, const QString &target) {

    static const QMap<QString, double> toKg = {
        {"Tonne", 1000},
        {"Kilogram", 1},
        {"Gram", 1000},
        {"Milligram", 1000000000}
    };

    if ((!toKg.contains(unit)) || (!toKg.contains(target))) return 0;

    double result = toKg.value(unit) * curr; 
    result = result / toKg.value(target); 

    return result;
}
