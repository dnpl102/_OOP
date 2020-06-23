#pragma once

#include"Gate.h"

class dungsi:public Gate
{
private:
	double SM_require = 0;
public:
	dungsi() {}
	double getRequire();
	void setRequire(double);
	void nhap();
};

