/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton_g;
    QPushButton *pushButton;
    QPushButton *pushButton_h;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_k;
    QPushButton *pushButton_0;
    QPushButton *pushButton_2;
    QPushButton *pushButton_1;
    QPushButton *pushButton_5;
    QPushButton *pushButton_x;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_4;
    QPushButton *pushButton_b;
    QPushButton *pushButton_t;
    QPushButton *pushButton_Sign;
    QPushButton *pushButton_C;
    QFrame *line;
    QMenuBar *menubar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(800, 600);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, -3, 241, 61));
        QFont font;
        font.setPointSize(50);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_g = new QPushButton(centralwidget);
        pushButton_g->setObjectName(QString::fromUtf8("pushButton_g"));
        pushButton_g->setGeometry(QRect(180, 194, 61, 48));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 242, 61, 48));
        pushButton_h = new QPushButton(centralwidget);
        pushButton_h->setObjectName(QString::fromUtf8("pushButton_h"));
        pushButton_h->setGeometry(QRect(180, 146, 61, 48));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(120, 194, 61, 48));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(120, 146, 61, 48));
        pushButton_k = new QPushButton(centralwidget);
        pushButton_k->setObjectName(QString::fromUtf8("pushButton_k"));
        pushButton_k->setGeometry(QRect(120, 242, 61, 48));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(0, 242, 121, 48));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 194, 61, 48));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(0, 194, 61, 48));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(60, 146, 61, 48));
        pushButton_x = new QPushButton(centralwidget);
        pushButton_x->setObjectName(QString::fromUtf8("pushButton_x"));
        pushButton_x->setGeometry(QRect(180, 98, 62, 48));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(120, 98, 61, 48));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(60, 98, 61, 48));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(0, 98, 61, 48));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 146, 61, 48));
        pushButton_b = new QPushButton(centralwidget);
        pushButton_b->setObjectName(QString::fromUtf8("pushButton_b"));
        pushButton_b->setGeometry(QRect(180, 51, 61, 48));
        pushButton_t = new QPushButton(centralwidget);
        pushButton_t->setObjectName(QString::fromUtf8("pushButton_t"));
        pushButton_t->setGeometry(QRect(120, 51, 61, 48));
        pushButton_Sign = new QPushButton(centralwidget);
        pushButton_Sign->setObjectName(QString::fromUtf8("pushButton_Sign"));
        pushButton_Sign->setGeometry(QRect(60, 51, 61, 48));
        pushButton_C = new QPushButton(centralwidget);
        pushButton_C->setObjectName(QString::fromUtf8("pushButton_C"));
        pushButton_C->setGeometry(QRect(0, 51, 61, 48));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 44, 241, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        Calculator->setMenuBar(menubar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        label->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        pushButton_g->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        pushButton->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        pushButton_h->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        pushButton_k->setText(QCoreApplication::translate("Calculator", ".", nullptr));
        pushButton_0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        pushButton_1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        pushButton_x->setText(QCoreApplication::translate("Calculator", "x", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        pushButton_b->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        pushButton_t->setText(QCoreApplication::translate("Calculator", "%", nullptr));
        pushButton_Sign->setText(QCoreApplication::translate("Calculator", "+/-", nullptr));
        pushButton_C->setText(QCoreApplication::translate("Calculator", "C", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
