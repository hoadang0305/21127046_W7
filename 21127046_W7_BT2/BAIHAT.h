#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class BAIHAT
{
protected:
	string tenBaiHat,lyric,tenCaSi,theLoai;
	int namSangTac, luotNghe;
public:
	BAIHAT();
	BAIHAT(const BAIHAT&);
	~BAIHAT();
	virtual void inputBaiHat();
	virtual void outputBaiHat();
	virtual float getGiaTriBanQuyen();
};

