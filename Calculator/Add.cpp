#include "Add.h"
Add::Add()
{
}
//重写父类的getResult方法，实现加法操作
double Add::getResult()
{
    double opr1 = getOperand1();
    double opr2 = getOperand2();
    return opr1 + opr2;
}
