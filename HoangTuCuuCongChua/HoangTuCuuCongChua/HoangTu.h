#pragma once
class HoangTu
{
private:
	double Tien,TriTue,SucManh;
public:
	HoangTu() {}

	double getTien();
	double getTriTue();
	double getSucManh();

	void setTien(double);
	void setTriTue(double);
	void setSucManh(double);

	void nhap();
};

