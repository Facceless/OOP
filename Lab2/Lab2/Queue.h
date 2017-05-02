#pragma once
#include <iostream>
#include <string> 
#include "Interfaces.h"



class Queue : public PushPopContainer
{
private:
	List *end, *begin;
	int size;
public:

	Queue()
	{
		end = begin = NULL;
		size = 0;
	}


	Queue(int value)
	{
		List * cell = new List;
		cell->value = value;
		cell->next = cell->prev = NULL;
		end = begin = cell;
		size = 1;
	}

	const int get_size() { return size; }

	const bool is_empty() { return !size; }

	const std::string to_string()
	{
		std::string res;
		List * cell = end;
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
		List * cell = new List;
		cell->value = value;
		cell->next = NULL;
		cell->prev = begin;
		if (is_empty())
			end = cell;
		else
			begin->next = cell;
		begin = cell;
		size++;
	}


	int pop()
	{
		if (is_empty())
		{
			std::cout << "Ваш список пуст";
			throw 1;
		}
		List *cell_for_del = end->next;
		int cell_value = end->value;
		delete end;
		end = cell_for_del;
		if (end)
			end->prev = NULL;
		else
			begin = NULL;
		size--;
		return cell_value;
	}


	const int peek() { return end->value; }
};
