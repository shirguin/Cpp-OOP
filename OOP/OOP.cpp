#include <iostream>
#include <string>
#include <fstream>
#include "Point.h"
#include "PC.h"
#include "TypeSize.h"
#include "TypeInfo.h"



using namespace std;

template<typename T>
class Printer
{
public:
	void Print(T value)
	{
		cout << value << endl;
	}
};

template<>
class Printer<string>
{
public:
	void Print(string value)
	{
		cout<<"___" << value<<"___" << endl;
	}
};


int main()
{
	setlocale(LC_ALL, "ru");


	Printer <int> p;
		p.Print(76869);

	return 0;
}

