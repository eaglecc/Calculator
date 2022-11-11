#pragma once
#include "Operation.h"
#ifdef WIN32  
#pragma execution_character_set("utf-8")  
#endif
class Div :
    public Operation
{
public:
    Div();
    double getResult();
};

