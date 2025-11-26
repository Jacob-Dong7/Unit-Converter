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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *mainmenu;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *btnLength;
    QPushButton *btnWeight;
    QPushButton *btnTemp;
    QPushButton *btnCurrency;
    QWidget *pageLength;
    QLabel *label_2;
    QSplitter *splitter_3;
    QSplitter *splitter;
    QSpinBox *sbLengthOne;
    QSpinBox *sbLengthTwo;
    QSplitter *splitter_2;
    QComboBox *cmbLengthOne;
    QComboBox *cmbLengthTwo;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnConvertLength;
    QPushButton *btnClearLength;
    QPushButton *btnReturnLength;
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
        widget = new QWidget(mainmenu);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(340, 70, 521, 441));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnLength = new QPushButton(widget);
        btnLength->setObjectName("btnLength");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Modern No. 20")});
        font1.setPointSize(24);
        btnLength->setFont(font1);

        verticalLayout->addWidget(btnLength);

        btnWeight = new QPushButton(widget);
        btnWeight->setObjectName("btnWeight");
        btnWeight->setFont(font1);

        verticalLayout->addWidget(btnWeight);

        btnTemp = new QPushButton(widget);
        btnTemp->setObjectName("btnTemp");
        btnTemp->setFont(font1);

        verticalLayout->addWidget(btnTemp);

        btnCurrency = new QPushButton(widget);
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
        splitter_3 = new QSplitter(pageLength);
        splitter_3->setObjectName("splitter_3");
        splitter_3->setGeometry(QRect(40, 180, 1141, 72));
        QFont font2;
        font2.setPointSize(18);
        splitter_3->setFont(font2);
        splitter_3->setOrientation(Qt::Orientation::Vertical);
        splitter = new QSplitter(splitter_3);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Orientation::Horizontal);
        splitter->setHandleWidth(50);
        sbLengthOne = new QSpinBox(splitter);
        sbLengthOne->setObjectName("sbLengthOne");
        splitter->addWidget(sbLengthOne);
        sbLengthTwo = new QSpinBox(splitter);
        sbLengthTwo->setObjectName("sbLengthTwo");
        splitter->addWidget(sbLengthTwo);
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
        cmbLengthOne->addItem(QString());
        cmbLengthOne->addItem(QString());
        cmbLengthOne->addItem(QString());
        cmbLengthOne->addItem(QString());
        cmbLengthOne->addItem(QString());
        cmbLengthOne->addItem(QString());
        cmbLengthOne->setObjectName("cmbLengthOne");
        QFont font3;
        font3.setPointSize(10);
        cmbLengthOne->setFont(font3);
        splitter_2->addWidget(cmbLengthOne);
        cmbLengthTwo = new QComboBox(splitter_2);
        cmbLengthTwo->addItem(QString());
        cmbLengthTwo->addItem(QString());
        cmbLengthTwo->addItem(QString());
        cmbLengthTwo->addItem(QString());
        cmbLengthTwo->addItem(QString());
        cmbLengthTwo->addItem(QString());
        cmbLengthTwo->addItem(QString());
        cmbLengthTwo->addItem(QString());
        cmbLengthTwo->addItem(QString());
        cmbLengthTwo->addItem(QString());
        cmbLengthTwo->addItem(QString());
        cmbLengthTwo->setObjectName("cmbLengthTwo");
        cmbLengthTwo->setFont(font3);
        splitter_2->addWidget(cmbLengthTwo);
        splitter_3->addWidget(splitter_2);
        widget1 = new QWidget(pageLength);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(40, 270, 1141, 251));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnConvertLength = new QPushButton(widget1);
        btnConvertLength->setObjectName("btnConvertLength");
        btnConvertLength->setFont(font1);

        verticalLayout_2->addWidget(btnConvertLength);

        btnClearLength = new QPushButton(widget1);
        btnClearLength->setObjectName("btnClearLength");
        btnClearLength->setFont(font1);

        verticalLayout_2->addWidget(btnClearLength);

        btnReturnLength = new QPushButton(widget1);
        btnReturnLength->setObjectName("btnReturnLength");
        btnReturnLength->setFont(font1);

        verticalLayout_2->addWidget(btnReturnLength);

        stackedWidget->addWidget(pageLength);
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
        cmbLengthOne->setItemText(5, QCoreApplication::translate("MainWindow", "Nanometre", nullptr));
        cmbLengthOne->setItemText(6, QCoreApplication::translate("MainWindow", "Mile", nullptr));
        cmbLengthOne->setItemText(7, QCoreApplication::translate("MainWindow", "Yard", nullptr));
        cmbLengthOne->setItemText(8, QCoreApplication::translate("MainWindow", "Foot", nullptr));
        cmbLengthOne->setItemText(9, QCoreApplication::translate("MainWindow", "Inch", nullptr));
        cmbLengthOne->setItemText(10, QCoreApplication::translate("MainWindow", "Nautical mile", nullptr));

        cmbLengthOne->setCurrentText(QCoreApplication::translate("MainWindow", "Kilometre", nullptr));
        cmbLengthTwo->setItemText(0, QCoreApplication::translate("MainWindow", "Kilometre", nullptr));
        cmbLengthTwo->setItemText(1, QCoreApplication::translate("MainWindow", "Metre", nullptr));
        cmbLengthTwo->setItemText(2, QCoreApplication::translate("MainWindow", "Centimetre", nullptr));
        cmbLengthTwo->setItemText(3, QCoreApplication::translate("MainWindow", "Millimetre", nullptr));
        cmbLengthTwo->setItemText(4, QCoreApplication::translate("MainWindow", "Micrometre", nullptr));
        cmbLengthTwo->setItemText(5, QCoreApplication::translate("MainWindow", "Nanometre", nullptr));
        cmbLengthTwo->setItemText(6, QCoreApplication::translate("MainWindow", "Mile", nullptr));
        cmbLengthTwo->setItemText(7, QCoreApplication::translate("MainWindow", "Yard", nullptr));
        cmbLengthTwo->setItemText(8, QCoreApplication::translate("MainWindow", "Foot", nullptr));
        cmbLengthTwo->setItemText(9, QCoreApplication::translate("MainWindow", "Inch", nullptr));
        cmbLengthTwo->setItemText(10, QCoreApplication::translate("MainWindow", "Nautical mile", nullptr));

        btnConvertLength->setText(QCoreApplication::translate("MainWindow", "Convert", nullptr));
        btnClearLength->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        btnReturnLength->setText(QCoreApplication::translate("MainWindow", "Return", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
