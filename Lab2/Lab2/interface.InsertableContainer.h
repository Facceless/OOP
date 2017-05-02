
//#ifndef INTERFACE_CONTAINER_HPP
//#include "interface.IndexedContainer.h"
//#define INTERFACE_CONTAINER_HPP
#pragma once
__interface InsertableContainer: public IndexedContainer {
public:
	void insertAt(int index, int value); // вставить элемент со сдвигом
	void removeAt(int index); // убрать элемент со сдвигом

};
//#endif