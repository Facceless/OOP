
//#ifndef INTERFACE_CONTAINER_HPP

//#include "stdafx.h"
//#define INTERFACE_CONTAINER_HPP
#pragma once 
#include <iostream>
__interface Container {
public:
	int size() const; // возвращает размер контейнера
	bool isEmpty() const; // проверяет пустой ли контейнер
	std::string toString() const; // строка со всеми элементами
};
//#endif