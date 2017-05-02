#pragma once
#include "Interfaces.h"
template<class int>
class StaticDeque :
	public Deque
{
private:
	int *arr;
	inr size;
public:

	StaticDeque(int size, int value)
	{
		if (size <= 0)
			throw 4;
		this->size = size;
		arr = new int[size];
		for (int i = 0; i < size; i++)
			arr[i] = value;
	}


	const int get_size() { return size; }


	const bool is_empty() { return !size; }


	const std::string to_string()
	{
		std::string res = "[";
		for (int i = 0; i < size; i++)
			res += std::to_string(arr[i]) + ", ";
		if (!is_empty())
		{
			res.pop_back();
			res.pop_back();
		}
		res += "]";
		return res;
	}


	void push_front(int value)
	{
		int *cell_arr = new int[size + 1];
		for (int i = 0; i < size; i++)
			cell_arr[i + 1] = arr[i];
		cell_arr[0] = value;
		delete[] arr;
		arr = cell_arr;
		size++;
	}


	void push_back(int value)
	{
		int *cell_arr = new int[size + 1];
		for (int i = 0; i < size; i++)
			cell_arr[i] = arr[i];
		cell_arr[size] = value;
		delete[] arr;
		arr = cell_arr;
		size++;
	}


	int pop_front()
	{
		if (is_empty())
			throw 1;
		else if (size == 1)
			throw 3;
		int *cell_arr = new int[size - 1], res_val = arr[0];
		for (int i = 0; i < size - 1; i++)
			cell_arr[i] = arr[i + 1];
		delete[] arr;
		arr = cell_arr;
		size--;
		return res_val;
	}


	int pop_back()
	{
		if (is_empty())
			throw 1;
		else if (size == 1)
			throw 3;
		int *cell_arr = new int[size - 1], res_val = arr[size - 1];
		for (int i = 0; i < size - 1; i++)
			cell_arr[i] = arr[i];
		delete[] arr;
		arr = cell_arr;
		size--;
		return res_val;
	}


	const int peek_front()
	{
		return arr[0];
	}


	const int peek_back()
	{
		return arr[size - 1];
	}
};
