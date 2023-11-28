#pragma once
#include <iostream>
#include "TypeSize.h"

//Наследование от шаблонного класса
template<class T>
class TypeInfo :public TypeSize<T>
{
public:
	TypeInfo(T value) :TypeSize<T>(value)
	{

	}

	void ShowTypeName()
	{
		std::cout << "Название типа: " << typeid(this->value).name() << std::endl;
	}
};

