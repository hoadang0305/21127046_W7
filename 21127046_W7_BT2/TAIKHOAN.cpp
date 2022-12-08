#include "TAIKHOAN.h"

TAIKHOAN::TAIKHOAN() {
	tenDangNhap = "unknown";
	matkhau = "########";
	phibanquyen = 0;
	listNhacYeuthich = {};
}
TAIKHOAN::TAIKHOAN(const TAIKHOAN& a) {
	this->tenDangNhap = a.tenDangNhap;
	this->matkhau = a.matkhau;
	this->phibanquyen = a.phibanquyen;
	this->listNhacYeuthich = a.listNhacYeuthich;
}
TAIKHOAN::~TAIKHOAN() {
	this->listNhacYeuthich.clear();
	this->listNhacYeuthich = {};
}
bool TAIKHOAN::checkMatKhau(string mk) {
	if (mk.length() < 8) return false;
	else {
		for (int i = 0; i < mk.length(); i++) {
			if (mk[i] == ' ') return false;
		}
		return true;
	}
}
void TAIKHOAN::taoTaiKhoan() {
	cout << "khoi tao tai khoan..." << endl;
	cout << "nhap ten tk: ";
	rewind(stdin);
	getline(cin, this->tenDangNhap);
	cout << "nhap mat khau: ";
	string mktemp = "";
	do {
		getline(cin, mktemp);
		if (checkMatKhau(mktemp) == false) cout << "mat khau khong hop le, hay nhap lai: ";
	} while (checkMatKhau(mktemp) == false);
	this->matkhau = mktemp;
}
void TAIKHOAN::xuatThongTinTaiKhoan() {
	cout << "-----thong tin tai khoan-----" << endl;
	cout << "ten tai khoan: " << this->tenDangNhap << endl;
	cout << "mat khau: " << this->matkhau << endl;
	cout << "phi ban quyen: " << this->phibanquyen << endl;
	cout << "danh sach bai hat yeu thich: ";
	if (this->listNhacYeuthich.size() == 0) cout << "khong co du lieu";
	else {
		cout << endl;
		for (int i = 0; i < listNhacYeuthich.size(); i++) {
			cout << "-----(" << i + 1 << ")-----" << endl;
			listNhacYeuthich[i]->outputBaiHat();
		}
	}
}
void TAIKHOAN::addPhiBanQuyen(float tienphi) {
	this->phibanquyen += tienphi;
}
void TAIKHOAN::addBaiHatYeuThich( BAIHAT* a) {
	this->listNhacYeuthich.push_back(a);
}
bool TAIKHOAN::isVip() {
	return false;
}