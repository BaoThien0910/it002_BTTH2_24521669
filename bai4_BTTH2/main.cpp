#include "cGioPhutGiay.h"
#include <iostream>

using namespace std;

int main()
{
    cGioPhutGiay A;
    A.Nhap();
    cout<<"Thoi gian vua nhap la : ";
    A.Xuat();
    cout<<"Thoi gian sau khi them mot giay : ";
    A.TinhCongThemMothGiay();
    system("pause");
    return 0;
}