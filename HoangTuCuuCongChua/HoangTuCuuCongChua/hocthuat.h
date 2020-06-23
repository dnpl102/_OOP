#pragma once
#include"Gate.h"
class hocthuat :public Gate
{
private:
	double Quest_intelligent_require = 0;
public:
	hocthuat(){}
	double getRequire();
	void setRequire(double);
	void nhap();
};
