#pragma once
#include "NHANSU.h"
class GIANGVIEN : public NHANSU
{
private:
	string hocHam;
	string hocVi;
	int namGiangDay;
	vector<string> monGiangDay;
public:
	GIANGVIEN();
	GIANGVIEN(string, string, int, string, string, int, vector<string>);
	GIANGVIEN(const GIANGVIEN&);
	~GIANGVIEN();
	double tinhluong();
	void input();
	void output();
};

