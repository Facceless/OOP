#pragma once
#include <iostream>
#include <string> 
#include "interface.PushPopContainer.h"


struct List
{
	int value;
	List *next, *prev;
};

class Queue : public PushPopContainer 
{
private:
	List *end, *begin;
	int size;
public:
	Queue();
	Queue(int value);
	const int get_size();
	const bool is_empty();
	const std::string to_string();
	void push(int value);
	int pop();
	const int peek();

};


Queue::Queue()
{
	end = begin = NULL;
	size = 0;
}


Queue::Queue(int value)
{
	List * cell = new List;
	cell->value = value;
	cell->next = cell->prev = NULL;
	end = begin = cell;
	size = 1;
}

const int Queue::get_size() { return size; }

 const bool Queue::is_empty() { return !size; }

const std::string Queue::to_string()
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


void Queue::push(int value)
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


int Queue::pop()
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
	else
		begin = NULL;
	size--;
	return cell_value;
}


const int Queue::peek() { return end->value; }

