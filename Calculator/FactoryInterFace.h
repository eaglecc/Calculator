#pragma once
#include "Operation.h"

//工厂类接口
class FactoryInterFace
{
public:
    FactoryInterFace();
    virtual Operation * CreateOper() = 0; 
};

