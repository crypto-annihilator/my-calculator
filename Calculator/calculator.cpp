#include "calculator.h"
#include "ui_calculator.h"

#include <QMessageBox>

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
    this->setFixedSize(239, 290);
    ui->centralwidget->setMaximumHeight(290);
    ui->centralwidget->setMaximumWidth(239);
    ui->pushButton_g->setStyleSheet("QPushButton { background-color: orange; color : white }");
    ui->pushButton_h->setStyleSheet("QPushButton { background-color: orange; color : white }");
    ui->pushButton_b->setStyleSheet("QPushButton { background-color: orange; color : white }");
    ui->pushButton_x->setStyleSheet("QPushButton { background-color: orange; color : white }");
    ui->pushButton->setStyleSheet("QPushButton { background-color: orange; color : white }");
    ui->pushButton_0->setStyleSheet("QPushButton { background-color: purple; color : white }");
    ui->pushButton_1->setStyleSheet("QPushButton { background-color: purple; color : white }");
    ui->pushButton_2->setStyleSheet("QPushButton { background-color: purple; color : white }");
    ui->pushButton_3->setStyleSheet("QPushButton { background-color: purple; color : white }");
    ui->pushButton_4->setStyleSheet("QPushButton { background-color: purple; color : white }");
    ui->pushButton_5->setStyleSheet("QPushButton { background-color: purple; color : white }");
    ui->pushButton_6->setStyleSheet("QPushButton { background-color: purple; color : white }");
    ui->pushButton_7->setStyleSheet("QPushButton { background-color: purple; color : white }");
    ui->pushButton_8->setStyleSheet("QPushButton { background-color: purple; color : white }");
    ui->pushButton_9->setStyleSheet("QPushButton { background-color: purple; color : white }");
    ui->pushButton_k->setStyleSheet("QPushButton { background-color: purple; color : white }");
    ui->pushButton_C->setStyleSheet("QPushButton { background-color: orange; color : white }");
    ui->pushButton_Sign->setStyleSheet("QPushButton { background-color: orange; color : white }");
    ui->pushButton_t->setStyleSheet("QPushButton { background-color: orange; color : white }");
    ui->line->setStyleSheet("QLine { background-color: black; }");
    lvalue = "0";
    isEqualSign = false;
    previousSign = '!';
    currentSymbol = '0';
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::showResult(QChar symbol)
{
    QString text = ui->label->text();
    if (text.lastIndexOf('.') != -1 && symbol == '.') {
        QMessageBox::critical(this, "title", "Wrong input!");
        return;
    }
    if (text == "0" || isOperation() || isEqualSign) {
        ui->label->setText(symbol);
        currentSymbol = symbol;
        isEqualSign = false;
        return;
    }
    lvalue = text + symbol;
    QFont font;
    if (lvalue.size() > 8) {
        font.setPointSize((8 * 50) / lvalue.size());
    } else {
        font.setPointSize(50);
    }
    ui->label->setFont(font);
    ui->label->setText(lvalue);
    currentSymbol = symbol;
}

void Calculator::performAction(QChar symbol)
{
    QString text = ui->label->text();
    if (rvalue.size() == 0) {
        rvalue = text;
    } else {
        double x = text.toDouble();
        switch(previousSign.unicode()) {
        case '+':
            x += rvalue.toDouble();
            break;
        case '-':
            x = rvalue.toDouble() - x;
            break;
        case '*':
            x *= rvalue.toDouble();
            break;
        case '/':
            if (x == 0) {
                QMessageBox::critical(this, "title", "can not be divided into zero!");
                lvalue.clear();
                previousSign = '!';
                currentSymbol = '0';
                ui->label->setText("0");
                return;
            }
            x = rvalue.toDouble() / x;
            break;
         case '%':
            if (rvalue == "0") rvalue += "1";
            x = (rvalue.toDouble() * x) / 100;
            break;
        }
        rvalue = QString::number(x);
    }
    previousSign = symbol;
    if (symbol == '=') {
        isEqualSign = true;
    }
    currentSymbol = symbol;
    QFont font;
    if (rvalue.size() > 8) {
        font.setPointSize((50 * 8) / rvalue.size());
    } else {
        font.setPointSize(50);
    }
    ui->label->setFont(font);

    ui->label->setText(rvalue);
}

bool Calculator::isOperation()
{
    if (currentSymbol == '+' || currentSymbol == '-'
            || currentSymbol == '*' || currentSymbol == '/'
            || currentSymbol == '%') {
        return true;
    }
    return false;
}

void Calculator::on_pushButton_Sign_clicked()
{
    QString text = ui->label->text();
    if (text == "0") return;
    if (text[0] == '-') {
        ui->label->setText(text.mid(1));
        return;
    }
    ui->label->setText('-' + text);
}

void Calculator::on_pushButton_0_clicked()
{
    showResult('0');
}

void Calculator::on_pushButton_1_clicked()
{
    showResult('1');
}

void Calculator::on_pushButton_2_clicked()
{
    showResult('2');
}

void Calculator::on_pushButton_3_clicked()
{
    showResult('3');
}

void Calculator::on_pushButton_4_clicked()
{
    showResult('4');
}

void Calculator::on_pushButton_5_clicked()
{
    showResult('5');
}

void Calculator::on_pushButton_6_clicked()
{
    showResult('6');
}

void Calculator::on_pushButton_7_clicked()
{
    showResult('7');
}

void Calculator::on_pushButton_8_clicked()
{
    showResult('8');
}

void Calculator::on_pushButton_9_clicked()
{
    showResult('9');
}

void Calculator::on_pushButton_k_clicked()
{
   showResult('.');
}

void Calculator::on_pushButton_g_clicked()
{
    performAction('+');
}

void Calculator::on_pushButton_h_clicked()
{
    performAction('-');
}

void Calculator::on_pushButton_x_clicked()
{
    performAction('*');
}

void Calculator::on_pushButton_b_clicked()
{
    performAction('/');
}

void Calculator::on_pushButton_t_clicked()
{
    performAction('%');
}

void Calculator::on_pushButton_C_clicked()
{
    lvalue.clear();
    previousSign = '!';
    currentSymbol = '0';
    ui->label->setText("0");
}

void Calculator::on_pushButton_clicked()
{
    performAction('=');
}
