#include "cPhanSo.h"
#include <iostream>
using namespace std;

int main()
{
    cPhanSo A,B;
    cout<<"Nhap Phan So A : ";
    A.Nhap(); 
    A.RutGon();
    cout<<"Nhap Phan So B : ";
    B.Nhap(); 
    B.RutGon();
    cout<<"Phan So A : ";
    A.Xuat();
    cout<<"Phan So B : ";
    B.Xuat();
    cout<<"So sanh : ";
    A.SoSanh(B);
    cout<<"Tong A+B = ";
    A.Tong(B);
    cout<<"Hieu A-B = ";
    A.Hieu(B);
    cout<<"Tich A*B = ";
    A.Tich(B);
    cout<<"Thuong A/B = ";
    A.Thuong(B); 
    system("pause");


}