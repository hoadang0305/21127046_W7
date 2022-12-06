#pragma once
#include "NHANSU.h"
class NGHIENCUUVIEN : public NHANSU
{
protected:
	vector<string> duAnNghienCuu;
	int namKN;
public:
	NGHIENCUUVIEN();
	NGHIENCUUVIEN(string, string, int, vector<string>, int);
	NGHIENCUUVIEN(const NGHIENCUUVIEN&);
	~NGHIENCUUVIEN();
	double tinhluong();
	void input();
	void output();
};

