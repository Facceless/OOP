
//#ifndef INTERFACE_CONTAINER_HPP
//#include "interface.Container.h"
//#define INTERFACE_CONTAINER_HPP
#pragma once
__interface PushPopContainer : public Container {
public:
	void push(int value); // добавить элемент
	int pop(); // забрать элемент
	const int peek() ; // узнать элемент
};
//#endif