#include "cGioPhutGiay.h"
#include <iostream>

using namespace std;

void cGioPhutGiay::Nhap()
{
    cout<<"Nhap gio : "; cin>>iGio;
    cout<<"Nhap phut : "; cin>>iPhut;
    cout<<"Nhap giay : "; cin>>iGiay;
    while(1){
        if(iGio <= 23 && iGio >=0 && iPhut >=0 && iPhut <= 59 && iGiay >= 0 && iGiay <=59)
            break;
            else {
                cout<<"Thoi gian nhap vao khong hop le, hay nhap lai : "<<endl;
                cout<<"Nhap gio : "; cin>>iGio;
                cout<<"Nhap phut : "; cin>>iPhut;
                cout<<"Nhap giay : "; cin>>iGiay;
            }
        }
}

void cGioPhutGiay:: Xuat()
{
    if(iGio < 10) 
        cout<<"0"<<iGio;
    else 
        cout<<iGio;
    cout<<":";
    if(iPhut < 10)
        cout<<"0"<<iPhut;
    else 
        cout<<iPhut;
    cout<<":";
    if(iGiay < 10)
        cout<<"0"<<iGiay;
    else 
        cout<<iGiay;
    cout<<endl;
}

void cGioPhutGiay::TinhCongThemMothGiay()
{
    iGiay++;
    if(iGiay == 60){
        iGiay = 0;
        iPhut++;
        if(iPhut == 60){
            iPhut = 0;
            iGio++;
            if(iGio == 24)
                iGio = 0;
        }
    }
    Xuat();
}