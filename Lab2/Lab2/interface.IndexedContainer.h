
//#ifndef INTERFACE_CONTAINER_HPP
//#include "interface.Container.h"
//#define INTERFACE_CONTAINER_HPP
#pragma once
__interface IndexedContainer : public Container  {
public:
	int get(int index) const; // узнать элемент по индексу index
	void set(int index, int value); // задать значение элементу
};
//#endif