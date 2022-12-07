#include "THUCTAPSINH.h"

THUCTAPSINH::THUCTAPSINH() {
	NHANSU();
	this->thoiGianTT = 0;
	this->maDA = {};
}
THUCTAPSINH::THUCTAPSINH(const THUCTAPSINH& a) :
	NHANSU(a) {
	this->thoiGianTT = a.thoiGianTT;
	this->maDA = a.maDA;
}
THUCTAPSINH::~THUCTAPSINH() {
	this->maDA.clear();
	this->maDA = {};
}
double THUCTAPSINH::tinhluong() {
	int count = 0;
	for (int i = 0; i < this->maDA.size(); i++) {
		if (this->maDA[i][0] == 'R' || this->maDA[i][0] == 'r') {
			count++;
		}
	}
	return this->thoiGianTT * 0.1 * count * 10000;
}
void THUCTAPSINH::input() {
	NHANSU::input();
	int x;
	cout << "nhap so du an du bi: ";
	cin >> x;
	if (x > 0) {
		rewind(stdin);
		for (int i = 0; i < x; i++) {
			cout << "ma du an " << i + 1 << ": ";
			string mada;
			getline(cin, mada);
			this->maDA.push_back(mada);
		}
	}
	cout << "nhap so thang thuc tap: ";
	cin >> x;
	if (x > 0) this->thoiGianTT = x;
	else this->thoiGianTT = 0;
}
void THUCTAPSINH::output() {
	cout << "----THONG TIN THUC TAP SINH----" << endl;
	NHANSU::output();
	cout << "danh sach du an du bi: ";
	if (this->maDA.size() > 0) {
		for (int i = 0; i < this->maDA.size(); i++) {
			cout << this->maDA[i] << "  ";
		}
		cout << endl;
	}
	else cout << "khong co" << endl;
	cout << "tien luong : " << this->tinhluong() << endl;
}