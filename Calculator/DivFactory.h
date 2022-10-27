#pragma once
#ifdef WIN32  
#pragma execution_character_set("utf-8")  
#endif

#include "Operation.h"
class DivFactory :
    public Operation
{
public:
    DivFactory();
    double getResult();
};

