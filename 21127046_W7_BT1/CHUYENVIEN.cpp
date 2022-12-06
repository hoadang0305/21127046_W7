#include "CHUYENVIEN.h"

CHUYENVIEN::CHUYENVIEN() :
	NHANSU() {
	this->duAnGiaoDuc = {};
	this->namKNLV = 0;
}
CHUYENVIEN::CHUYENVIEN(string ten, string namsinh, int id, vector<string> listduan, int namkn) :
	NHANSU(ten, namsinh, id) {
	this->duAnGiaoDuc = listduan;
	this->namKNLV = namkn;
}
CHUYENVIEN::CHUYENVIEN(const CHUYENVIEN& a) :
	NHANSU(a) {
	this->duAnGiaoDuc = a.duAnGiaoDuc;
	this->namKNLV = a.namKNLV;
}CHUYENVIEN::~CHUYENVIEN() {
	this->duAnGiaoDuc.clear();
	this->duAnGiaoDuc = {};
}
int CHUYENVIEN::tinhluong() {
	int count = 0;
	for (int i = 0; i < this->duAnGiaoDuc.size(); i++) {
		if (this->duAnGiaoDuc[i][0] == 'T' || this->duAnGiaoDuc[i][0] == 't') count++;
	}
	return NHANSU::tinhluong() + (this->namKNLV * 4 + count) * 18000;
}
void CHUYENVIEN::input() {
	NHANSU::input();
	int x;
	cout << "nhap so du an giao duc: ";
	cin >> x;
	if (x > 0) {
		rewind(stdin);
		for (int i = 0; i < x; i++) {
			cout << "ma du an " << i + 1 << ": ";
			string mada;
			getline(cin, mada);
			this->duAnGiaoDuc.push_back(mada);
		}
	}
	cout << "nhap so nam kinh nghiem lam viec: ";
	cin >> x;
	if (x > 0) this->namKNLV = x;
	else this->namKNLV = 0;
}
void CHUYENVIEN::output() {
	cout << "----THONG TIN CHUYEN VIEN----" << endl;
	NHANSU::output();
	cout << "danh sach du an giao duc: ";
	if (this->duAnGiaoDuc.size() > 0) {
		for (int i = 0; i < this->duAnGiaoDuc.size(); i++) {
			cout << this->duAnGiaoDuc[i] << "  ";
		}
		cout << endl;
	}
	else cout << "khong co" << endl;
	cout << "tien luong : " << this->tinhluong() << endl;
}