#ifndef LOPPHANSO_H
#define LOPPHANSO_H

#include <iostream>
#include <limits>
using namespace std;

class LopPhanSo {
private:
    int iTu;
    int iMau;

    int gcd(int a, int b) const;

public:
    void Nhap();
    void Xuat();
    void RutGon();

    LopPhanSo Tong(const LopPhanSo &b) const;
    LopPhanSo Hieu(const LopPhanSo &b) const;
    LopPhanSo Tich(const LopPhanSo &b) const;
    LopPhanSo Thuong(const LopPhanSo &b) const;

    int SoSanh(const LopPhanSo &b) const;

    ~LopPhanSo();
};

#endif
