#include "MulFactory.h"

MulFactory::MulFactory()
{
}

double MulFactory::getResult()
{
    double opr1 = getOperand1();
    double opr2 = getOperand2();
    return opr1 * opr2;
}
