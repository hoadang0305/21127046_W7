#pragma once
#include "TAIKHOAN.h"
class TAIKHOANVIP : public TAIKHOAN
{
private:
	int thangVip;
public:
	TAIKHOANVIP();
	TAIKHOANVIP(const TAIKHOANVIP&);
	~TAIKHOANVIP();
	void taoTaiKhoan();
	void xuatThongTinTaiKhoan();
	void addPhiBanQuyen(float);
	virtual void addBaiHatYeuThich(const BAIHAT&);
	virtual void addBaiHatBanQuyenYeuThich(const BAIHATDOCQUYEN&);
};

