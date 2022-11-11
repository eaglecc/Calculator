#include "MulFactory.h"

MulFactory::MulFactory()
{
}

Operation * MulFactory::CreateOper()
{
    Operation * pro = new Mul();
    return pro;
}

