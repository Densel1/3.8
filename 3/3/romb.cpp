#include "romb.h"

bool romb::check()
{ 
    square::check();
    bool b = (sideA == sideB) && (sideB == sideC) && (sideC == sideD) && (angleA == angleC) && (angleB == angleD); 
    if (b) return true;
    else throw ErrorHandler("��� ������� ������ ���� �����, ���� A,C � B,D ������� �����");
    return false;
}
