#include "currconvert.h"
#include <QString>
#include <QMap>
double CurrConvert::convert(double val, QString &currency, QString &target) {

    static const QMap<QString, double> toAUD = {
        //Current conversion rate as of 30/11/2025 5:54PM Melbourne Time
        {"Australian Dollar", 1},
        {"United States Dollar", 0.65360281 },
        {"Yuan", 4.62531024 },
        {"Yen", 102.06270500 },
        {"Euro", 0.56355645 },
        {"Ruble", 50.66929586 },
        {"Hong Kong Dollar", 5.08838573 },
        {"Iraqi Dinar", 856.29016077  }
    };

    double result;
    result = val * toAUD.value(target);
    result = result / toAUD.value(currency);
    return result;
}

//1000000
//aud to rmb
//1000000 * 4.61