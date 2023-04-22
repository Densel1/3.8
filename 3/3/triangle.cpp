#include "triangle.h"



void triangle::print_info()
{
	std::cout << figureName << " (������� " << sideA << ", " << sideB << ", " << sideC
		<< "; ���� " << angleA << ", " << angleB << ", " << angleC << ") ������" << std::endl;
}

bool triangle::check()
{
	bool c = f;
	if ((sidesCount != 3))
	{
		throw ErrorHandler("���������� ������ �� ����� 3.");
	}

	if ((angleA + angleB + angleC) == 180)
	{
		c = t;
	}
	else throw ErrorHandler("����� ����� �� ����� 180.");

	return c;
}
