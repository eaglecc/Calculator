#include "DivFactory.h"
#include "qmessagebox.h"
DivFactory::DivFactory()
{
}

double DivFactory::getResult()
{
    double opr1 = getOperand1();
    double opr2 = getOperand2();
    if (opr2 == 0)
    {
        QMessageBox msgBox;
        msgBox.setText("����������Ϊ0��");
        msgBox.exec();
        return 0;
    }
    return opr1 / opr2;
}