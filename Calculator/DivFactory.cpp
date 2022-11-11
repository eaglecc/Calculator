#include "DivFactory.h"
#include "qmessagebox.h"
DivFactory::DivFactory()
{
}

Operation * DivFactory::CreateOper()
{
    Operation * pro = new Div();
    return pro;
}
