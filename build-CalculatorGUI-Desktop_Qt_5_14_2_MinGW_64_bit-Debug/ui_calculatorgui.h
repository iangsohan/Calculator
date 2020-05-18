/********************************************************************************
** Form generated from reading UI file 'calculatorgui.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATORGUI_H
#define UI_CALCULATORGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculatorGUI
{
public:
    QWidget *centralwidget;
    QLineEdit *Display;
    QPushButton *Button0;
    QPushButton *Button1;
    QPushButton *Button2;
    QPushButton *Button3;
    QPushButton *Button4;
    QPushButton *Button9;
    QPushButton *Button8;
    QPushButton *Button5;
    QPushButton *Button7;
    QPushButton *Button6;
    QPushButton *Button14;
    QPushButton *Button18;
    QPushButton *Button13;
    QPushButton *Button10;
    QPushButton *Button19;
    QPushButton *Button16;
    QPushButton *Button12;
    QPushButton *Button17;
    QPushButton *Button11;
    QPushButton *Button15;
    QPushButton *Button27;
    QPushButton *Button28;
    QPushButton *Button21;
    QPushButton *Button24;
    QPushButton *Button22;
    QPushButton *Button25;
    QPushButton *Button23;
    QPushButton *Button26;
    QPushButton *Button29;
    QPushButton *Button20;
    QPushButton *Button30;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CalculatorGUI)
    {
        if (CalculatorGUI->objectName().isEmpty())
            CalculatorGUI->setObjectName(QString::fromUtf8("CalculatorGUI"));
        CalculatorGUI->resize(371, 576);
        centralwidget = new QWidget(CalculatorGUI);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Display = new QLineEdit(centralwidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        Display->setGeometry(QRect(10, 10, 351, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        Display->setFont(font);
        Display->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #000000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFFFFF\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #696969;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Display->setReadOnly(true);
        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        Button0->setGeometry(QRect(10, 170, 71, 71));
        Button0->setFont(font);
        Button0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #000000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFFFFF\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #696969;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        Button1->setGeometry(QRect(10, 240, 71, 71));
        Button1->setFont(font);
        Button1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #000000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFFFFF\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #696969;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        Button2->setGeometry(QRect(10, 310, 71, 71));
        Button2->setFont(font);
        Button2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #000000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFFFFF\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #696969;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        Button3->setGeometry(QRect(10, 380, 71, 71));
        Button3->setFont(font);
        Button3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #000000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFFFFF\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #696969;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        Button4->setGeometry(QRect(290, 100, 71, 71));
        Button4->setFont(font);
        Button4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #DB7093;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #FFC0CB;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        Button9->setGeometry(QRect(290, 170, 71, 71));
        Button9->setFont(font);
        Button9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #DB7093;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #FFC0CB;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        Button8->setGeometry(QRect(220, 170, 71, 71));
        Button8->setFont(font);
        Button8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        Button5->setGeometry(QRect(10, 100, 71, 71));
        Button5->setFont(font);
        Button5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #000000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFFFFF\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #696969;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        Button7->setGeometry(QRect(150, 170, 71, 71));
        Button7->setFont(font);
        Button7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        Button6->setGeometry(QRect(80, 170, 71, 71));
        Button6->setFont(font);
        Button6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button14 = new QPushButton(centralwidget);
        Button14->setObjectName(QString::fromUtf8("Button14"));
        Button14->setGeometry(QRect(290, 240, 71, 71));
        Button14->setFont(font);
        Button14->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #DB7093;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #FFC0CB;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button18 = new QPushButton(centralwidget);
        Button18->setObjectName(QString::fromUtf8("Button18"));
        Button18->setGeometry(QRect(220, 310, 71, 71));
        Button18->setFont(font);
        Button18->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FFFFFF;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #87CEEB;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button13 = new QPushButton(centralwidget);
        Button13->setObjectName(QString::fromUtf8("Button13"));
        Button13->setGeometry(QRect(220, 240, 71, 71));
        Button13->setFont(font);
        Button13->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FFFFFF;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #87CEEB;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button10 = new QPushButton(centralwidget);
        Button10->setObjectName(QString::fromUtf8("Button10"));
        Button10->setGeometry(QRect(80, 100, 71, 71));
        Button10->setFont(font);
        Button10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #000000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFFFFF\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #696969;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button19 = new QPushButton(centralwidget);
        Button19->setObjectName(QString::fromUtf8("Button19"));
        Button19->setGeometry(QRect(290, 310, 71, 71));
        Button19->setFont(font);
        Button19->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #DB7093;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #FFC0CB;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button16 = new QPushButton(centralwidget);
        Button16->setObjectName(QString::fromUtf8("Button16"));
        Button16->setGeometry(QRect(80, 310, 71, 71));
        Button16->setFont(font);
        Button16->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FFFFFF;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #87CEEB;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button12 = new QPushButton(centralwidget);
        Button12->setObjectName(QString::fromUtf8("Button12"));
        Button12->setGeometry(QRect(150, 240, 71, 71));
        Button12->setFont(font);
        Button12->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FFFFFF;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #87CEEB;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button17 = new QPushButton(centralwidget);
        Button17->setObjectName(QString::fromUtf8("Button17"));
        Button17->setGeometry(QRect(150, 310, 71, 71));
        Button17->setFont(font);
        Button17->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FFFFFF;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #87CEEB;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button11 = new QPushButton(centralwidget);
        Button11->setObjectName(QString::fromUtf8("Button11"));
        Button11->setGeometry(QRect(80, 240, 71, 71));
        Button11->setFont(font);
        Button11->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FFFFFF;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #87CEEB;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button15 = new QPushButton(centralwidget);
        Button15->setObjectName(QString::fromUtf8("Button15"));
        Button15->setGeometry(QRect(150, 100, 71, 71));
        Button15->setFont(font);
        Button15->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #000000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFFFFF\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #696969;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button27 = new QPushButton(centralwidget);
        Button27->setObjectName(QString::fromUtf8("Button27"));
        Button27->setGeometry(QRect(150, 450, 71, 71));
        Button27->setFont(font);
        Button27->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FFFFFF;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #87CEEB;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button28 = new QPushButton(centralwidget);
        Button28->setObjectName(QString::fromUtf8("Button28"));
        Button28->setGeometry(QRect(220, 450, 71, 71));
        Button28->setFont(font);
        Button28->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FFFFFF;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #87CEEB;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button21 = new QPushButton(centralwidget);
        Button21->setObjectName(QString::fromUtf8("Button21"));
        Button21->setGeometry(QRect(80, 380, 71, 71));
        Button21->setFont(font);
        Button21->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FFFFFF;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #87CEEB;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button24 = new QPushButton(centralwidget);
        Button24->setObjectName(QString::fromUtf8("Button24"));
        Button24->setGeometry(QRect(290, 380, 71, 71));
        Button24->setFont(font);
        Button24->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #DB7093;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #FFC0CB;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button22 = new QPushButton(centralwidget);
        Button22->setObjectName(QString::fromUtf8("Button22"));
        Button22->setGeometry(QRect(150, 380, 71, 71));
        Button22->setFont(font);
        Button22->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FFFFFF;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #87CEEB;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button25 = new QPushButton(centralwidget);
        Button25->setObjectName(QString::fromUtf8("Button25"));
        Button25->setGeometry(QRect(10, 450, 71, 71));
        Button25->setFont(font);
        Button25->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #000000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFFFFF\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #696969;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button23 = new QPushButton(centralwidget);
        Button23->setObjectName(QString::fromUtf8("Button23"));
        Button23->setGeometry(QRect(220, 380, 71, 71));
        Button23->setFont(font);
        Button23->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FFFFFF;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #87CEEB;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button26 = new QPushButton(centralwidget);
        Button26->setObjectName(QString::fromUtf8("Button26"));
        Button26->setGeometry(QRect(80, 450, 71, 71));
        Button26->setFont(font);
        Button26->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FFFFFF;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #87CEEB;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button29 = new QPushButton(centralwidget);
        Button29->setObjectName(QString::fromUtf8("Button29"));
        Button29->setGeometry(QRect(290, 450, 71, 71));
        Button29->setFont(font);
        Button29->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #DB7093;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #FFC0CB;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button20 = new QPushButton(centralwidget);
        Button20->setObjectName(QString::fromUtf8("Button20"));
        Button20->setGeometry(QRect(220, 100, 71, 71));
        Button20->setFont(font);
        Button20->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #000000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFFFFF\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #696969;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button30 = new QPushButton(centralwidget);
        Button30->setObjectName(QString::fromUtf8("Button30"));
        Button30->setGeometry(QRect(290, 70, 71, 21));
        Button30->setFont(font);
        Button30->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        CalculatorGUI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CalculatorGUI);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 371, 21));
        CalculatorGUI->setMenuBar(menubar);
        statusbar = new QStatusBar(CalculatorGUI);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CalculatorGUI->setStatusBar(statusbar);

        retranslateUi(CalculatorGUI);

        QMetaObject::connectSlotsByName(CalculatorGUI);
    } // setupUi

    void retranslateUi(QMainWindow *CalculatorGUI)
    {
        CalculatorGUI->setWindowTitle(QCoreApplication::translate("CalculatorGUI", "CalculatorGUI", nullptr));
        Display->setPlaceholderText(QCoreApplication::translate("CalculatorGUI", "0", nullptr));
        Button0->setText(QCoreApplication::translate("CalculatorGUI", "log", nullptr));
#if QT_CONFIG(shortcut)
        Button0->setShortcut(QCoreApplication::translate("CalculatorGUI", "L, O, G", nullptr));
#endif // QT_CONFIG(shortcut)
        Button1->setText(QCoreApplication::translate("CalculatorGUI", "ln", nullptr));
#if QT_CONFIG(shortcut)
        Button1->setShortcut(QCoreApplication::translate("CalculatorGUI", "L, N", nullptr));
#endif // QT_CONFIG(shortcut)
        Button2->setText(QCoreApplication::translate("CalculatorGUI", "e", nullptr));
#if QT_CONFIG(shortcut)
        Button2->setShortcut(QCoreApplication::translate("CalculatorGUI", "E", nullptr));
#endif // QT_CONFIG(shortcut)
        Button3->setText(QCoreApplication::translate("CalculatorGUI", "\317\200", nullptr));
#if QT_CONFIG(shortcut)
        Button3->setShortcut(QCoreApplication::translate("CalculatorGUI", "P", nullptr));
#endif // QT_CONFIG(shortcut)
        Button4->setText(QCoreApplication::translate("CalculatorGUI", "ans", nullptr));
#if QT_CONFIG(shortcut)
        Button4->setShortcut(QCoreApplication::translate("CalculatorGUI", "A", nullptr));
#endif // QT_CONFIG(shortcut)
        Button9->setText(QCoreApplication::translate("CalculatorGUI", "/", nullptr));
#if QT_CONFIG(shortcut)
        Button9->setShortcut(QCoreApplication::translate("CalculatorGUI", "/", nullptr));
#endif // QT_CONFIG(shortcut)
        Button8->setText(QCoreApplication::translate("CalculatorGUI", "^", nullptr));
#if QT_CONFIG(shortcut)
        Button8->setShortcut(QCoreApplication::translate("CalculatorGUI", "^", nullptr));
#endif // QT_CONFIG(shortcut)
        Button5->setText(QCoreApplication::translate("CalculatorGUI", "MODE", nullptr));
#if QT_CONFIG(shortcut)
        Button5->setShortcut(QCoreApplication::translate("CalculatorGUI", "M", nullptr));
#endif // QT_CONFIG(shortcut)
        Button7->setText(QCoreApplication::translate("CalculatorGUI", ")", nullptr));
#if QT_CONFIG(shortcut)
        Button7->setShortcut(QCoreApplication::translate("CalculatorGUI", ")", nullptr));
#endif // QT_CONFIG(shortcut)
        Button6->setText(QCoreApplication::translate("CalculatorGUI", "(", nullptr));
#if QT_CONFIG(shortcut)
        Button6->setShortcut(QCoreApplication::translate("CalculatorGUI", "(", nullptr));
#endif // QT_CONFIG(shortcut)
        Button14->setText(QCoreApplication::translate("CalculatorGUI", "*", nullptr));
#if QT_CONFIG(shortcut)
        Button14->setShortcut(QCoreApplication::translate("CalculatorGUI", "*", nullptr));
#endif // QT_CONFIG(shortcut)
        Button18->setText(QCoreApplication::translate("CalculatorGUI", "6", nullptr));
#if QT_CONFIG(shortcut)
        Button18->setShortcut(QCoreApplication::translate("CalculatorGUI", "6", nullptr));
#endif // QT_CONFIG(shortcut)
        Button13->setText(QCoreApplication::translate("CalculatorGUI", "9", nullptr));
#if QT_CONFIG(shortcut)
        Button13->setShortcut(QCoreApplication::translate("CalculatorGUI", "9", nullptr));
#endif // QT_CONFIG(shortcut)
        Button10->setText(QCoreApplication::translate("CalculatorGUI", "sin", nullptr));
#if QT_CONFIG(shortcut)
        Button10->setShortcut(QCoreApplication::translate("CalculatorGUI", "S", nullptr));
#endif // QT_CONFIG(shortcut)
        Button19->setText(QCoreApplication::translate("CalculatorGUI", "\357\274\215", nullptr));
#if QT_CONFIG(shortcut)
        Button19->setShortcut(QCoreApplication::translate("CalculatorGUI", "-", nullptr));
#endif // QT_CONFIG(shortcut)
        Button16->setText(QCoreApplication::translate("CalculatorGUI", "4", nullptr));
#if QT_CONFIG(shortcut)
        Button16->setShortcut(QCoreApplication::translate("CalculatorGUI", "4", nullptr));
#endif // QT_CONFIG(shortcut)
        Button12->setText(QCoreApplication::translate("CalculatorGUI", "8", nullptr));
#if QT_CONFIG(shortcut)
        Button12->setShortcut(QCoreApplication::translate("CalculatorGUI", "8", nullptr));
#endif // QT_CONFIG(shortcut)
        Button17->setText(QCoreApplication::translate("CalculatorGUI", "5", nullptr));
#if QT_CONFIG(shortcut)
        Button17->setShortcut(QCoreApplication::translate("CalculatorGUI", "5", nullptr));
#endif // QT_CONFIG(shortcut)
        Button11->setText(QCoreApplication::translate("CalculatorGUI", "7", nullptr));
#if QT_CONFIG(shortcut)
        Button11->setShortcut(QCoreApplication::translate("CalculatorGUI", "7", nullptr));
#endif // QT_CONFIG(shortcut)
        Button15->setText(QCoreApplication::translate("CalculatorGUI", "cos", nullptr));
#if QT_CONFIG(shortcut)
        Button15->setShortcut(QCoreApplication::translate("CalculatorGUI", "C", nullptr));
#endif // QT_CONFIG(shortcut)
        Button27->setText(QCoreApplication::translate("CalculatorGUI", "0", nullptr));
#if QT_CONFIG(shortcut)
        Button27->setShortcut(QCoreApplication::translate("CalculatorGUI", "0", nullptr));
#endif // QT_CONFIG(shortcut)
        Button28->setText(QCoreApplication::translate("CalculatorGUI", "-", nullptr));
#if QT_CONFIG(shortcut)
        Button28->setShortcut(QCoreApplication::translate("CalculatorGUI", "N", nullptr));
#endif // QT_CONFIG(shortcut)
        Button21->setText(QCoreApplication::translate("CalculatorGUI", "1", nullptr));
#if QT_CONFIG(shortcut)
        Button21->setShortcut(QCoreApplication::translate("CalculatorGUI", "1", nullptr));
#endif // QT_CONFIG(shortcut)
        Button24->setText(QCoreApplication::translate("CalculatorGUI", "+", nullptr));
#if QT_CONFIG(shortcut)
        Button24->setShortcut(QCoreApplication::translate("CalculatorGUI", "+", nullptr));
#endif // QT_CONFIG(shortcut)
        Button22->setText(QCoreApplication::translate("CalculatorGUI", "2", nullptr));
#if QT_CONFIG(shortcut)
        Button22->setShortcut(QCoreApplication::translate("CalculatorGUI", "2", nullptr));
#endif // QT_CONFIG(shortcut)
        Button25->setText(QCoreApplication::translate("CalculatorGUI", "AC", nullptr));
#if QT_CONFIG(shortcut)
        Button25->setShortcut(QCoreApplication::translate("CalculatorGUI", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        Button23->setText(QCoreApplication::translate("CalculatorGUI", "3", nullptr));
#if QT_CONFIG(shortcut)
        Button23->setShortcut(QCoreApplication::translate("CalculatorGUI", "3", nullptr));
#endif // QT_CONFIG(shortcut)
        Button26->setText(QCoreApplication::translate("CalculatorGUI", ".", nullptr));
#if QT_CONFIG(shortcut)
        Button26->setShortcut(QCoreApplication::translate("CalculatorGUI", ".", nullptr));
#endif // QT_CONFIG(shortcut)
        Button29->setText(QCoreApplication::translate("CalculatorGUI", "=", nullptr));
#if QT_CONFIG(shortcut)
        Button29->setShortcut(QCoreApplication::translate("CalculatorGUI", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        Button20->setText(QCoreApplication::translate("CalculatorGUI", "tan", nullptr));
#if QT_CONFIG(shortcut)
        Button20->setShortcut(QCoreApplication::translate("CalculatorGUI", "T", nullptr));
#endif // QT_CONFIG(shortcut)
        Button30->setText(QCoreApplication::translate("CalculatorGUI", "\342\207\220", nullptr));
#if QT_CONFIG(shortcut)
        Button30->setShortcut(QCoreApplication::translate("CalculatorGUI", "Backspace", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class CalculatorGUI: public Ui_CalculatorGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATORGUI_H
