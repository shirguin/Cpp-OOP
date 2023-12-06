#include <iostream>
#include <string>
#include <fstream>
#include <memory>
#include "List.h"
//#include "Point.h"
//#include "PC.h"
//#include "TypeSize.h"
//#include "TypeInfo.h"
//#include "SmartPointer.h"

#include <vector>
#include <list>
#include <forward_list>
#include <array>
#include <deque>
#include <set>
#include <map>
//Многопоточность
//#include <thread>//работа с потоками
//#include <chrono>//работа со временем
//
//#include <queue>

#include "Sum.h"
#include "MyClass.h"

using namespace std;
//typedef std::vector<int> int_vector;
//typedef std::vector<float> float_vector;

union MyUnion 
{
	short int a;
	int b;
	float c;
};

int main()
{
	setlocale(LC_ALL, "ru");

	MyUnion u;
	u.a = 5;
	u.b = 40000;
	u.c = 43.54;

	return 0;
}

