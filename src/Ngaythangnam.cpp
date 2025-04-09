#include "Ngaythangnam.h"
#include <limits>
void Ngaythangnam::Nhap() {
    cout << "Nhap ngay, thang, nam: ";
    while (!(cin >> Ngay >> Thang >> Nam)){
        cin.clear();
        cin.ignore( numeric_limits<streamsize>::max(),'\n');
        cout <<"Gia tri khong hop le! Vui long chi nhap so: ";
    }

    if (Thang < 1 || Thang > 12 || Ngay < 1 || Ngay > NgayTrongThang(Thang, Nam)) {
        cout << "Gia tri khong hop le! Vui long nhap lai.\n";
        Nhap();
    }
}

void Ngaythangnam::Xuat() {
    cout << Ngay << "/" << Thang << "/" << Nam << endl;
}

void Ngaythangnam::NgayTiepTheo() {
    Ngay++;

    if (Ngay > NgayTrongThang(Thang, Nam)) {
        Ngay = 1;
        Thang++;
    }

    if (Thang > 12) {
        Thang = 1;
        Nam++;
    }

    cout << "Ngay tiep theo la: ";
    Xuat();
}

bool KiemTraNamNhuan(int Nam) {
    return (Nam % 4 == 0 && Nam % 100 != 0) || (Nam % 400 == 0);
}

int Ngaythangnam::NgayTrongThang(int Thang, int Nam) {
    switch (Thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: return 31;
        case 4: case 6: case 9: case 11: return 30;
        case 2: return KiemTraNamNhuan(Nam) ? 29 : 28;
        default: return 0;
    }
}
