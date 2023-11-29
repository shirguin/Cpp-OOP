#pragma once
#include <iostream>

template<typename T>
class List
{
public:
	List();
	~List();

	void pop_front();
	void push_back(T data);
	void clear();
	int GetSize() { return Size; }
	T& operator[](const int index);

	void push_front(T data);
	void insert(T data, int index);
	void removeAt(int index);
	void pop_back();

	void printArray();

private:

	template<typename T>
	class Node
	{
	public:
		Node* pNext;
		T data;
		Node(T data = T(), Node* pNext = nullptr)
		{
			this->data = data;
			this->pNext = pNext;
		}
	};

	int Size;
	Node<T>* head;
};

//�����������
template<typename T>
List<T>::List()
{
	this->Size = 0;
	this->head = nullptr;
}

//����������
template<typename T>
List<T>::~List()
{
	this->clear();
}

//����� �������� ������� �������� ������
template<typename T>
void List<T>::pop_front()
{
	Node<T>* temp = head;
	head = head->pNext;
	delete temp;
	this->Size--;
}

//����� ������� ������ �������� � ����� ������
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

//����� ������ ������� ������
template<typename T>
void List<T>::clear()
{
	while (this->Size)
	{
		this->pop_front();
	}
}

//���������� ��������� []
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

//����� ������� ������ �������� � ������ ������
template<typename T>
void List<T>::push_front(T data)
{
	this->head = new Node<T>(data, this->head);
	this->Size++;
}

//����� ������� ������ �������� �� �������
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

//����� �������� �������� �� �������
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

//����� �������� ���������� ��������
template<typename T>
void List<T>::pop_back()
{
	removeAt(this->Size - 1);
}

//����� ������� ������ �� ������ � �������
template<typename T>
inline void List<T>::printArray()
{
	Node<T>* current = this->head;

	for (int i = 0; i < this->Size; i++)
	{
		std::cout << current->data<<" ";
		current = current->pNext;
	}
	std::cout << std::endl;
}
