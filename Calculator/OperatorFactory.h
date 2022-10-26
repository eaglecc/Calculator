#pragma once
class OperatorFactory
{
private:
    double operand1;
    double operand2;
public:
    void setOperand1(double operand1);
    double getOperand1();
    void setOperand2(double operand2);
    double getOperand2();
    double getResult();
};

