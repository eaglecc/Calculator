#include "Add.h"
Add::Add()
{
}
//��д�����getResult������ʵ�ּӷ�����
double Add::getResult()
{
    double opr1 = getOperand1();
    double opr2 = getOperand2();
    return opr1 + opr2;
}
