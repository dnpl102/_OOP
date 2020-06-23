#include<iostream>

using namespace std;

#include"HoangTu.h"
#include"dungsi.h"
#include"giaothuong.h"
#include"hocthuat.h"



void nhap(Gate * List [], int &n) {
	int i = 0;
	while (1)
	{
		int s;
		cout << "Chon loai cong (0:Giao Thuong, 1: Hoc thuat, 2: Dung si):";
		cin >> s;

			switch (s)
			{
				case 0:
					List[i] = new giaothuong();
					List[i]->setLoai(0);
					List[i]->nhap();
					break;
				case 1:
					List[i] = new hocthuat();
					List[i]->setLoai(1);
					List[i]->nhap();
					break;
				case 2:
					List[i] = new dungsi();
					List[i]->setLoai(2);
					List[i]->nhap();
					break;
			}
			i++;
			cout << "Continue ?";
			cin >> s;	
			if (!s) { break; }
		}		
	n = i;
}

bool  CanSolve(Gate * List[], HoangTu &xxx, int n) {
	for (int i = 0; i < n; i++)
	{

		switch (List[i]->getLoai())
		{
			case 0:
				xxx.setTien(xxx.getTien() - List[i]->getRequire());
				if (xxx.getTien() < 0) return false;
				break;
			case 1:
				if (xxx.getTriTue() < List[i]->getRequire()) return false;
				break;
			case 2:
				xxx.setSucManh(xxx.getSucManh() - List[i]->getRequire());
				if (xxx.getSucManh() < 0) return false;
				break;
		}
	}

	return true;
}

int main() {
	Gate* List[1000];
	int n;
	HoangTu XXX;

	nhap(List, n);
	XXX.nhap();
	if (CanSolve(List, XXX, n))
	{
		cout << "\nHoang tu co the cuu cong chua :";
		cout << "\nSo tien con lai: " << XXX.getTien()
			<< "\nSuc manh con lai: " << XXX.getSucManh()
			<< "\nDiem tri tue: " << XXX.getTriTue();
	}
	else cout << "Hoang tu yeu sinh ly";
}