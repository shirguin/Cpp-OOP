#include <iostream>
#include <string>
#include <fstream>
#include <memory>
//#include "Point.h"
//#include "PC.h"
//#include "TypeSize.h"
//#include "TypeInfo.h"
#include "SmartPointer.h"



using namespace std;

template<typename T>
class List
{
public:
	List();
	~List();

	void pop_front();
	void push_back(T data);
	void clear();
	int GetSize() {return Size;}
	T& operator[](const int index);

private:


	template<typename T>
	class Node
	{
	public:
		Node* pNext;
		T data;
		Node(T data=T(), Node* pNext = nullptr)
		{
			this->data = data;
			this->pNext = pNext;
		}
	};

	int Size;
	Node<T> *head;


};

template<typename T>
List<T>::List()
{
	this->Size = 0;
	this->head = nullptr;
}

template<typename T>
List<T>::~List()
{
	this->clear();
}

template<typename T>
void List<T>::pop_front()
{
	Node<T> *temp = head;
	head = head->pNext;
	delete temp;
	this->Size--;
}

template<typename T>
void List<T>::push_back(T data)
{
	if (head == nullptr)
	{
		head = new Node<T>(data);
	}
	else
	{
		Node<T>* current = this->head;
		while (current->pNext !=nullptr)
		{
			current = current->pNext;
		}

		current->pNext = new Node<T>(data);
	}

	this->Size++;
}

template<typename T>
void List<T>::clear()
{
	while (this->Size)
	{
		this->pop_front();
	}
}

template<typename T>
T& List<T>::operator[](const int index)
{
	int counter = 0;

	Node<T>* current = this->head;

	while (current!=nullptr)
	{
		if (counter == index)
		{
			return current->data;
		}
		
		current = current->pNext;
		counter++;
	}
}

int main()
{
	setlocale(LC_ALL, "ru");

	List<int> lst;

	int numbersCount = 3;

	for (int i = 0; i < numbersCount; i++)
	{
		lst.push_back(rand() % 10);
	}

	for (int i = 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << endl;
	}

	lst.clear();
	cout << lst.GetSize() << endl;


	return 0;
}

