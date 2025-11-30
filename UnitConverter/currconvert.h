#ifndef CURRCONVERT_H
#define CURRCONVERT_H
#include <QString>
class CurrConvert {
    public:
    double convert(double val, QString &currency, QString &target);
};
#endif