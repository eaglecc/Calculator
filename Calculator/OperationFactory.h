#pragma once
#include "Operation.h"

//简单工厂模式
class OperationFactory
{
public:
    OperationFactory();
    Operation * creatCalculation(char str);
};

