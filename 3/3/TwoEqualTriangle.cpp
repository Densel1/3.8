#include "TwoEqualTriangle.h"


bool TwoEqualTriangle::check()
{
	triangle::check();
	bool b = (sideA == sideC) && (angleA == angleC);
	if (b)
	{
		return true;
	}
	else throw ErrorHandler("������� � � � ������ ���� ����� �/��� ���� � � � ������ ���� �����.");
	return false;
}
