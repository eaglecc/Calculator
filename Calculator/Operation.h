#pragma once
class Operation
{
private:
    double operand1;
    double operand2;
public:
    Operation();
    void setOperand1(double operand1);
    double getOperand1();
    void setOperand2(double operand2);
    double getOperand2();
    virtual double getResult() = 0;
};

