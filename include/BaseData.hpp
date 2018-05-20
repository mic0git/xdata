//
//  BaseData.hpp
//  XKit
//
//  Created by michael on 2018/5/20.
//  Copyright © 2018年 Polar. All rights reserved.
//

#ifndef BaseData_hpp
#define BaseData_hpp

#include "IData.hpp"

template<class ValueType>
class BaseData : public IData<ValueType>
{
    // TODO:
    
protected:
	DataType m_dataType;
	std::string m_name;
};

#endif /* BaseData_hpp */
