#pragma once
#include "Operation.h"
#include "FactoryInterFace.h"
#include "Mul.h"

class MulFactory :
    public FactoryInterFace
{
public:
    MulFactory();
    Operation * CreateOper();
};

