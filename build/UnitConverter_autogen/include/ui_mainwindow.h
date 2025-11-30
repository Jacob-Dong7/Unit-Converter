/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <currency.h>
#include "scientific.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *mainmenu;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btnLength;
    QPushButton *btnWeight;
    QPushButton *btnTemp;
    QPushButton *btnCurrency;
    QWidget *pageLength;
    QLabel *label_2;
    Scientific *sbLengthOne;
    Scientific *sbLengthTwo;
    QSplitter *splitter_3;
    QSplitter *splitter;
    QSplitter *splitter_2;
    QComboBox *cmbLengthOne;
    QComboBox *cmbLengthTwo;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnConvertLength;
    QPushButton *btnClearLength;
    QPushButton *btnReturnLength;
    QWidget *weight;
    QLabel *label_3;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *btnConvertWeight;
    QPushButton *btnClearWeight;
    QPushButton *btnReturnWeight;
    QSplitter *splitter_5;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout;
    Scientific *sbWeightTwo;
    QComboBox *cmbWeightOne;
    Scientific *sbWeightOne;
    QComboBox *cmbWeightTwo;
    QWidget *curr;
    QLabel *label_4;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QPushButton *btnConvertCurr;
    QPushButton *btnClearCurr;
    QPushButton *btnReturnCurr;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_2;
    Currency *sbCurrencyFrom;
    QComboBox *cmbCurrencyFrom;
    Currency *sbCurrencyTo;
    QComboBox *cmbCurrencyTo;
    QLabel *lblCurrency;
    QWidget *page;
    QLabel *label_5;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_5;
    QPushButton *btnTempConvert;
    QPushButton *btnTempClear;
    QPushButton *btnTempReturn;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QDoubleSpinBox *sbTempFrom;
    QDoubleSpinBox *sbTempTo;
    QComboBox *cmbTempFrom;
    QComboBox *cmbTempTo;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1214, 588);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 1211, 561));
        mainmenu = new QWidget();
        mainmenu->setObjectName("mainmenu");
        label = new QLabel(mainmenu);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1211, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Elephant")});
        font.setPointSize(28);
        font.setBold(false);
        label->setFont(font);
        label->setFrameShape(QFrame::Shape::NoFrame);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        layoutWidget = new QWidget(mainmenu);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 70, 1181, 491));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnLength = new QPushButton(layoutWidget);
        btnLength->setObjectName("btnLength");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Rockwell")});
        font1.setPointSize(26);
        font1.setBold(true);
        btnLength->setFont(font1);

        verticalLayout->addWidget(btnLength);

        btnWeight = new QPushButton(layoutWidget);
        btnWeight->setObjectName("btnWeight");
        btnWeight->setFont(font1);

        verticalLayout->addWidget(btnWeight);

        btnTemp = new QPushButton(layoutWidget);
        btnTemp->setObjectName("btnTemp");
        btnTemp->setFont(font1);

        verticalLayout->addWidget(btnTemp);

        btnCurrency = new QPushButton(layoutWidget);
        btnCurrency->setObjectName("btnCurrency");
        btnCurrency->setFont(font1);

        verticalLayout->addWidget(btnCurrency);

        stackedWidget->addWidget(mainmenu);
        pageLength = new QWidget();
        pageLength->setObjectName("pageLength");
        label_2 = new QLabel(pageLength);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, -10, 1181, 151));
        label_2->setFont(font);
        label_2->setFrameShape(QFrame::Shape::NoFrame);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        sbLengthOne = new Scientific(pageLength);
        sbLengthOne->setObjectName("sbLengthOne");
        sbLengthOne->setGeometry(QRect(40, 122, 541, 51));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        sbLengthOne->setFont(font2);
        sbLengthOne->setAlignment(Qt::AlignmentFlag::AlignCenter);
        sbLengthOne->setDecimals(2);
        sbLengthOne->setMaximum(1000000.000000000000000);
        sbLengthTwo = new Scientific(pageLength);
        sbLengthTwo->setObjectName("sbLengthTwo");
        sbLengthTwo->setGeometry(QRect(640, 120, 541, 51));
        sbLengthTwo->setFont(font2);
        sbLengthTwo->setWrapping(false);
        sbLengthTwo->setAlignment(Qt::AlignmentFlag::AlignCenter);
        sbLengthTwo->setDecimals(323);
        sbLengthTwo->setMinimum(-100000000000000000.000000000000000);
        sbLengthTwo->setMaximum(100000000000000000.000000000000000);
        splitter_3 = new QSplitter(pageLength);
        splitter_3->setObjectName("splitter_3");
        splitter_3->setGeometry(QRect(40, 180, 1141, 32));
        QFont font3;
        font3.setPointSize(18);
        splitter_3->setFont(font3);
        splitter_3->setOrientation(Qt::Orientation::Vertical);
        splitter = new QSplitter(splitter_3);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Orientation::Horizontal);
        splitter->setHandleWidth(50);
        splitter_3->addWidget(splitter);
        splitter_2 = new QSplitter(splitter_3);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setOrientation(Qt::Orientation::Horizontal);
        splitter_2->setHandleWidth(50);
        cmbLengthOne = new QComboBox(splitter_2);
        cmbLengthOne->addItem(QString());
        cmbLengthOne->addItem(QString());
        cmbLengthOne->addItem(QString());
        cmbLengthOne->addItem(QString());
        cmbLengthOne->addItem(QString());
        cmbLengthOne->setObjectName("cmbLengthOne");
        QFont font4;
        font4.setPointSize(10);
        cmbLengthOne->setFont(font4);
        splitter_2->addWidget(cmbLengthOne);
        cmbLengthTwo = new QComboBox(splitter_2);
        cmbLengthTwo->addItem(QString());
        cmbLengthTwo->addItem(QString());
        cmbLengthTwo->addItem(QString());
        cmbLengthTwo->addItem(QString());
        cmbLengthTwo->addItem(QString());
        cmbLengthTwo->setObjectName("cmbLengthTwo");
        cmbLengthTwo->setFont(font4);
        splitter_2->addWidget(cmbLengthTwo);
        splitter_3->addWidget(splitter_2);
        layoutWidget1 = new QWidget(pageLength);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(40, 210, 1141, 341));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnConvertLength = new QPushButton(layoutWidget1);
        btnConvertLength->setObjectName("btnConvertLength");
        btnConvertLength->setFont(font1);

        verticalLayout_2->addWidget(btnConvertLength);

        btnClearLength = new QPushButton(layoutWidget1);
        btnClearLength->setObjectName("btnClearLength");
        btnClearLength->setFont(font1);

        verticalLayout_2->addWidget(btnClearLength);

        btnReturnLength = new QPushButton(layoutWidget1);
        btnReturnLength->setObjectName("btnReturnLength");
        btnReturnLength->setFont(font1);

        verticalLayout_2->addWidget(btnReturnLength);

        stackedWidget->addWidget(pageLength);
        weight = new QWidget();
        weight->setObjectName("weight");
        label_3 = new QLabel(weight);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, -10, 1181, 151));
        label_3->setFont(font);
        label_3->setFrameShape(QFrame::Shape::NoFrame);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        layoutWidget2 = new QWidget(weight);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(10, 210, 1191, 341));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        btnConvertWeight = new QPushButton(layoutWidget2);
        btnConvertWeight->setObjectName("btnConvertWeight");
        btnConvertWeight->setFont(font1);

        verticalLayout_3->addWidget(btnConvertWeight);

        btnClearWeight = new QPushButton(layoutWidget2);
        btnClearWeight->setObjectName("btnClearWeight");
        btnClearWeight->setFont(font1);

        verticalLayout_3->addWidget(btnClearWeight);

        btnReturnWeight = new QPushButton(layoutWidget2);
        btnReturnWeight->setObjectName("btnReturnWeight");
        btnReturnWeight->setFont(font1);

        verticalLayout_3->addWidget(btnReturnWeight);

        splitter_5 = new QSplitter(weight);
        splitter_5->setObjectName("splitter_5");
        splitter_5->setGeometry(QRect(30, 190, 16, 16));
        splitter_5->setOrientation(Qt::Orientation::Horizontal);
        splitter_5->setHandleWidth(50);
        layoutWidget3 = new QWidget(weight);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(10, 110, 1191, 111));
        gridLayout = new QGridLayout(layoutWidget3);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(20);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        sbWeightTwo = new Scientific(layoutWidget3);
        sbWeightTwo->setObjectName("sbWeightTwo");
        sbWeightTwo->setFont(font2);
        sbWeightTwo->setWrapping(false);
        sbWeightTwo->setAlignment(Qt::AlignmentFlag::AlignCenter);
        sbWeightTwo->setDecimals(323);
        sbWeightTwo->setMinimum(-100000000000000000.000000000000000);
        sbWeightTwo->setMaximum(100000000000000000.000000000000000);

        gridLayout->addWidget(sbWeightTwo, 0, 2, 1, 1);

        cmbWeightOne = new QComboBox(layoutWidget3);
        cmbWeightOne->addItem(QString());
        cmbWeightOne->addItem(QString());
        cmbWeightOne->addItem(QString());
        cmbWeightOne->addItem(QString());
        cmbWeightOne->setObjectName("cmbWeightOne");
        cmbWeightOne->setFont(font4);

        gridLayout->addWidget(cmbWeightOne, 1, 0, 1, 1);

        sbWeightOne = new Scientific(layoutWidget3);
        sbWeightOne->setObjectName("sbWeightOne");
        sbWeightOne->setFont(font2);
        sbWeightOne->setAlignment(Qt::AlignmentFlag::AlignCenter);
        sbWeightOne->setDecimals(2);
        sbWeightOne->setMaximum(1000000.000000000000000);

        gridLayout->addWidget(sbWeightOne, 0, 0, 1, 1);

        cmbWeightTwo = new QComboBox(layoutWidget3);
        cmbWeightTwo->addItem(QString());
        cmbWeightTwo->addItem(QString());
        cmbWeightTwo->addItem(QString());
        cmbWeightTwo->addItem(QString());
        cmbWeightTwo->setObjectName("cmbWeightTwo");
        cmbWeightTwo->setFont(font4);

        gridLayout->addWidget(cmbWeightTwo, 1, 2, 1, 1);

        stackedWidget->addWidget(weight);
        curr = new QWidget();
        curr->setObjectName("curr");
        label_4 = new QLabel(curr);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, -10, 1181, 151));
        label_4->setFont(font);
        label_4->setFrameShape(QFrame::Shape::NoFrame);
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        layoutWidget_2 = new QWidget(curr);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(30, 240, 1161, 321));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        btnConvertCurr = new QPushButton(layoutWidget_2);
        btnConvertCurr->setObjectName("btnConvertCurr");
        btnConvertCurr->setFont(font1);

        verticalLayout_4->addWidget(btnConvertCurr);

        btnClearCurr = new QPushButton(layoutWidget_2);
        btnClearCurr->setObjectName("btnClearCurr");
        btnClearCurr->setFont(font1);

        verticalLayout_4->addWidget(btnClearCurr);

        btnReturnCurr = new QPushButton(layoutWidget_2);
        btnReturnCurr->setObjectName("btnReturnCurr");
        btnReturnCurr->setFont(font1);

        verticalLayout_4->addWidget(btnReturnCurr);

        layoutWidget_3 = new QWidget(curr);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(30, 130, 1161, 151));
        gridLayout_2 = new QGridLayout(layoutWidget_3);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setHorizontalSpacing(20);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        sbCurrencyFrom = new Currency(layoutWidget_3);
        sbCurrencyFrom->setObjectName("sbCurrencyFrom");
        sbCurrencyFrom->setFont(font2);
        sbCurrencyFrom->setAlignment(Qt::AlignmentFlag::AlignCenter);
        sbCurrencyFrom->setDecimals(2);
        sbCurrencyFrom->setMaximum(1000000.000000000000000);

        gridLayout_2->addWidget(sbCurrencyFrom, 0, 0, 1, 1);

        cmbCurrencyFrom = new QComboBox(layoutWidget_3);
        cmbCurrencyFrom->addItem(QString());
        cmbCurrencyFrom->addItem(QString());
        cmbCurrencyFrom->addItem(QString());
        cmbCurrencyFrom->addItem(QString());
        cmbCurrencyFrom->addItem(QString());
        cmbCurrencyFrom->addItem(QString());
        cmbCurrencyFrom->addItem(QString());
        cmbCurrencyFrom->addItem(QString());
        cmbCurrencyFrom->setObjectName("cmbCurrencyFrom");
        cmbCurrencyFrom->setFont(font4);

        gridLayout_2->addWidget(cmbCurrencyFrom, 1, 0, 1, 1);

        sbCurrencyTo = new Currency(layoutWidget_3);
        sbCurrencyTo->setObjectName("sbCurrencyTo");
        sbCurrencyTo->setFont(font2);
        sbCurrencyTo->setWrapping(false);
        sbCurrencyTo->setAlignment(Qt::AlignmentFlag::AlignCenter);
        sbCurrencyTo->setDecimals(323);
        sbCurrencyTo->setMinimum(-100000000000000000.000000000000000);
        sbCurrencyTo->setMaximum(100000000000000000.000000000000000);

        gridLayout_2->addWidget(sbCurrencyTo, 0, 2, 1, 1);

        cmbCurrencyTo = new QComboBox(layoutWidget_3);
        cmbCurrencyTo->addItem(QString());
        cmbCurrencyTo->addItem(QString());
        cmbCurrencyTo->addItem(QString());
        cmbCurrencyTo->addItem(QString());
        cmbCurrencyTo->addItem(QString());
        cmbCurrencyTo->addItem(QString());
        cmbCurrencyTo->addItem(QString());
        cmbCurrencyTo->addItem(QString());
        cmbCurrencyTo->setObjectName("cmbCurrencyTo");
        cmbCurrencyTo->setFont(font4);

        gridLayout_2->addWidget(cmbCurrencyTo, 1, 2, 1, 1);

        lblCurrency = new QLabel(curr);
        lblCurrency->setObjectName("lblCurrency");
        lblCurrency->setGeometry(QRect(0, 90, 1211, 51));
        QFont font5;
        font5.setPointSize(28);
        font5.setBold(true);
        lblCurrency->setFont(font5);
        lblCurrency->setAlignment(Qt::AlignmentFlag::AlignCenter);
        stackedWidget->addWidget(curr);
        page = new QWidget();
        page->setObjectName("page");
        label_5 = new QLabel(page);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, -10, 1181, 151));
        label_5->setFont(font);
        label_5->setFrameShape(QFrame::Shape::NoFrame);
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        layoutWidget_4 = new QWidget(page);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(19, 288, 1181, 261));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        btnTempConvert = new QPushButton(layoutWidget_4);
        btnTempConvert->setObjectName("btnTempConvert");
        btnTempConvert->setFont(font1);

        verticalLayout_5->addWidget(btnTempConvert);

        btnTempClear = new QPushButton(layoutWidget_4);
        btnTempClear->setObjectName("btnTempClear");
        btnTempClear->setFont(font1);

        verticalLayout_5->addWidget(btnTempClear);

        btnTempReturn = new QPushButton(layoutWidget_4);
        btnTempReturn->setObjectName("btnTempReturn");
        btnTempReturn->setFont(font1);

        verticalLayout_5->addWidget(btnTempReturn);

        widget = new QWidget(page);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 87, 1191, 201));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        sbTempFrom = new QDoubleSpinBox(widget);
        sbTempFrom->setObjectName("sbTempFrom");
        sbTempFrom->setFont(font2);
        sbTempFrom->setAlignment(Qt::AlignmentFlag::AlignCenter);
        sbTempFrom->setDecimals(2);
        sbTempFrom->setMinimum(-1000000.000000000000000);
        sbTempFrom->setMaximum(1000000.000000000000000);

        gridLayout_3->addWidget(sbTempFrom, 0, 0, 1, 1);

        sbTempTo = new QDoubleSpinBox(widget);
        sbTempTo->setObjectName("sbTempTo");
        sbTempTo->setFont(font2);
        sbTempTo->setWrapping(false);
        sbTempTo->setAlignment(Qt::AlignmentFlag::AlignCenter);
        sbTempTo->setDecimals(2);
        sbTempTo->setMinimum(-100000000000000000.000000000000000);
        sbTempTo->setMaximum(100000000000000000.000000000000000);

        gridLayout_3->addWidget(sbTempTo, 0, 1, 1, 1);

        cmbTempFrom = new QComboBox(widget);
        cmbTempFrom->addItem(QString());
        cmbTempFrom->addItem(QString());
        cmbTempFrom->addItem(QString());
        cmbTempFrom->setObjectName("cmbTempFrom");
        cmbTempFrom->setFont(font4);

        gridLayout_3->addWidget(cmbTempFrom, 1, 0, 1, 1);

        cmbTempTo = new QComboBox(widget);
        cmbTempTo->addItem(QString());
        cmbTempTo->addItem(QString());
        cmbTempTo->addItem(QString());
        cmbTempTo->setObjectName("cmbTempTo");
        cmbTempTo->setFont(font4);

        gridLayout_3->addWidget(cmbTempTo, 1, 1, 1, 1);

        stackedWidget->addWidget(page);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1214, 33));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "UniConvert Pro", nullptr));
        btnLength->setText(QCoreApplication::translate("MainWindow", "Length", nullptr));
        btnWeight->setText(QCoreApplication::translate("MainWindow", "Weight", nullptr));
        btnTemp->setText(QCoreApplication::translate("MainWindow", "Temperature", nullptr));
        btnCurrency->setText(QCoreApplication::translate("MainWindow", "Currency", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "UniConvert Pro", nullptr));
        cmbLengthOne->setItemText(0, QCoreApplication::translate("MainWindow", "Kilometre", nullptr));
        cmbLengthOne->setItemText(1, QCoreApplication::translate("MainWindow", "Metre", nullptr));
        cmbLengthOne->setItemText(2, QCoreApplication::translate("MainWindow", "Centimetre", nullptr));
        cmbLengthOne->setItemText(3, QCoreApplication::translate("MainWindow", "Millimetre", nullptr));
        cmbLengthOne->setItemText(4, QCoreApplication::translate("MainWindow", "Micrometre", nullptr));

        cmbLengthOne->setCurrentText(QCoreApplication::translate("MainWindow", "Kilometre", nullptr));
        cmbLengthTwo->setItemText(0, QCoreApplication::translate("MainWindow", "Kilometre", nullptr));
        cmbLengthTwo->setItemText(1, QCoreApplication::translate("MainWindow", "Metre", nullptr));
        cmbLengthTwo->setItemText(2, QCoreApplication::translate("MainWindow", "Centimetre", nullptr));
        cmbLengthTwo->setItemText(3, QCoreApplication::translate("MainWindow", "Millimetre", nullptr));
        cmbLengthTwo->setItemText(4, QCoreApplication::translate("MainWindow", "Micrometre", nullptr));

        btnConvertLength->setText(QCoreApplication::translate("MainWindow", "Convert", nullptr));
        btnClearLength->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        btnReturnLength->setText(QCoreApplication::translate("MainWindow", "Return", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "UniConvert Pro", nullptr));
        btnConvertWeight->setText(QCoreApplication::translate("MainWindow", "Convert", nullptr));
        btnClearWeight->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        btnReturnWeight->setText(QCoreApplication::translate("MainWindow", "Return", nullptr));
        cmbWeightOne->setItemText(0, QCoreApplication::translate("MainWindow", "Tonne", nullptr));
        cmbWeightOne->setItemText(1, QCoreApplication::translate("MainWindow", "Kilogram", nullptr));
        cmbWeightOne->setItemText(2, QCoreApplication::translate("MainWindow", "Gram", nullptr));
        cmbWeightOne->setItemText(3, QCoreApplication::translate("MainWindow", "Milligram", nullptr));

        cmbWeightOne->setCurrentText(QCoreApplication::translate("MainWindow", "Tonne", nullptr));
        cmbWeightTwo->setItemText(0, QCoreApplication::translate("MainWindow", "Tonne", nullptr));
        cmbWeightTwo->setItemText(1, QCoreApplication::translate("MainWindow", "Kilogram", nullptr));
        cmbWeightTwo->setItemText(2, QCoreApplication::translate("MainWindow", "Gram", nullptr));
        cmbWeightTwo->setItemText(3, QCoreApplication::translate("MainWindow", "Milligram", nullptr));

        cmbWeightTwo->setCurrentText(QCoreApplication::translate("MainWindow", "Tonne", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "UniConvert Pro", nullptr));
        btnConvertCurr->setText(QCoreApplication::translate("MainWindow", "Convert", nullptr));
        btnClearCurr->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        btnReturnCurr->setText(QCoreApplication::translate("MainWindow", "Return", nullptr));
        cmbCurrencyFrom->setItemText(0, QCoreApplication::translate("MainWindow", "Australian Dollar", nullptr));
        cmbCurrencyFrom->setItemText(1, QCoreApplication::translate("MainWindow", "United States Dollar", nullptr));
        cmbCurrencyFrom->setItemText(2, QCoreApplication::translate("MainWindow", "Yuan", nullptr));
        cmbCurrencyFrom->setItemText(3, QCoreApplication::translate("MainWindow", "Yen", nullptr));
        cmbCurrencyFrom->setItemText(4, QCoreApplication::translate("MainWindow", "Euro", nullptr));
        cmbCurrencyFrom->setItemText(5, QCoreApplication::translate("MainWindow", "Ruble", nullptr));
        cmbCurrencyFrom->setItemText(6, QCoreApplication::translate("MainWindow", "Hong Kong Dollar", nullptr));
        cmbCurrencyFrom->setItemText(7, QCoreApplication::translate("MainWindow", "Iraqi Dinar", nullptr));

        cmbCurrencyFrom->setCurrentText(QCoreApplication::translate("MainWindow", "Australian Dollar", nullptr));
        cmbCurrencyTo->setItemText(0, QCoreApplication::translate("MainWindow", "Australian Dollar", nullptr));
        cmbCurrencyTo->setItemText(1, QCoreApplication::translate("MainWindow", "United States Dollar", nullptr));
        cmbCurrencyTo->setItemText(2, QCoreApplication::translate("MainWindow", "Yuan", nullptr));
        cmbCurrencyTo->setItemText(3, QCoreApplication::translate("MainWindow", "Yen", nullptr));
        cmbCurrencyTo->setItemText(4, QCoreApplication::translate("MainWindow", "Euro", nullptr));
        cmbCurrencyTo->setItemText(5, QCoreApplication::translate("MainWindow", "Ruble", nullptr));
        cmbCurrencyTo->setItemText(6, QCoreApplication::translate("MainWindow", "Hong Kong Dollar", nullptr));
        cmbCurrencyTo->setItemText(7, QCoreApplication::translate("MainWindow", "Iraqi Dinar", nullptr));

        cmbCurrencyTo->setCurrentText(QCoreApplication::translate("MainWindow", "Australian Dollar", nullptr));
        lblCurrency->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "UniConvert Pro", nullptr));
        btnTempConvert->setText(QCoreApplication::translate("MainWindow", "Convert", nullptr));
        btnTempClear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        btnTempReturn->setText(QCoreApplication::translate("MainWindow", "Return", nullptr));
        cmbTempFrom->setItemText(0, QCoreApplication::translate("MainWindow", "Degree Celsius", nullptr));
        cmbTempFrom->setItemText(1, QCoreApplication::translate("MainWindow", "Fahrenheit", nullptr));
        cmbTempFrom->setItemText(2, QCoreApplication::translate("MainWindow", "Kelvin", nullptr));

        cmbTempFrom->setCurrentText(QCoreApplication::translate("MainWindow", "Degree Celsius", nullptr));
        cmbTempTo->setItemText(0, QCoreApplication::translate("MainWindow", "Degree Celsius", nullptr));
        cmbTempTo->setItemText(1, QCoreApplication::translate("MainWindow", "Fahrenheit", nullptr));
        cmbTempTo->setItemText(2, QCoreApplication::translate("MainWindow", "Kelvin", nullptr));

        cmbTempTo->setCurrentText(QCoreApplication::translate("MainWindow", "Degree Celsius", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
