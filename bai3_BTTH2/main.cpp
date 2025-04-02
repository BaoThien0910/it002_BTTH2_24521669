#include "cSoPhuc.h"
#include <iostream>
using namespace std; 

int main() 
{ 

cSoPhuc A,B; 
cout<<"Nhap so phuc A : ";
A.Nhap(); 
cout<<"Nhap so phuc B : ";
B.Nhap(); 
cout<<"So phuc A : ";
A.Xuat(); 
cout<<"So phuc B : ";
B.Xuat();
cout<<"Tong A + B : ";
A.Tong(B);
cout<<"Hieu A - B : ";
A.Hieu(B);
cout<<"Tich A * B : ";
A.Tich(B);
cout<<"Thuong A / B : ";
A.Thuong(B); 
system("pause");
return 0;
}