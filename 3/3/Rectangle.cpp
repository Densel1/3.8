#include "rectangle.h"

bool rectangle::check()
{ 
    square::check();
    bool b = (sideA == sideC) && (sideB == sideD) && (angleA == angleB) && (angleB == angleC) && (angleC == angleD) && (angleD == 90); 
    if (b)
    {
        return true;
    }
    else throw ErrorHandler("������� a,c � b,d ������ ���� ������� �����, ��� ���� ����� 90");
    return false;
}

