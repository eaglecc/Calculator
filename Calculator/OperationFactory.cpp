#include "OperationFactory.h"
#include "AddFactory.h"
#include "SubFactory.h"
#include "MulFactory.h"
#include "DivFactory.h"
#include "qdebug.h"

Operation * OperationFactory::creatCalculation(char str)
{
    Operation * cal = nullptr;
    switch (str)
    {
    case '+':
        cal = new AddFactory();
        break;
    case '-':
        cal = new SubFactory();
        break;
    case '*':
        cal = new MulFactory();
        break;
    case '/':
        cal = new DivFactory();
        break;
    default:
        qDebug() << "请输入正确的运算符" ;
        break;
    }
    return cal;
}
