#pragma once
#include "Operation.h"

//������ӿ�
class FactoryInterFace
{
public:
    FactoryInterFace();
    virtual Operation * CreateOper() = 0; 
};

