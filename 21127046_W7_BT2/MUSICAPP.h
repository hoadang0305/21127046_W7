#pragma once
#include "TAIKHOANVIP.h"
class MUSICAPP
{
private:
	vector<BAIHAT*> playlist;
	vector<TAIKHOAN*> userlist;
public:
	MUSICAPP();
	~MUSICAPP();
	void khoiTaoPLayList();
	void xuatTop5();
	void sapXepPlayList();
	void baiHatDeXuatVIP();
	void khoiTaoTaiKhoan();
};

