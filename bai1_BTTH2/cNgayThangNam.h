#ifndef CNGAYTHANGNAM_H
#define CNGAYTHANGNAM_H
class cNgayThangNam
{
private:
    int iNgay,iThang,iNam;
public:
   bool isNamNhuan();
   bool kiemTra();
   void Nhap();
   void Xuat();
   void NgayThangNamTiepTheo();
};

#endif