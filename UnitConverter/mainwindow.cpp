#include <QMainWindow>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "temp.h"
#include "currconvert.h"
#include "currency.h"
#include "scientific.h"
#include "length.h"
#include "weight.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

void MainWindow::on_btnTempConvert_clicked() {
    currentValue = ui->sbTempFrom->value();
    unit = ui->cmbTempFrom->currentText();
    target = ui->cmbTempTo->currentText();
    convertedValue= convertTemp.convert(currentValue, unit, target);
    ui->sbTempTo->setValue(convertedValue);
}

void MainWindow::on_btnTempClear_clicked() {
    ui->sbTempFrom->setValue(0);
    ui->sbTempTo->setValue(0);
    ui->cmbTempFrom->setCurrentIndex(0);
    ui->cmbTempTo->setCurrentIndex(0);
}
void MainWindow::on_btnTempReturn_clicked() {
    ui->stackedWidget->setCurrentIndex(0);
}
void MainWindow::on_btnTemp_clicked() {
    ui->sbTempFrom->setValue(0);
    ui->sbTempTo->setValue(0);
    ui->cmbTempFrom->setCurrentIndex(0);
    ui->cmbTempTo->setCurrentIndex(0);
    ui->stackedWidget->setCurrentIndex(4);
}
void MainWindow::on_btnCurrency_clicked() {
    ui->sbCurrencyFrom->setValue(0);
    ui->sbCurrencyTo->setValue(0);
    ui->cmbCurrencyFrom->setCurrentIndex(0);
    ui->cmbCurrencyTo->setCurrentIndex(0);
    ui->lblCurrency->setText("0");
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_btnReturnCurr_clicked() {
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_btnConvertCurr_clicked() {
    currentValue = ui->sbCurrencyFrom->value();
    unit = ui->cmbCurrencyFrom->currentText();
    target = ui->cmbCurrencyTo->currentText();
    convertedValue = convertCurrency.convert(currentValue, unit, target);
    ui->sbCurrencyTo->setValue(convertedValue);
    ui->lblCurrency->setText(QString::number(convertedValue, 'f', 2));
}

void MainWindow::on_btnClearCurr_clicked() {
    ui->sbCurrencyFrom->setValue(0);
    ui->sbCurrencyTo->setValue(0);
    ui->cmbCurrencyFrom->setCurrentIndex(0);
    ui->cmbCurrencyTo->setCurrentIndex(0);
    ui->lblCurrency->setText("0");
}




void MainWindow::on_btnWeight_clicked() {
    ui->cmbWeightOne->setCurrentIndex(0);
    ui->cmbWeightTwo->setCurrentIndex(0);
    ui->sbWeightOne->setValue(0);
    ui->sbWeightTwo->setValue(0);
    ui->stackedWidget->setCurrentIndex(2);
}
void MainWindow::on_btnLength_clicked() {
    ui->sbLengthOne->setValue(0);
    ui->sbLengthTwo->setValue(0);
    ui->cmbLengthOne->setCurrentIndex(0);
    ui->cmbLengthTwo->setCurrentIndex(0);
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_btnConvertLength_clicked() {
    unit = ui->cmbLengthOne->currentText();
    target = ui->cmbLengthTwo->currentText();
    currentValue = ui->sbLengthOne->value();
    convertedValue = convertLength.convert(currentValue, unit, target);
    ui->sbLengthTwo->setValue(convertedValue);
}

void MainWindow::on_btnClearLength_clicked() {
    ui->sbLengthOne->setValue(0);
    ui->sbLengthTwo->setValue(0);
    ui->cmbLengthOne->setCurrentIndex(0);
    ui->cmbLengthTwo->setCurrentIndex(0);
}

void MainWindow::on_btnReturnLength_clicked() {
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_btnReturnWeight_clicked() {
    ui->stackedWidget->setCurrentIndex(0);
}
void MainWindow::on_btnConvertWeight_clicked() {
    unit = ui->cmbWeightOne->currentText();
    target = ui->cmbWeightTwo->currentText();
    currentValue = ui->sbWeightOne->value();

    convertedValue = convertWeight.convert(currentValue, unit, target);

    ui->sbWeightTwo->setValue(convertedValue);
}
void MainWindow::on_btnClearWeight_clicked() {
    ui->cmbWeightOne->setCurrentIndex(0);
    ui->cmbWeightTwo->setCurrentIndex(0);
    ui->sbWeightOne->setValue(0);
    ui->sbWeightTwo->setValue(0);
}