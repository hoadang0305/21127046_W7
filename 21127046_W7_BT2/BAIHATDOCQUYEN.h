#pragma once
#include "BAIHAT.h"
class BAIHATDOCQUYEN : public BAIHAT
{
private:
	float gtBanQuyen;
public:
	BAIHATDOCQUYEN();
	BAIHATDOCQUYEN(const BAIHATDOCQUYEN&);
	~BAIHATDOCQUYEN();
	void inputBaiHat();
	void outputBaiHat();
	float getGiaTriBanQuyen();
	string getTenBaiHat();
	string getTheLoai();
	string getLyric();
	int getLuotNghe();
};

