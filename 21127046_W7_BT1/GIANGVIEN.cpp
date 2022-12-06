#include "GIANGVIEN.h"
GIANGVIEN::GIANGVIEN() :
	NHANSU() {
	this->hocHam = "";
	this->hocVi = "";
	this->namGiangDay = 0;
	this->monGiangDay = {};
}
GIANGVIEN::GIANGVIEN(string ten, string ngaysinh, int id, string hocham, string hocvi, int namday, vector<string> listmon) :
	NHANSU(ten, ngaysinh, id) {
	this->hocHam = hocham;
	this->hocVi = hocvi;
	this->namGiangDay = namday;
	this->monGiangDay = listmon;
}
GIANGVIEN::GIANGVIEN(const GIANGVIEN& a) :
	NHANSU(a) {
	this->hocHam = a.hocHam;
	this->hocVi = a.hocVi;
	this->namGiangDay = a.namGiangDay;
	this->monGiangDay = a.monGiangDay;
}
GIANGVIEN::~GIANGVIEN() {
	monGiangDay.clear();
	monGiangDay = {};
}
double GIANGVIEN::tinhluong() {
	return NHANSU::tinhluong() + (double)this->monGiangDay.size() * namGiangDay * 0.12 * 20000;
}
void GIANGVIEN::input() {
	NHANSU::input();
	string chucdanh;
	int x;
	cout << "nhap hoc ham hoac hoc vi: " << endl;
	cout << "0 - khong co" << endl;
	cout << "1 - hoc ham" << endl;
	cout << "2 - hoc vi" << endl;
	cout << "3 - ca 2" << endl;
	cin >> x;
	switch (x)
	{
	case 1:
		this->hocVi = "";
		cout << "nhap hoc ham(pho giao su - giao su): ";
		rewind(stdin);
		getline(cin, chucdanh);
		if (chucdanh != "pho giao su" && chucdanh != "giao su") {
			this->hocHam = "";
		}
		else this->hocHam = chucdanh;
		break;
	case 2:
		this->hocHam = "";
		cout << "nhap hoc vi(cu nhan - thac si - tien si): ";
		rewind(stdin);
		getline(cin, chucdanh);
		if (chucdanh != "cu nhan" && chucdanh != "thac si" && chucdanh != "tien si") {
			this->hocVi = "";
		}
		else this->hocVi = chucdanh;
		break;
	case 3:
		cout << "nhap hoc ham(pho giao su - giao su): ";
		rewind(stdin);
		getline(cin, chucdanh);
		if (chucdanh != "pho giao su" && chucdanh != "giao su") {
			this->hocHam = "";
		}
		else this->hocHam = chucdanh;
		cout << "nhap hoc vi(cu nhan - thac si - tien si): ";
		getline(cin, chucdanh);
		if (chucdanh != "cu nhan" && chucdanh != "thac si" && chucdanh != "tien si") {
			this->hocVi = "";
		}
		else this->hocVi = chucdanh;
		break;
	case 0:
		this->hocHam = "";
		this->hocVi = "";
		break;
	}
	cout << "nhap so nam giang day: ";
	cin >> x;
	if (x > 0) {
		this->namGiangDay = x;
	}
	else this->namGiangDay = 0;
	cout << "nhap so luong mon giang day: ";
	cin >> x;
	if (x > 0) {
		rewind(stdin);
		for (int i = 0; i < x; i++) {
			cout << "nhap ten mon giang day: ";
			string tenmon;
			getline(cin, tenmon);
			this->monGiangDay.push_back(tenmon);
		}
	}
}
void GIANGVIEN::output() {
	cout << "----THONG TIN GIANG VIEN----" << endl;
	NHANSU::output();
	if (this->hocHam == "" && this->hocVi != "") {
		cout << "hoc vi: " << this->hocVi << endl;
	}
	if (this->hocVi == "" && this->hocHam != "") {
		cout << "hoc ham: " << this->hocHam << endl;
	}
	if (this->hocVi != "" && this->hocHam != "") {
		cout << "hoc vi: " << this->hocVi << endl;
		cout << "hoc ham: " << this->hocHam << endl;
	}
	cout << "so nam giang day: " << this->namGiangDay << endl;
	cout << "danh sach cac mon giang day: " << endl;
	if (this->monGiangDay.size() > 0) {
		for (int i = 0; i < this->monGiangDay.size(); i++) {
			cout << this->monGiangDay[i] << " ";
		}
		cout << endl;
	}
	else cout << "khong co!" << endl;
	cout << "tien luong : " << this->tinhluong() << endl;
}
