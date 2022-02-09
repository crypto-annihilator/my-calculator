
#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Calculator; }
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

private slots:
    void on_pushButton_0_clicked();
    void on_pushButton_1_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_k_clicked();
    void on_pushButton_x_clicked();
    void on_pushButton_g_clicked();
    void on_pushButton_h_clicked();
    void on_pushButton_b_clicked();
    void on_pushButton_t_clicked();
    void on_pushButton_clicked();
    void on_pushButton_Sign_clicked();
    void on_pushButton_C_clicked();

private:
    void showResult(QChar symbol);
    void performAction(QChar symbol);
    bool isOperation();

private:
    Ui::Calculator *ui;
    QString lvalue;
    QString rvalue;
    bool isEqualSign;
    QChar previousSign;
    QChar currentSymbol;
};
#endif // CALCULATOR_H
