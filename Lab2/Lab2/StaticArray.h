#pragma once
#include "interfaces.h"

class StaticArray :
	public IndexedContainer
{
private:
	int *arr;
	int size;
public:



	StaticArray(int size, int default_value)
	{
		if (size <= 0)
			throw 4;
		this->size = size;
		arr = new int[size];
		for (int i = 0; i < size; i++)
			arr[i] = default_value;
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


	inline const int get(int index)
	{
		if (is_empty())
			throw 1;
		else if (index >= size || index < 0)
			throw 2;
		return arr[index];
	}

	void set(int index, int value)
	{
		if (is_empty())
			throw 1;
		else if (index >= size || index < 0)
			throw 2;
		arr[index] = value;
	}

};
