#pragma once
#include <iostream>
#include <string>
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
	virtual void outphutBaiHat();
};

