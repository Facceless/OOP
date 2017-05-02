
//#ifndef INTERFACE_CONTAINER_HPP
//#include "interface.Container.h"
//#define INTERFACE_CONTAINER_HPP
#pragma once
__interface Deque : public Container {
public:
	bool pushFront(int value); // �������� � ������
	bool pushBack(int value); // �������� � �����
	int popFront(); // ������� �� ������
	int popBack(); // ������� � �����
	int peekFront() const; // ������ ������� � ������
	int peekBack() const; // ������ ������� � �����
};
//#endif