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
	std::cout << "������� � � � - ������ ��������������" << std::endl;
	std::cin >> r.a;
	std::cin >> r.b;
	do
	{
	     std::cout << " \n\t2 - ���� �������� ������� \n\t 3 - ��� ���������� ��������� � ������� \n\t 4 - ��� ���������� ��������� \n\t 0 ��� ������\n";
		 std::cin >> menu;
		 if (menu == 4) std::cout << "��������� �����"<<(sqrt(r.Dia()));
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
				 std::cout << "\n������� �=" << r.a << "\tc������ b=" << r.b<<std::endl;
			 }
			 else if (menu == 3) 
			 {   P = r.P();
			 std::cout << "\nP=" << P;
			 S = r.Area();
			 std::cout << "\tS=" << S;
			 }
		 }
	} while (menu != 0);
	 
	return 0;
}

