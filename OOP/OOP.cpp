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

using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");


	array<int, 4> arr = {10,20,30,40};
	cout << arr.at(1) << endl;

	return 0;
}

