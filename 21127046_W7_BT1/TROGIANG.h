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
	int tinhluong();
	void input();
	void output();
};

