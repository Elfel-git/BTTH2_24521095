#include "LopPhanSo.h"

void LopPhanSo::Nhap() {
    cout << "Nhap tu va mau: ";
    while(!(cin >> iTu >> iMau)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout <<"Gia tri khong hop le! Vui long chi nhap so: ";
    }
    if (iMau == 0) {
        cout << "Mau so khong duoc bang 0! Mac dinh mau = 1.\n";
        iMau = 1;
    }
}

void LopPhanSo::Xuat() {
    if (iMau < 0) {
        iTu = -iTu;
        iMau = -iMau;
    }
    cout << iTu << "/" << iMau << endl;
}

void LopPhanSo::RutGon() {
    int ucln = gcd(iTu, iMau);
    iTu /= ucln;
    iMau /= ucln;

    if (iMau < 0) {
        iTu = -iTu;
        iMau = -iMau;
    }
}

int LopPhanSo::gcd(int a, int b) const {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

LopPhanSo LopPhanSo::Tong(const LopPhanSo &b) const {
    LopPhanSo temp;
    temp.iTu = iTu * b.iMau + iMau * b.iTu;
    temp.iMau = iMau * b.iMau;
    temp.RutGon();
    return temp;
}

LopPhanSo LopPhanSo::Hieu(const LopPhanSo &b) const {
    LopPhanSo temp;
    temp.iTu = iTu * b.iMau - iMau * b.iTu;
    temp.iMau = iMau * b.iMau;
    temp.RutGon();
    return temp;
}

LopPhanSo LopPhanSo::Tich(const LopPhanSo &b) const {
    LopPhanSo temp;
    temp.iTu = iTu * b.iTu;
    temp.iMau = iMau * b.iMau;
    temp.RutGon();
    return temp;
}

LopPhanSo LopPhanSo::Thuong(const LopPhanSo &b) const {
    LopPhanSo temp;
    temp.iTu = iTu * b.iMau;
    temp.iMau = iMau * b.iTu;

    if (temp.iMau == 0) {
        cout << "Loi: Mau so bang 0 trong phep chia!" << endl;
        temp.iTu = 0;
        temp.iMau = 1;
    }

    temp.RutGon();
    return temp;
}

int LopPhanSo::SoSanh(const LopPhanSo &b) const {
    int left = iTu * b.iMau;
    int right = b.iTu * iMau;

    if (left > right) return 1;
    else if (left < right) return -1;
    else return 0;
}

LopPhanSo::~LopPhanSo() {}
