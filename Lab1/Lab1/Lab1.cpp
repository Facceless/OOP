// Lab1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include "rectangle.h"



int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	int menu = 1; rectangle r;
	double aNew = 0;
	double bNew = 0;
	double dia = 0, S = 0, P = 0;
	std::cout << "Введите а и в - стороны прямоугольников" << std::endl;
		for (int j = 0; j < 2; j++)
		{
			std::cout <<"  Сторона   " << j + 1 << std::endl;
			std::cin >> r.array[j];
		}
	std::cout << "Стороны данного прямоугольника=\t" << r.array[0] << " ," << r.array[1];
	do
	{
	     std::cout << " \n\t2 - чтоб изменять стороны \n\t 3 - для вычисления периметра и площади \n\t 4 - для вычисления диагонали \n\t 0 для выхода\n";
		 std::cin >> menu;
		 if (menu == 4) std::cout << "Диагональ равна"<<r.Dia();
		 else
		 {
			 if (menu == 2) 
			 {
				 std::cout << "Введите значение, на которое хотели бы изменить стороны (сначала знак, затем число(от 1 до 100))" << std::endl;
				 std::cout << "Cторону а:";
				 std::cin >> aNew;
				 std::cout << "\tCторону b:";
				 std::cin >> bNew;
				 r.Change(aNew,bNew);
				 std::cout << "\nсторона а=" << r.array[0] << "\tcторона b=" << r.array[1] << std::endl;
			 }
			 else if (menu == 3) 
			 {  P = r.P();
				std::cout << "\nP=" << P;
				S = r.Area();
				std::cout << "\tS=" << S;
			 }
		 }
	} while (menu != 0);
	 
	return 0;
}

