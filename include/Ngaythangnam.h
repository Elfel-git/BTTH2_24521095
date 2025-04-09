#ifndef NGAYTHANGNAM_H
#define NGAYTHANGNAM_H
#pragma once
#include <iostream>
using namespace std;

class Ngaythangnam
{
    public:
        Ngaythangnam(): Ngay(0), Thang(0), Nam(0){}
        void Nhap();
        void Xuat();
        void NgayTiepTheo();
    protected:

    private:
        int Ngay, Thang, Nam;
        int NgayTrongThang(int Thang, int Nam);

};

#endif // NGAYTHANGNAM_H
