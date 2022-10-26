#include "OperatorFactory.h"

void OperatorFactory::setOperand1(double operand1)
{
    this->operand1 = operand1;
}

double OperatorFactory::getOperand1()
{
    return operand1;
}

void OperatorFactory::setOperand2(double operand2)
{
    this->operand2 = operand2;
}

double OperatorFactory::getOperand2()
{
    return operand2;
}

double OperatorFactory::getResult()
{
    return 0.0;
}

