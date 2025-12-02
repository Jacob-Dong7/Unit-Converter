#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QString>
#include "length.h"
#include "currconvert.h"
#include "temp.h"
#include "weight.h"
#include <string>

namespace Ui {
    class MainWindow;
}
class MainWindow : public QMainWindow {
    Q_OBJECT
    public:
    explicit MainWindow(QWidget *parent = 0);

    void writeToFile(std::string &filename, QString from, QString to, double numFrom, double numTo);
    void clearFile(std::string &filename);
    void readFile(std::string &filename);

    private:
    Ui::MainWindow *ui;
    Length convertLength;
    Weight convertWeight;
    CurrConvert convertCurrency;
    Temp convertTemp;


    double convertedValue, currentValue;
    QString unit, target;

    std::string fileName = "history.txt";

    private slots:
    void on_btnLength_clicked();
    void on_btnWeight_clicked();
    void on_btnCurrency_clicked();
    void on_btnTemp_clicked();
    
    void on_btnClearLength_clicked();
    void on_btnConvertLength_clicked();
    void on_btnReturnLength_clicked();

    void on_btnReturnWeight_clicked();
    void on_btnConvertWeight_clicked();
    void on_btnClearWeight_clicked();

    void on_btnReturnCurr_clicked();
    void on_btnClearCurr_clicked();
    void on_btnConvertCurr_clicked();

    void on_btnTempConvert_clicked();
    void on_btnTempClear_clicked();
    void on_btnTempReturn_clicked();

    void on_btnClearHistory_clicked();
    void on_btnShow_clicked();
    void on_btnReturnHis_clicked();
    void on_btnHistory_clicked();
};

#endif