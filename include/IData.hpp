//
//  IData.hpp
//  XKit
//
//  Created by michael on 2018/5/20.
//  Copyright © 2018年 Polar. All rights reserved.
//

#ifndef IData_hpp
#define IData_hpp

#include <string>
#include "KeyType.h"
#include "DataType.h"
#include "ValueAddress.h"

template<class ValueType>
class IData {
    typedef ValueType* ValueTypePtr;
    
public:
    virtual ~IData() {};
    
    DataType getType() const = 0;
    
    ValueTypePtr getValuePtr(const ValueAddress& address) const = 0;
    ValueType getValue(const ValueAddress& address) const = 0;
    void setValue(const ValueType& value) = 0;
    
    std::string getName() const = 0;
    void setName(const std::string& name) const = 0;
    
    ValueTypePtr findValue(const ValueAddress& address) = 0;
    IData<ValueType>* getItem(const ValueAddress& address) = 0;
    void addItem(const IData<ValueType>* data) = 0;
    void removeItem(const ValueAddress& address) = 0;

    IData<ValueType>* getChild(const ValueAddress& address) = 0;
    void addChild(const IData<ValueType>* data) = 0;
    void removeChild(const ValueAddress& address) = 0;
    
    bool operator==(const IData<ValueType>& a, const IData<ValueType>& b) = 0;
    ValueType& operator[](const KeyType& key) = 0;
    
protected:
    void setType(const DataType type) const = 0;
};

#endif /* IData_hpp */
