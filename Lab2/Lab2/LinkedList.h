#pragma once
#include <iostream>
#include <string> 
#include "Interfaces.h"


class LinkedList :
	public PushPopContainer, InsertableContainer
{
private:
	List *begin, *end;
	int size;
public:

	LinkedList()
	{
		begin = end = NULL;
		size = 0;
	}


	LinkedList(int value)
	{
		List *cell = new List;
		cell->value = value;
		cell->prev = cell->next = NULL;
		begin = end = cell;
		size = 1;
	}

	const int get_size() { return size; }

	const bool is_empty() { return !size; }

	const std::string to_string()
	{
		std::string res = " ";
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

	void push(int value)
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


	int pop()
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


	const int peek() { return end->value; }

	const int get(int index)	//получить элемент
	{
		if (is_empty())
		{
			std::cout << "Ваш список пуст";
			throw 1;
		}
		else if (index >= size || index < 0)
		{
			std::cout << "Индекс указан не верно";
			throw 2;
		}
		List *cell = begin;
		for (int i = 1; i <= index; i++)
			cell = cell->next;
		return cell->value;
	}

	void set(int index, int value)		//изменить элемент по индексу
	{
		if (is_empty())
		{
			std::cout << "Ваш список пуст";
			return;
		}
		else if (index >= size || index < 0)
		{
			std::cout << "Индекс указан не верно";
			return;
		}
		List *cell = begin;
		for (int i = 1; i <= index; i++)
			cell = cell->next;
		cell->value = value;
	}

	void insertAt(int index, int value)
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


	void removeAt(int index)
	{
		if (is_empty())
		{
			std::cout << "Ваш список пуст";
			return;
		}
		else if (index >= size || index < 0)
		{
			std::cout << "Индекс указан не верно";
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

};
