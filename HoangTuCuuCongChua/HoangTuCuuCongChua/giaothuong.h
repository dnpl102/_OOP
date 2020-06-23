#pragma once
#include"Gate.h"

class giaothuong:public Gate
{
	private:
		double dongia, sohang;
	public:
		giaothuong(){}
		double getDonGia();
		double getSoHang();

		void setDonGia(double);
		void setSoHang(double);

		double getRequire();
		void nhap();
};	

