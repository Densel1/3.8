#include "StrengthTriangle.h"

bool StrengthTriangle::check(){ 
       triangle::check();  
       if ((angleC == 90))
       {
           return true;
       }
       else throw ErrorHandler("���� �� ����� 90 ��������"); 
       return false; 
} 
