#pragma once
#include <iostream>
#include <string> 
#include "interface.PushPopContainer.h"

struct List
{
	int value;
	List *next, *prev;
};


class Stack : public PushPopContainer
{
private:
	List *end;
	int size;
public:
	Stack();
	Stack(int value);
	const int get_size();
	const bool is_empty();
	const std::string to_string();
	void push(int value);
	int pop();
	const int peek();
};

Stack::Stack()
{
	end = NULL;
	size = 0;
}

Stack::Stack(int value)
{
	List * cell = new List;
	cell->value = value;
	cell->next = cell->prev = NULL;
	end = cell;
	size = 1;
}

const bool Stack::is_empty() { return !size; }

inline const int Stack::get_size() { return size; }

const std::string Stack::to_string()
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

void Stack::push(int value)
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

int Stack::pop()
{
	if (is_empty())
	{
		std::cout << "Ваш список пуст";
		return;
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


 const int Stack::peek() { return end->value; }

