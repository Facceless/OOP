#pragma once
#include <iostream>
#include <string> 
#include "interface.PushPopContainer.h"
#include "interface.InsertableContainer.h"

struct List
{
	int value;
	List *next, *prev;
};

class LinkedList :
	public PushPopContainer, InsertableContainer
{
private:
	List *begin, *end;
	int size;
public:
	LinkedList();
	LinkedList(int value);
	const int get_size();
	const bool is_empty();
	const std::string to_string();
	void push(int value);
	int pop();
	const int peek();
	const int get(int index);
	void set(int index, int value);
	void insertAt(int index, int value);
	void removeAt(int index);
};


LinkedList::LinkedList()
{
	begin = end = NULL;
	size = 0;
}


LinkedList::LinkedList(int value)
{
	List *cell = new List;
	cell->value = value;
	cell->prev = cell->next = NULL;
	begin = end = cell;
	size = 1;
}

const int LinkedList::get_size() { return size; }

const bool LinkedList::is_empty() { return !size; }

const std::string LinkedList::to_string()
{
	std::string res = NULL;
	List * cell = begin;
	while (cell)
	{
		res += std::to_string(cell->value) + ", ";
		cell = cell->next;
	}
	if (!is_empty())
	{
		res.pop_back();
		res.pop_back();
	}
	return res;
}

void LinkedList::push(int value)
{
	List *cell = new List;
	cell->value = value;
	cell->next = NULL;
	cell->prev = end;
	if (is_empty())
		begin = cell;
	else
		end->next = cell;
	end = cell;
	size++;
}


int LinkedList::pop()
{
	if (is_empty())
		throw 1;
	List *cell_for_del = end->prev;
	int cell_value = end->value;
	delete end;
	end = cell_for_del;
	if (end)
		end->next = NULL;
	else
		begin = NULL;
	size--;
	return cell_value;
}


 const int LinkedList::peek() { return end->value; }

const int LinkedList::get(int index)	//�������� �������
{
	if (is_empty())
	{
		std::cout << "��� ������ ����";
		return;
	}
	else if (index >= size || index < 0)
	{
		std::cout << "������ ������ �� �����";
		return;
	}
	List *cell = begin;
	for (int i = 1; i <= index; i++)
		cell = cell->next;
	return cell->value;
}

void LinkedList::set(int index, int value)		//�������� ������� �� �������
{
	if (is_empty())
	{
		std::cout << "��� ������ ����";
		return;
	}
	else if (index >= size || index < 0)
	{
		std::cout << "������ ������ �� �����";
		return;
	}
	List *cell = begin;
	for (int i = 1; i <= index; i++)
		cell = cell->next;
	cell->value = value;
}

void LinkedList::insertAt(int index, int value)
{
	if (index > size || index < 0 || is_empty() && index)
		throw 2;
	int cell_value;
	List *cell_List = new List;
	cell_List->value = value;
	cell_List->next = begin;
	cell_List->prev = NULL;
	if (is_empty())
		end = cell_List;
	else
		begin->prev = cell_List;
	begin = cell_List;
	size++;
	for (int i = 0; i < index; i++)
	{
		cell_value = get(i);
		set(i, get(i + 1));
		set(i + 1, cell_value);
	}
}


void LinkedList::removeAt(int index)
{
	if (is_empty())
	{
		std::cout << "��� ������ ����";
		return;
	}
	else if (index >= size || index < 0)
	{
		std::cout << "������ ������ �� �����";
		return;
	}
	int cell_begin_val = begin->value, cell_val;
	List *cell_List = begin->next;
	delete begin;
	begin = cell_List;
	if (begin)
		begin->prev = NULL;
	else
		end = NULL;
	size--;
	for (int i = index - 1; i > 0; i--)
		set(i, get(i - 1));
	if (index)
		set(0, cell_begin_val);
}


