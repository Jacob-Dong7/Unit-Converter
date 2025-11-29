#include <QMainWindow>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "scientific.h"
#include "length.h"
#include "weight.h"
#include <iomanip>
#include <QString>
#include <iostream>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
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
    std::cout << convertedValue << std::endl;
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