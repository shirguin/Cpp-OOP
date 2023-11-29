#include "List.h"

//Конструктор
template<typename T>
List<T>::List()
{
	this->Size = 0;
	this->head = nullptr;
}

//Деструктор
template<typename T>
List<T>::~List()
{
	this->clear();
}

//Метод удаления первого элемента списка
template<typename T>
void List<T>::pop_front()
{
	Node<T>* temp = head;
	head = head->pNext;
	delete temp;
	this->Size--;
}

//Метод вставки нового элемента в конец списка
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
		while (current->pNext != nullptr)
		{
			current = current->pNext;
		}

		current->pNext = new Node<T>(data);
	}

	this->Size++;
}

//Метод полной очистки списка
template<typename T>
void List<T>::clear()
{
	while (this->Size)
	{
		this->pop_front();
	}
}

//Перегрузка оператора []
template<typename T>
T& List<T>::operator[](const int index)
{
	int counter = 0;

	Node<T>* current = this->head;

	while (current != nullptr)
	{
		if (counter == index)
		{
			return current->data;
		}

		current = current->pNext;
		counter++;
	}
}

//Метод вставки нового элемента в начало списка
template<typename T>
void List<T>::push_front(T data)
{
	this->head = new Node<T>(data, this->head);
	this->Size++;
}

//Метод вставки нового элемента по индексу
template<typename T>
void List<T>::insert(T data, int index)
{
	if (index == 0)
	{
		this->push_front(data);
	}
	else
	{
		Node<T>* previous = this->head;

		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->pNext;
		}

		Node<T>* newNode = new Node<T>(data, previous->pNext);

		previous->pNext = newNode;

		this->Size++;
	}

}

//Метод удаления элемента по индексу
template<typename T>
void List<T>::removeAt(int index)
{
	if (index == 0)
	{
		this->pop_front();
	}
	else
	{
		Node<T>* previous = this->head;

		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->pNext;
		}

		Node<T>* toDelete = previous->pNext;
		previous->pNext = toDelete->pNext;
		delete toDelete;
		this->Size--;
	}
}

//Метод удаления последнего элемента
template<typename T>
void List<T>::pop_back()
{
	removeAt(this->Size - 1);
}
