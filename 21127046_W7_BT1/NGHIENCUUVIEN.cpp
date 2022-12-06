#include "NGHIENCUUVIEN.h"

NGHIENCUUVIEN::NGHIENCUUVIEN() :
	NHANSU() {
	this->duAnNghienCuu = {};
	this->namKN = 0;
}
NGHIENCUUVIEN::NGHIENCUUVIEN(string ten, string ngaysinh, int id, vector<string> listduan, int nam) :
	NHANSU(ten, ngaysinh, id) {
	this->duAnNghienCuu = listduan;
	this->namKN = nam;
}
NGHIENCUUVIEN::NGHIENCUUVIEN(const NGHIENCUUVIEN& a) :
	NHANSU(a) {
	this->duAnNghienCuu = a.duAnNghienCuu;
	this->namKN = a.namKN;
}
NGHIENCUUVIEN::~NGHIENCUUVIEN() {
	this->duAnNghienCuu.clear();
	this->duAnNghienCuu = {};
}
int NGHIENCUUVIEN::tinhluong() {
	int count = 0;
	for (int i = 0; i < this->duAnNghienCuu.size(); i++) {
		if (this->duAnNghienCuu[i][0] == 'D' || this->duAnNghienCuu[i][0] == 'd') count++;
	}
	return NHANSU::tinhluong() + (this->namKN * 2 + count) * 20000;
}
void NGHIENCUUVIEN::input() {
	NHANSU::input();
	int x;
	cout << "nhap so du an nghien cuu: ";
	cin >> x;
	if (x > 0) {
		rewind(stdin);
		for (int i = 0; i < x; i++) {
			cout << "ma du an " << i + 1 << ": ";
			string mada;
			getline(cin, mada);
			this->duAnNghienCuu.push_back(mada);
		}
	}
	cout << "nhap so nam kinh nghiem lam viec: ";
	cin >> x;
	if (x > 0) this->namKN = x;
	else this->namKN = 0;
}
void NGHIENCUUVIEN::output() {
	cout << "----THONG TIN NGHIEN CUU VIEN----" << endl;
	NHANSU::output();
	cout << "danh sach du an nghien cuu: ";
	if (this->duAnNghienCuu.size() > 0) {
		for (int i = 0; i < this->duAnNghienCuu.size(); i++) {
			cout << this->duAnNghienCuu[i] << "  ";
		}
		cout << endl;
	}
	else cout << "khong co" << endl;
	cout << "tien luong : " << this->tinhluong() << endl;
}