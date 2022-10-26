#pragma once
#include "OperatorFactory.h"
class MulFactory :
    public OperatorFactory
{
public:
    MulFactory();
    double getResult();
};

