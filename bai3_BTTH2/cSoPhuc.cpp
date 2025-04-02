#include "cSoPhuc.h"
#include <iostream>
using namespace std;

void cSoPhuc :: Nhap() 
    { 
        cin>>iThuc>>iAo; 
    } 
void cSoPhuc :: Xuat() 
    { 
        if(iThuc == 0 && iAo == 0)
            cout<<0;
        if(iThuc != 0)
            cout<<iThuc;
        if(iAo != 0){
            if(iAo > 0 && iThuc != 0)
                cout<<"+";
            if(iAo == 1)
                cout<<"i";
            else if(iAo == -1)
                cout<<"-i";
            else if(iAo != 0)
                cout<<iAo<<"i";
        }
        cout<<endl; 
    } 
 
void cSoPhuc::Tong(const cSoPhuc& other) 
    {
        cSoPhuc res;
        res.iThuc = iThuc + other.iThuc;
        res.iAo = iAo + other.iAo;
        res.Xuat();
    }

    void cSoPhuc::Hieu(const cSoPhuc& other) 
    {
        cSoPhuc res;
        res.iThuc = iThuc - other.iThuc;
        res.iAo = iAo - other.iAo;
        res.Xuat();
    }

    void cSoPhuc::Tich(const cSoPhuc& other) 
    {
        cSoPhuc res;
        res.iThuc = iThuc * other.iThuc - iAo * other.iAo;
        res.iAo = iThuc * other.iAo + iAo * other.iThuc;
        res.Xuat();
    }

    void cSoPhuc::Thuong(const cSoPhuc& other) 
    {
        cSoPhuc res;
        if (other.iThuc == 0 && other.iAo == 0) {
            std::cout << "Khong the thuc hien phep chia!" <<endl;
            return;
        }
        float MauSo = (other.iThuc * other.iThuc) + (other.iAo * other.iAo);
        res.iThuc = (iThuc * other.iThuc + iAo * other.iAo) / MauSo;
        res.iAo = (other.iThuc * iAo - iThuc * other.iAo) / MauSo;
        res.Xuat();
    }