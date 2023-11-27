#pragma once


class MyException:public exception
{
public:
	MyException(char* msg) :exception(msg)
	{

	}
private:
};

