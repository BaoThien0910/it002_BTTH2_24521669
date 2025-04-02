#include <iostream>
#include "cNgayThangNam.h"
using namespace std;

bool cNgayThangNam::isNamNhuan()
{
    if(iNam % 100 == 0){
        if(iNam % 400 == 0) return true;
    }
    else if(iNam % 4 == 0) return true;
    return false;
}
bool cNgayThangNam::kiemTra()
{
    if(iNam < 0 || iThang > 12 || iThang < 1) return false;
    else {
        switch(iThang)
        {
            case 2: if(isNamNhuan() && iNgay>29) return false;
                    else if(!isNamNhuan() && iNgay >28) return false;
                    else return true;
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                    if(iNgay > 31) return false;
                    else return true;
            default:
                    if(iNgay>30) return false;
                    else return true;
        }
    }
}
void cNgayThangNam::Nhap()
{
    cout<<"Nhap ngay thang nam : ";
    cin>>iNgay>>iThang>>iNam;
    while(!kiemTra()){
        cout<<"Ngay thang nam khong hop le, nhap lai : ";
        cin>>iNgay>>iThang>>iNam;
    }
}
void cNgayThangNam::Xuat()
{
    if(iNgay<10) cout<<"0"<<iNgay<<"/";
    else cout<<iNgay<<"/";
    if(iThang<10) cout<<"0"<<iThang<<"/";
    else cout<<iThang<<"/";
    cout<<iNam<<endl;
}
void cNgayThangNam::NgayThangNamTiepTheo()
{
    iNgay++;
    switch(iThang)
    {
        case 2: if(isNamNhuan() && iNgay>29) {iThang++; iNgay = 1;}
                else if(iNgay >28) {iThang++; iNgay = 1;}
                break;
         case 1: case 3: case 5: case 7: case 8: case 10: 
            if(iNgay > 31) {iThang++; iNgay = 1;}
            break;
        case 12: if(iNgay>31) {iThang = 1; iNgay = 1; iNam++;}
    default:
        if(iNgay>30) {iThang++; iNgay = 1;}
    }
    cout<<"Ngay tiep theo la : ";
    Xuat();
}