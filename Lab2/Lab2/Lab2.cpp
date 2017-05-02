// Lab2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
<<<<<<< HEAD
#include "Stack.h"
#include "Queue.h"
#include "LinkedList.h"
#include "StaticArray.h"
=======
>>>>>>> 4432440846b423d1a57a0685b81750b2b0a82e16


using namespace std;



int _tmain(int argc, _TCHAR* argv[])
{
<<<<<<< HEAD
	setlocale(LC_ALL, "ru");
	LinkedList * list = new LinkedList(120);
	cout << list->is_empty() << endl;

	cout << list->to_string() << endl;
	for (int i = 0; i < 10; i++)
	{
		list->push(i);
		cout << list->to_string() << endl;
	}
	list->push(44);
	cout << list->is_empty() << endl;
	cout << list->to_string() << endl << list->get_size() << endl;
	list->pop();
	cout << list->to_string() << endl;
	for (int i = 0; i < 10; i++)
		list->set(i, 10 - i);
	cout << list->to_string() << endl;
	for (int i = 0; i < 10; i++)
		cout << list->get(i) << " ";
	delete list;
	system("pause");
=======
>>>>>>> 4432440846b423d1a57a0685b81750b2b0a82e16
	return 0;
}

