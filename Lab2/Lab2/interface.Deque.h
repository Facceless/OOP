
//#ifndef INTERFACE_CONTAINER_HPP
//#include "interface.Container.h"
//#define INTERFACE_CONTAINER_HPP
#pragma once
__interface Deque : public Container {
public:
	bool pushFront(int value); // добавить в начало
	bool pushBack(int value); // добавить в конец
	int popFront(); // забрать из начала
	int popBack(); // забрать с конца
	int peekFront() const; // узнать элемент в начале
	int peekBack() const; // узнать элемент с конца
};
//#endif