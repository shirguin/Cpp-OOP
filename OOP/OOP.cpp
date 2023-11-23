#include <iostream>
#include <string>
#include <fstream>
#include "Point.h"


using namespace std;

void Foo(int value)
{
	if (value < 0)
	{
		//throw exception("Число меньше 0!");
		throw "Число меньше 0!";

	}

	if (value = 0)
	{

	}

	cout << "Переменная = " << value << endl;
}

int main()
{
	setlocale(LC_ALL, "ru");

	try
	{
		Foo(-55);
	}
	catch (const exception &ex)
	{
		cout << "Мы поймали " << ex.what()<< endl;
	}
	catch (const char* ex)
	{
		cout << "Блок 2 мы поймали" << ex << endl;
	}

}

