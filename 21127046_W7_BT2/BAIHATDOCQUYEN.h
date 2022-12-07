#pragma once
#include "BAIHAT.h"
class BAIHATDOCQUYEN : public BAIHAT
{
private:
	int gtBanQuyen;
public:
	BAIHATDOCQUYEN();
	BAIHATDOCQUYEN(const BAIHATDOCQUYEN&);
	~BAIHATDOCQUYEN();
	void inputBaiHat();
	void outputBaiHat();
};

