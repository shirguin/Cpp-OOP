#pragma once
#include <iostream>

//��������� �����
template<class T>
class TypeSize
{
public:
	TypeSize()
	{

	}

	TypeSize(T value)
	{
		this->value = value;
	}

	void DataTypeSize()
	{
		std::cout << sizeof(value) << std::endl;
	}
protected:
	T value;
};

