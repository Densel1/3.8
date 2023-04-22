#include "equalSideRectangle.h"

bool equalSideRectangle::check()
{ 
    square::check();
    bool b = (sideA == sideB) && (sideB == sideC) && (sideC == sideD) && (angleA == angleB) && (angleB == angleC) && (angleC == angleD) && (angleD == 90); 
    if (b) return true;
    else throw ErrorHandler("��� ������� ������ ���� ����� ����� �����, ��� ���� ������ ��������� 90 ��������");
    return false; 
}
