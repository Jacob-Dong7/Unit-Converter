#include "currency.h"
#include "mainwindow.h"
#include <QMainWindow>
#include "ui_mainwindow.h"
Currency::Currency(QWidget *parent) : QDoubleSpinBox(parent) {}

QString Currency::textFromValue(double value) const{
    return QString::number(value, 'f', 2);
}