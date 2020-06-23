#include "dungsi.h"

#include<iostream>
using namespace std;

double dungsi::getRequire() {
	return this->SM_require;
}
void dungsi::setRequire(double x) {
	this->SM_require = x;
}

void dungsi::nhap() {
	cout << "\n==================\n";
	cout << "Suc manh dung si: ";
	cin >> SM_require;
}