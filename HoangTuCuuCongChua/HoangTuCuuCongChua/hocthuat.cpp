#include<iostream>
using namespace std;
#include "hocthuat.h"

double hocthuat::getRequire() {
	return this->Quest_intelligent_require;
}
void hocthuat::setRequire(double x) {
	this->Quest_intelligent_require = x;
}

void hocthuat::nhap() {
	cout << "\n==================\n";
	cout << "Yeu cau diem tri tue: ";
	cin >> Quest_intelligent_require;
}
