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
	int checkTaiKhoanAvailable(string, string);
	TAIKHOAN* xuLiDangNhapDangKi();
	void appRunning(TAIKHOAN*);
	void phatNhac(TAIKHOAN*);
	void chonBaiHatYeuThich(TAIKHOAN*);
	
};

