#pragma once
#include "Operation.h"

//�򵥹���ģʽ
class OperationFactory
{
public:
    OperationFactory();
    Operation * creatCalculation(char str);
};

