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
#include <scientific.h>

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
    QComboBox *cmbWeightTwo;
    Scientific *sbWeightOne;
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
        stackedWidget->setGeometry(QRect(0, 0, 1211, 531));
        mainmenu = new QWidget();
        mainmenu->setObjectName("mainmenu");
        label = new QLabel(mainmenu);
        label->setObjectName("label");
        label->setGeometry(QRect(20, -20, 1181, 151));
        QFont font;
        font.setFamilies({QString::fromUtf8("Elephant")});
        font.setPointSize(28);
        font.setBold(false);
        label->setFont(font);
        label->setFrameShape(QFrame::Shape::NoFrame);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        layoutWidget = new QWidget(mainmenu);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(340, 70, 521, 491));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnLength = new QPushButton(layoutWidget);
        btnLength->setObjectName("btnLength");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Modern No. 20")});
        font1.setPointSize(24);
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
        layoutWidget1->setGeometry(QRect(40, 270, 1141, 251));
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
        label_3->setGeometry(QRect(10, 0, 1181, 151));
        label_3->setFont(font);
        label_3->setFrameShape(QFrame::Shape::NoFrame);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        layoutWidget2 = new QWidget(weight);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(30, 280, 1141, 251));
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
        layoutWidget3->setGeometry(QRect(30, 130, 1161, 131));
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

        cmbWeightTwo = new QComboBox(layoutWidget3);
        cmbWeightTwo->addItem(QString());
        cmbWeightTwo->addItem(QString());
        cmbWeightTwo->addItem(QString());
        cmbWeightTwo->addItem(QString());
        cmbWeightTwo->setObjectName("cmbWeightTwo");
        cmbWeightTwo->setFont(font4);

        gridLayout->addWidget(cmbWeightTwo, 1, 2, 1, 1);

        sbWeightOne = new Scientific(layoutWidget3);
        sbWeightOne->setObjectName("sbWeightOne");
        sbWeightOne->setFont(font2);
        sbWeightOne->setAlignment(Qt::AlignmentFlag::AlignCenter);
        sbWeightOne->setDecimals(2);
        sbWeightOne->setMaximum(1000000.000000000000000);

        gridLayout->addWidget(sbWeightOne, 0, 0, 1, 1);

        stackedWidget->addWidget(weight);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1214, 33));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
