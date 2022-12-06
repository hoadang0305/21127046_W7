#pragma once
#include "NHANSU.h"
class CHUYENVIEN : public NHANSU
{
private:
	vector<string> duAnGiaoDuc;
	int namKNLV;
public:
	CHUYENVIEN();
	CHUYENVIEN(string, string, int, vector<string>, int);
	CHUYENVIEN(const CHUYENVIEN&);
	~CHUYENVIEN();
	double tinhluong();
	void input();
	void output();
};

