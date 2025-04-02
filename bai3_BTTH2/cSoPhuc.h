#ifndef CSOPHUC_H
#define CSOPHUC_H
class cSoPhuc 
{ 
private: 
float iThuc,iAo; 
public: 
    void Nhap(); 
    void Xuat(); 
    void Tong(const cSoPhuc &other);
    void Hieu(const cSoPhuc &other);
    void Tich(const cSoPhuc &other);
    void Thuong(const cSoPhuc &other);
}; 
#endif