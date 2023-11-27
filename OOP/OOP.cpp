#include <iostream>
#include <string>
#include <fstream>
#include "Point.h"
#include "PC.h"



using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");

	PC pc;
	pc.setState(PC::PCState::SLEEP);

	switch (pc.getState())
	{
	case PC::PCState::ON:
		cout << "Включен!" << endl;
		break;
	case PC::PCState::OFF:
		cout << "Выключен!" << endl;
		break;
	case PC::PCState::SLEEP:
		cout << "Спит!" << endl;
		break;
	default:
		break;
	}




}

