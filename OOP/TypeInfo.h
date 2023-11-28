#pragma once
#include <iostream>
#include "TypeSize.h"

//������������ �� ���������� ������
template<class T>
class TypeInfo :public TypeSize<T>
{
public:
	TypeInfo(T value) :TypeSize<T>(value)
	{

	}

	void ShowTypeName()
	{
		std::cout << "�������� ����: " << typeid(this->value).name() << std::endl;
	}
};

