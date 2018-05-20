//
//  DataType.h
//  XKit
//
//  Created by michael on 2018/5/20.
//  Copyright © 2018年 Polar. All rights reserved.
//

#ifndef DataType_h
#define DataType_h

typedef enum {
    DataTypeUnknown = 0,
    DataTypeAtomBase = 1,
    DataTypeInteger = DataTypeAtomBase,
    DataTypeLong,
    DataTypeFloat,
    DataTypeDouble,
    DataTypeString,
    DataTypeAtomMax,
    DataTypeContainerBase = 10,
    DataTypeVector = DataTypeContainerBase,
    DataTypeList,
    DataTypeMap,
    DataTypeSet,
    DataTypeContainerMax,
    DataTypeCompositeBase = 20,
    DataTypeComposite = DataTypeCompositeBase,
    DataTypeCompositeMax,
} DataType;

#endif /* DataType_h */
