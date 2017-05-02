#pragma once
#include <iostream>
#include <string> 
#include "Interfaces.h"



class Stack : public PushPopContainer
{
private:
	List *end;
	int size;
public:

	Stack()
	{
		end = NULL;
		size = 0;
	}

	Stack(int value)
	{
		List * cell = new List;
		cell->value = value;
		cell->next = cell->prev = NULL;
		end = cell;
		size = 1;
	}

	const bool is_empty() { return !size; }

	inline const int get_size() { return size; }

	const std::string to_string()
	{
		std::string res;
		List * cell = end;
		while (cell)
		{
			res += std::to_string(cell->value) + ", ";
			cell = cell->next;
		}
		res.pop_back();
		res.pop_back();
		return res;
	}

	void push(int value)
	{
		List * cell = new List;
		cell->value = value;
		cell->prev = NULL;
		cell->next = end;
		if (!is_empty())
			end->prev = cell;
		end = cell;
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
		size--;
		return cell_value;
	}


	const int peek() { return end->value; }

};