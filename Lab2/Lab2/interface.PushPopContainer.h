
//#ifndef INTERFACE_CONTAINER_HPP
//#include "interface.Container.h"
//#define INTERFACE_CONTAINER_HPP
#pragma once
__interface PushPopContainer : public Container {
public:
	void push(int value); // �������� �������
	int pop(); // ������� �������
	const int peek() ; // ������ �������
};
//#endif