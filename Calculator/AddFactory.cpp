#include "AddFactory.h"
#include "Add.h"
AddFactory::AddFactory()
{
}

Operation * AddFactory::CreateOper()
{
    //��д����CreateOper������ʹ�üӷ����������ӷ�����
    Operation *pro = new Add();
    return pro;
}
