#include "TAIKHOANVIP.h"

TAIKHOANVIP::TAIKHOANVIP() :
	TAIKHOAN() {

}
TAIKHOANVIP::TAIKHOANVIP(const TAIKHOANVIP& a) {
	this->tenDangNhap = a.tenDangNhap;
	this->matkhau = a.matkhau;
	this->phibanquyen = a.phibanquyen;
	this->listNhacYeuthich = a.listNhacYeuthich;
	this->thangVip = a.thangVip;
}
TAIKHOANVIP::~TAIKHOANVIP(){}
void TAIKHOANVIP::taoTaiKhoan() {
	TAIKHOAN::taoTaiKhoan();
	cout << "nhap so tien tro thanh VIP member(20000d/thang): ";
	int tien;
	do {
		cin >> tien;
		if (tien < 20000) cout << "khong du tien nap VIP, nhap lai so tien: ";
	} while (tien < 20000);
	this->thangVip = (int)(tien / 20000);
}
void TAIKHOANVIP::xuatThongTinTaiKhoan() {
	TAIKHOAN::xuatThongTinTaiKhoan();
	cout << "thoi han VIP: " << this->thangVip << "thang" << endl;
}
void TAIKHOANVIP::addPhiBanQuyen(float tienphi) {
	this->phibanquyen += tienphi * 0.5;
}
void TAIKHOANVIP::addBaiHatYeuThich(BAIHAT* a) {
	this->listNhacYeuthich.push_back(a);
}
bool TAIKHOANVIP::isVip() {
	return true;
}
string TAIKHOANVIP::getTenDangNhap() {
	return this->tenDangNhap;
}
string TAIKHOANVIP::getMatKhau() {
	return this->matkhau;
}