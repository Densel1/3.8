#include "EqualSideTriangle.h"


bool EqualSideTriangle::check()// override 
{
	triangle::check();
	bool b = (sideA == sideB) && (sideB == sideC) && (angleA == angleB) && (angleB == angleC)&&(angleC == 60);
	if (b)
	{
		return true;
	}
	else throw ErrorHandler("������� �� ����� ����� ����� �/��� ���� �� ����� 60 ��������.");
	return false;
}