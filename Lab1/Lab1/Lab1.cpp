// Lab1.cpp: ���������� ����� ����� ��� ����������� ����������.
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
	std::cout << "������� � � � - ������� ���������������" << std::endl;
		for (int j = 0; j < 2; j++)
		{
			std::cout <<"  �������   " << j + 1 << std::endl;
			std::cin >> r.array[j];
		}
	std::cout << "������� ������� ��������������=\t" << r.array[0] << " ," << r.array[1];
	do
	{
	     std::cout << " \n\t2 - ���� �������� ������� \n\t 3 - ��� ���������� ��������� � ������� \n\t 4 - ��� ���������� ��������� \n\t 0 ��� ������\n";
		 std::cin >> menu;
		 if (menu == 4) std::cout << "��������� �����"<<r.Dia();
		 else
		 {
			 if (menu == 2) 
			 {
				 std::cout << "������� ��������, �� ������� ������ �� �������� ������� (������� ����, ����� �����(�� 1 �� 100))" << std::endl;
				 std::cout << "C������ �:";
				 std::cin >> aNew;
				 std::cout << "\tC������ b:";
				 std::cin >> bNew;
				 r.Change(aNew,bNew);
				 std::cout << "\n������� �=" << r.array[0] << "\tc������ b=" << r.array[1] << std::endl;
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

