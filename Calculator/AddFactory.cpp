#include "AddFactory.h"

AddFactory::AddFactory()
{
}
//��д�����getResult������ʵ�ּӷ�����
double AddFactory::getResult()
{
    double opr1 = getOperand1();
    double opr2 = getOperand2();
    return opr1 + opr2;
}
