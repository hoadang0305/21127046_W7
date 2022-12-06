#include "TROGIANG.h"

TROGIANG::TROGIANG() :
	NHANSU() {
	this->soMonTroGiang = 0;
}
TROGIANG::TROGIANG(string ten, string sn, int id, int somon) :
	NHANSU(ten, sn, id) {
	this->soMonTroGiang = somon;
}
TROGIANG::TROGIANG(const TROGIANG& a) :
	NHANSU(a) {
	this->soMonTroGiang = a.soMonTroGiang;
}
TROGIANG::~TROGIANG() {};
int TROGIANG::tinhluong() {
	return this->soMonTroGiang * 0.3 * 18000;
}
void TROGIANG::input() {
	NHANSU::input();
	int x;
	cout << "nhap so mon tro giang: ";
	cin >> x;
	if (x > 0) this->soMonTroGiang = x;
	else this->soMonTroGiang = 0;
}
void TROGIANG::output() {
	cout << "----THONG TIN TRO GIANG----" << endl;
	NHANSU::output();
	cout << "so mon tro giang: " << this->soMonTroGiang << endl;
	cout << "tien luong: " << this->tinhluong() << endl;
}