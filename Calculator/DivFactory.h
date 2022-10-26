#pragma once
#ifdef WIN32  
#pragma execution_character_set("utf-8")  
#endif

#include "OperatorFactory.h"
class DivFactory :
    public OperatorFactory
{
public:
    DivFactory();
    double getResult();
};

