#include "AddFactory.h"

AddFactory::AddFactory()
{
}
//重写父类的getResult方法，实现加法操作
double AddFactory::getResult()
{
    double opr1 = getOperand1();
    double opr2 = getOperand2();
    return opr1 + opr2;
}
