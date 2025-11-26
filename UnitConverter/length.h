#ifndef LENGTH_H
#define LENGTH_H
#include <QString>
class Length {
    public:
    double convert(double value, const QString &fromUnit, const QString &toUnit);
};
#endif
