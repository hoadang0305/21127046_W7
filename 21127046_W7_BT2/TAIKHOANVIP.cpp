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
	cout << "nhap so thang tro thanh VIP member(20000d/thang): ";
	cin >> this->thangVip;
}
void TAIKHOANVIP::xuatThongTinTaiKhoan() {
	TAIKHOAN::xuatThongTinTaiKhoan();
	cout << "thoi han VIP: " << this->thangVip;
}
void TAIKHOANVIP::addPhiBanQuyen(float tienphi) {
	this->phibanquyen += tienphi * 0.5;
}
void TAIKHOANVIP::addBaiHatYeuThich(const BAIHAT& a) {
	BAIHAT temp(a);
	this->listNhacYeuthich.push_back(&temp);
}
void TAIKHOANVIP::addBaiHatBanQuyenYeuThich(const BAIHATDOCQUYEN& a) {
	BAIHATDOCQUYEN temp(a);
	this->listNhacYeuthich.push_back(&temp);
}