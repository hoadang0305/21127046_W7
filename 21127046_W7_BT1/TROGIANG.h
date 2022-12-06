#pragma once
#include "NHANSU.h"
class TROGIANG : public NHANSU
{
private:
	int soMonTroGiang;
public:
	TROGIANG();
	TROGIANG(string, string, int, int);
	TROGIANG(const TROGIANG&);
	~TROGIANG();
	double tinhluong();
	void input();
	void output();
};

