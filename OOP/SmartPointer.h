#pragma once
#include <iostream>

template<typename T>
class SmartPointer
{
public:
	SmartPointer(T* ptr)
	{
		this->ptr = ptr;
		std::cout << "Constructor" << std::endl;
	}

	~SmartPointer()
	{
		delete this->ptr;
		std::cout << "Destructor" << std::endl;
	}

	T& operator*()
	{
		return *this->ptr;
	}

private:
	T* ptr;
};

