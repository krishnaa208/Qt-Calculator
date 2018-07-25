/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *c;
    QLabel *label;
    QPushButton *mp;
    QPushButton *percent;
    QPushButton *divide;
    QPushButton *multiply;
    QPushButton *_7;
    QPushButton *_8;
    QPushButton *_9;
    QPushButton *minus;
    QPushButton *_4;
    QPushButton *_5;
    QPushButton *_6;
    QPushButton *plus;
    QPushButton *_1;
    QPushButton *_2;
    QPushButton *_3;
    QPushButton *equal;
    QPushButton *_0;
    QPushButton *dot;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(161, 261);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        c = new QPushButton(centralWidget);
        c->setObjectName(QStringLiteral("c"));
        c->setGeometry(QRect(0, 60, 41, 41));
        c->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 161, 61));
        label->setAutoFillBackground(false);
        label->setStyleSheet(QLatin1String("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));
        mp = new QPushButton(centralWidget);
        mp->setObjectName(QStringLiteral("mp"));
        mp->setGeometry(QRect(40, 60, 41, 41));
        mp->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        percent = new QPushButton(centralWidget);
        percent->setObjectName(QStringLiteral("percent"));
        percent->setGeometry(QRect(80, 60, 41, 41));
        percent->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        divide = new QPushButton(centralWidget);
        divide->setObjectName(QStringLiteral("divide"));
        divide->setGeometry(QRect(120, 60, 41, 41));
        divide->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        multiply = new QPushButton(centralWidget);
        multiply->setObjectName(QStringLiteral("multiply"));
        multiply->setGeometry(QRect(120, 100, 41, 41));
        multiply->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        _7 = new QPushButton(centralWidget);
        _7->setObjectName(QStringLiteral("_7"));
        _7->setGeometry(QRect(0, 100, 41, 41));
        _7->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        _8 = new QPushButton(centralWidget);
        _8->setObjectName(QStringLiteral("_8"));
        _8->setGeometry(QRect(40, 100, 41, 41));
        _8->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        _9 = new QPushButton(centralWidget);
        _9->setObjectName(QStringLiteral("_9"));
        _9->setGeometry(QRect(80, 100, 41, 41));
        _9->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        minus = new QPushButton(centralWidget);
        minus->setObjectName(QStringLiteral("minus"));
        minus->setGeometry(QRect(120, 140, 41, 41));
        minus->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        _4 = new QPushButton(centralWidget);
        _4->setObjectName(QStringLiteral("_4"));
        _4->setGeometry(QRect(0, 140, 41, 41));
        _4->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        _5 = new QPushButton(centralWidget);
        _5->setObjectName(QStringLiteral("_5"));
        _5->setGeometry(QRect(40, 140, 41, 41));
        _5->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        _6 = new QPushButton(centralWidget);
        _6->setObjectName(QStringLiteral("_6"));
        _6->setGeometry(QRect(80, 140, 41, 41));
        _6->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        plus = new QPushButton(centralWidget);
        plus->setObjectName(QStringLiteral("plus"));
        plus->setGeometry(QRect(120, 180, 41, 41));
        plus->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        _1 = new QPushButton(centralWidget);
        _1->setObjectName(QStringLiteral("_1"));
        _1->setGeometry(QRect(0, 180, 41, 41));
        _1->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        _2 = new QPushButton(centralWidget);
        _2->setObjectName(QStringLiteral("_2"));
        _2->setGeometry(QRect(40, 180, 41, 41));
        _2->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        _3 = new QPushButton(centralWidget);
        _3->setObjectName(QStringLiteral("_3"));
        _3->setGeometry(QRect(80, 180, 41, 41));
        _3->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        equal = new QPushButton(centralWidget);
        equal->setObjectName(QStringLiteral("equal"));
        equal->setGeometry(QRect(120, 220, 41, 41));
        equal->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        _0 = new QPushButton(centralWidget);
        _0->setObjectName(QStringLiteral("_0"));
        _0->setGeometry(QRect(0, 220, 81, 41));
        _0->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        dot = new QPushButton(centralWidget);
        dot->setObjectName(QStringLiteral("dot"));
        dot->setGeometry(QRect(80, 220, 41, 41));
        dot->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        c->setText(QApplication::translate("MainWindow", "c", Q_NULLPTR));
        label->setText(QString());
        mp->setText(QApplication::translate("MainWindow", "+/_", Q_NULLPTR));
        percent->setText(QApplication::translate("MainWindow", "%", Q_NULLPTR));
        divide->setText(QApplication::translate("MainWindow", "\303\267", Q_NULLPTR));
        multiply->setText(QApplication::translate("MainWindow", "x", Q_NULLPTR));
        _7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        _8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        _9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        minus->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        _4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        _5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        _6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        plus->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        _1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        _2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        _3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        equal->setText(QApplication::translate("MainWindow", "=", Q_NULLPTR));
        _0->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        dot->setText(QApplication::translate("MainWindow", ".", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
