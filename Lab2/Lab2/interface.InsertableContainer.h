
//#ifndef INTERFACE_CONTAINER_HPP
//#include "interface.IndexedContainer.h"
//#define INTERFACE_CONTAINER_HPP
#pragma once
__interface InsertableContainer: public IndexedContainer {
public:
	void insertAt(int index, int value); // �������� ������� �� �������
	void removeAt(int index); // ������ ������� �� �������

};
//#endif