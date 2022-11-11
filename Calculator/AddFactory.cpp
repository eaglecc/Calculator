#include "AddFactory.h"
#include "Add.h"
AddFactory::AddFactory()
{
}

Operation * AddFactory::CreateOper()
{
    //重写父类CreateOper方法，使用加法工厂创建加法对象
    Operation *pro = new Add();
    return pro;
}
