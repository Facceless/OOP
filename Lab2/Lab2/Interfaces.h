#pragma once
#include <iostream>


struct List
{
	int value;
	List *next, *prev;
};


class Container
{
public:
	virtual const int get_size() = 0;
	virtual const bool is_empty() = 0;
	virtual const std::string to_string() = 0;
};


class PushPopContainer : public Container
{
public:
	virtual void push(int value) = 0;
	virtual int pop() = 0;
	virtual const int peek() = 0;
};


class Deque : public Container
{
public:
	virtual void push_front(int value) = 0;
	virtual void push_back(int value) = 0;
	virtual int pop_front() = 0;
	virtual int pop_back() = 0;
	virtual const int peek_front() = 0;
	virtual const int peek_back() = 0;
};


class IndexedContainer : public Container
{
public:
	virtual const int get(int index) = 0;
	virtual void set(int index, int value) = 0;
};


class InsertableContainer : public IndexedContainer
{
public:
	virtual void insertAt(int index, int value) = 0;
	virtual void removeAt(int index) = 0;
};