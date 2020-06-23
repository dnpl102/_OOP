#include "HoangTu.h"

#include<iostream>
using namespace std;

double HoangTu::getTien()
{
	return this->Tien;
}
double HoangTu::getTriTue()
{
	return this->TriTue;
}
double HoangTu::getSucManh()
{
	return this->SucManh;
}

void HoangTu::setTien(double x)
{
	this->Tien = x;
}
void HoangTu::setTriTue(double x)
{
	this->TriTue = x;
}
void HoangTu::setSucManh(double x)
{
	this->SucManh = x;
}

void HoangTu::nhap() {
	cout << "\n==================\n";
	cout << "\n Hoang Tu \n";
	cout << "Suc manh: "; cin >> SucManh;
	cout << "Tri tue: "; cin >> TriTue;
	cout << "Tien: ";    cin >> Tien;
}
