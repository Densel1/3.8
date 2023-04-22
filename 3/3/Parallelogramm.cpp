#include "parallelogramm.h"

bool parallelogramm::check()// override 
{
	square::check();
	bool b = (sideA  == sideC) && (sideB  == sideD) && (angleA  == angleC) && (angleB  == angleD);
	if (b) return true;
	else throw ErrorHandler("������� a,c � b,d ������ ���� ������� �����, ���� A,C � B,D ������� �����");
	return false;
}