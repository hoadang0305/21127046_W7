#pragma once
#include "BAIHATDOCQUYEN.h"
class TAIKHOAN
{
protected:
	string tenDangNhap;
	string matkhau;
	float phibanquyen;
	vector<BAIHAT*> listNhacYeuthich;
public:
	TAIKHOAN();
	TAIKHOAN(const TAIKHOAN&);
	~TAIKHOAN();
	virtual void taoTaiKhoan();
	virtual void xuatThongTinTaiKhoan();
	bool checkMatKhau(string);
	virtual void addPhiBanQuyen(float);
	virtual void addBaiHatYeuThich(BAIHAT*);
	virtual void addBaiHatBanQuyenYeuThich(BAIHATDOCQUYEN*);
};

