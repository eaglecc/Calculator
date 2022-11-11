#include "OperationFactory.h"
#include "Add.h"
#include "Sub.h"
#include "Mul.h"
#include "Div.h"
#include "qdebug.h"

OperationFactory::OperationFactory()
{
}

//�򵥹���ģʽ�����ֱ࣬����Ӽ��˳�����н���
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
        qDebug() << "��������ȷ�������" ;
        break;
    }
    return cal;
}
