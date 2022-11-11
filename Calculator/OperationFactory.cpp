#include "OperationFactory.h"
#include "Add.h"
#include "Sub.h"
#include "Mul.h"
#include "Div.h"
#include "qdebug.h"

OperationFactory::OperationFactory()
{
}

//简单工厂模式工厂类，直接与加减乘除类进行交互
Operation * OperationFactory::creatCalculation(char str)
{
    Operation * cal = nullptr;
    switch (str)
    {
    case '+':
        cal = new Add();
        break;
    case '-':
        cal = new Sub();
        break;
    case '*':
        cal = new Mul();
        break;
    case '/':
        cal = new Div();
        break;
    default:
        qDebug() << "请输入正确的运算符" ;
        break;
    }
    return cal;
}
