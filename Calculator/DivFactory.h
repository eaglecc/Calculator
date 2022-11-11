#pragma once
#ifdef WIN32  
#pragma execution_character_set("utf-8")  
#endif

#include "Operation.h"
#include "FactoryInterFace.h"
#include "Div.h"
class DivFactory :
    public FactoryInterFace
{
public:
    DivFactory();
    Operation * CreateOper();

};

