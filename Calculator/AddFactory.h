#pragma once
#include "Operation.h"
#include "FactoryInterFace.h"
#include "Add.h"

//�̳й�����ӿ�
class AddFactory : public FactoryInterFace
{
public:
    AddFactory();
    Operation * CreateOper();
};

