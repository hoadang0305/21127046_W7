#include "NHANSU.h"

NHANSU::NHANSU() {
	this->hoten = "";
	this->sinhnhat = "0/0/0000";
	this->ID = 0;
}
NHANSU::NHANSU(string ten, string sinhnhat, int id) {
	this->hoten = ten;
	this->sinhnhat = sinhnhat;
	this->ID = id;
}
NHANSU::NHANSU(const NHANSU& a) {
	this->hoten = a.hoten;
	this->sinhnhat = a.sinhnhat;
	this->ID = a.ID;
}
NHANSU::~NHANSU() {};

void NHANSU::input() {
	rewind(stdin);
	cout << "nhap ho va ten: ";
	getline(cin, this->hoten);
	cout << "nhap ngay sinh nhat(ddmmyyyy): ";
	rewind(stdin);
	getline(cin, this->sinhnhat);
	cout << "nhap id: ";
	cin >> this->ID;
}
void NHANSU::output() {
	cout << "Ho va ten: " << this->hoten << endl;
	if (this->sinhnhat.size() == 8) cout << "ngay sinh: " << this->sinhnhat[0] << this->sinhnhat[1] << "/" << sinhnhat[2] << this->sinhnhat[3] << "/" << sinhnhat[4] << this->sinhnhat[5] << this->sinhnhat[6] << this->sinhnhat[7] << endl;
	else cout << "ngay sinh: " << this->sinhnhat << endl;
	cout << "ma so nhan vien: " << this->ID << endl;
}
double NHANSU::tinhluong() {
	return 0;
}