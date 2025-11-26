#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QString>
#include "length.h"
#include "weight.h"

namespace Ui {
    class MainWindow;
}
class MainWindow : public QMainWindow {
    Q_OBJECT
    public:
    explicit MainWindow(QWidget *parent = 0);

    private:
    Ui::MainWindow *ui;
    Length convertLength;
    Weight convertWeight;
    double convertedValue, currentValue;
    QString unit, target;

    private slots:
    void on_btnLength_clicked();
    void on_btnWeight_clicked();
    
    void on_btnClearLength_clicked();
    void on_btnConvertLength_clicked();
    void on_btnReturnLength_clicked();

    void on_btnReturnWeight_clicked();
    void on_btnConvertWeight_clicked();
    void on_btnClearWeight_clicked();
};

#endif