#include "cPhanSo.h"
#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;


void cPhanSo :: Nhap()
{
    cin>>iTu>>iMau;
    while(iMau == 0){
        cout<<"Phan so khong hop le, nhap lai : ";
        cin>>iTu>>iMau;
    }
}
int cPhanSo::GCD()
{
    int x = abs(iTu), y = abs(iMau);
    while((x*y)){
        if(x>y)
            x%=y;
        else 
            y%=x;
    }
    return x+y;
}

void cPhanSo :: RutGon()
{
    int GCD = gcd(iTu,iMau);
    iTu/=GCD;
    iMau/=GCD;
}

void cPhanSo::Xuat()
{
    if(iMau == 1 || iTu == 0) 
        cout<<iTu<<endl;
    else if(iMau <-1)
        cout<<-iTu<<"/"<<-iMau<<endl;
    else if(iMau == -1)
        cout<<-iTu<<endl;
    else 
        cout<<iTu<<"/"<<iMau<<endl;
}

void cPhanSo::Tong(const cPhanSo &other) 
{
    cPhanSo Tong;
    Tong.iTu = this->iTu*other.iMau + this->iMau*other.iTu;
    Tong.iMau = this->iMau * other.iMau;
    Tong.RutGon();
    Tong.Xuat();
}  

void cPhanSo::Hieu(const cPhanSo &other) 
{
    cPhanSo Hieu;
    Hieu.iTu = this->iTu*other.iMau - this->iMau*other.iTu;
    Hieu.iMau = this->iMau * other.iMau;
    Hieu.RutGon();
    Hieu.Xuat();
}  

void cPhanSo::Tich(const cPhanSo &other) 
{
    cPhanSo Tich;
    Tich.iTu = this->iTu*other.iTu;
    Tich.iMau = this->iMau * other.iMau;
    Tich.RutGon(); 
    Tich.Xuat();
}  

void cPhanSo::Thuong(const cPhanSo &other) 
{
    if(other.iTu == 0) {
        cout<<"Khong the thuc hien"<<endl;
        return;
    }
    cPhanSo Thuong;
    Thuong.iTu = this->iTu*other.iMau;
    Thuong.iMau = this->iMau * other.iTu;
    Thuong.RutGon();
    Thuong.Xuat();
}  

void cPhanSo :: SoSanh (cPhanSo &other)
{
    if(iMau < 0){
        iTu = -iTu;
        iMau = -iMau;
    }
    if(other.iMau < 0){
        other.iTu = -other.iTu;
        other.iMau = -other.iMau;
    }
    int tmp = this->iTu*other.iMau - this->iMau*other.iTu;
    if(tmp == 0)
        cout<<"A = B"<<endl;
    else if(tmp > 0)
        cout<<"A > B"<<endl;
    else 
        cout<<"A < B"<<endl;
}