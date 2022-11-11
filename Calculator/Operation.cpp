#include "Operation.h"

Operation::Operation()
{
}

void Operation::setOperand1(double operand1)
{
    this->operand1 = operand1;
}

double Operation::getOperand1()
{
    return operand1;
}

void Operation::setOperand2(double operand2)
{
    this->operand2 = operand2;
}

double Operation::getOperand2()
{
    return operand2;
}

double Operation::getResult()
{
    return 0.0;
}
