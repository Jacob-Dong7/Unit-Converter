#include "temp.h"
#include <QString>
#include <QMap>
double Temp::convert(double val, QString &unit, QString &target) {
    if (unit == "Degree Celsius") {
        if (target == "Fahrenheit") return val * 9/5 + 32;
        if (target == "Kelvin") return val + 273.15;
    } else if (unit == "Fahrenheit") {
        if (target == "Degree Celsius") return (val - 32) * (5/9);
        if (target == "Kelvin") return (val - 32) * (5/9) + 273.15;
    } else if (unit == "Kelvin") {
        if (target == "Fahrenheit") return (val - 273.15) * (9/5) + 32;
        if (target == "Degree Celsius") return val - 273.15;
    }
    return val;
}