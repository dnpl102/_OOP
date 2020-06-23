#include "giaothuong.h"

#include<iostream>
using namespace std;

double giaothuong::getRequire() {
	return this->getDonGia()*this->getSoHang();
}

double giaothuong::getDonGia()
{
	return this->dongia;
}
double giaothuong::getSoHang() {
	return this->sohang;
}

void giaothuong::setDonGia(double x) {
	this->dongia = x;
}
void giaothuong::setSoHang(double x) {
	this->sohang = x;
}
void giaothuong::nhap() {
	cout << "\n==================\n";
	cout << "Don gia: ";
	cin >> dongia;
	cout << "So hang: ";
	cin >> sohang;
}