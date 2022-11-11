#include "SubFactory.h"

SubFactory::SubFactory()
{
}

Operation * SubFactory::CreateOper()
{
    Operation * pro = new Sub();
    return pro;
}
