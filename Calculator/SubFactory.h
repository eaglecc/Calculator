#pragma once
#include "Sub.h"
#include "FactoryInterFace.h"

class SubFactory : public FactoryInterFace
{
public:
    SubFactory();
    Operation * CreateOper();
};

