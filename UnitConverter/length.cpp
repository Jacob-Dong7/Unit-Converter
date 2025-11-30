#include "length.h"
#include <QString>
#include <QMap>
double Length::convert(double curr, const QString &unit, const QString &target) {
    static const QMap<QString, double> toKm = {
        {"Kilometre", 1},
        {"Metre", 1000},
        {"Centimetre", 100000},
        {"Millimetre", 1000000},
        {"Micrometre", 1000000000}
    };

    if (!toKm.contains(unit) || !toKm.contains(target)) return 0;

    double result;
    result = curr * toKm.value(target);
    result = result / toKm.value(unit);

    return result;
}