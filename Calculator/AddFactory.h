#pragma once
#include "Operation.h"
#include "FactoryInterFace.h"
#include "Add.h"

//继承工厂类接口
class AddFactory : public FactoryInterFace
{
public:
    AddFactory();
    Operation * CreateOper();
};

