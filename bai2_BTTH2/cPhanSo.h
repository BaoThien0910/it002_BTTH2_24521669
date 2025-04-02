#ifndef CPHANSO_H
#define CPHANSO_H

class cPhanSo
{
    private:
    int iTu,iMau;
    public:
    void Nhap();
    void Xuat();
    void RutGon();
    int GCD();
    void Tong(const cPhanSo& other);
    void Hieu(const cPhanSo& other);
    void Tich(const cPhanSo& other);
    void Thuong(const cPhanSo& other);
    void SoSanh(cPhanSo& other);
};

#endif