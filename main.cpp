#include "LopPhanSo.h"

int main() {
    LopPhanSo a, b, ketqua;

    cout << "Nhap phan so thu nhat:\n";
    a.Nhap();

    cout << "Nhap phan so thu hai:\n";
    b.Nhap();

    cout << "\nPhan so thu nhat: ";
    a.Xuat();

    cout << "Phan so thu hai: ";
    b.Xuat();

    ketqua = a.Tong(b);
    cout << "Tong: ";
    ketqua.Xuat();

    ketqua = a.Hieu(b);
    cout << "Hieu: ";
    ketqua.Xuat();

    ketqua = a.Tich(b);
    cout << "Tich: ";
    ketqua.Xuat();

    ketqua = a.Thuong(b);
    cout << "Thuong: ";
    ketqua.Xuat();

    int ss = a.SoSanh(b);
    cout << "So sanh: ";
    if (ss == 0) cout << "Hai phan so bang nhau.\n";
    else if (ss > 0) cout << "Phan so thu nhat lon hon.\n";
    else cout << "Phan so thu hai lon hon.\n";

    return 0;
}
