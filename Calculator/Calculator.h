#pragma once

#include <QtWidgets/QWidget>
#include <QString>
#include "ui_Calculator.h"
#include "Operation.h"
#include "OperationFactory.h"
class Calculator : public QWidget
{
    Q_OBJECT
private:
    Operation *cal;
    OperationFactory *operatorfactory;
    double operand1;
    double operand2;
    int operat_flag;
    double result;
    int oper;
public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();
    void readNum(int num , int dot = 0);
    void checkString(QString s);
    void setCalNum();
public slots:
    void on_number0_clicked();
    void on_number1_clicked();
    void on_number2_clicked();
    void on_number3_clicked();
    void on_number4_clicked();
    void on_number5_clicked();
    void on_number6_clicked();
    void on_number7_clicked();
    void on_number8_clicked();
    void on_number9_clicked();
    void on_operatorAdd_clicked();
    void on_operatorSub_clicked();
    void on_operatorMul_clicked();
    void on_operatorDiv_clicked();
    void on_operatorResult_clicked();
    void on_clearbtn_clicked();
    void on_dot_clicked();
    void on_reverseNum_clicked();
private:
    Ui::CalculatorClass ui;
    QString textPanel;
    QString resultPanel;
};
