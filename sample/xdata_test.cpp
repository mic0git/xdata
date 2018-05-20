#include <iostream>
#include <stdio.h>  

#include "DataType.h"
#include "BaseData.hpp"

void testDataType()
{
    DataType dataType = DataTypeInteger;
    std::cout << "dataType: " << dataType << std::endl;
}

void testBaseData()
{
}

int main(int argc,char *argv[])
{
    testDataType();
    
    getchar();

    return 0;
}
