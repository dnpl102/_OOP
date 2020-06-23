#pragma once

class Gate
{
protected:
	int Loai;
public:
	Gate() {}
	void setLoai(int x) { this->Loai = x; }
	int getLoai() { return this->Loai; }
	virtual double getRequire() { return 0; }
	virtual void setRequire(double) {}
	virtual void nhap(){}
};

