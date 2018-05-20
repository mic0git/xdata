# C++ sdk

# XData

XData定义了多元的数据集合操作，一般用作基础库接口的复杂数据参数类型，方便统一抽象接口，如
```
	int foo(const XData& inData, XData& outData);
```

## 数据类型

- 原子类型: 数值型(Integer、Long、Float、Double)、字符串型(String)
- 容器类型: 顺序性容器(Vector、List）、关联容器（map、set）
- 复合类型, 实现自定义的组合数据类型。

## 功能支持

- 常见基础类型导入导出
- 数据直接寻址
- 序列化(json)
- 数据增删改更新操作
- 数据比较和类型同一型校验


