#pragma once
#include "NHANSU.h"
class NGHIENCUUVIEN : public NHANSU
{
private:
	vector<string> duAnNghienCuu;
	int namKN;
public:
	NGHIENCUUVIEN();
	NGHIENCUUVIEN(string, string, int, vector<string>, int);
	NGHIENCUUVIEN(const NGHIENCUUVIEN&);
	~NGHIENCUUVIEN();
	int tinhluong();
	void input();
	void output();
};

