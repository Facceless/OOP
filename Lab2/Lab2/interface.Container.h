
//#ifndef INTERFACE_CONTAINER_HPP

//#include "stdafx.h"
//#define INTERFACE_CONTAINER_HPP
#pragma once 
#include <iostream>
__interface Container {
public:
	int size() const; // ���������� ������ ����������
	bool isEmpty() const; // ��������� ������ �� ���������
	std::string toString() const; // ������ �� ����� ����������
};
//#endif