#pragma once
#include "NHANSU.h"
class THUCTAPSINH :public NHANSU {
private:
	int thoiGianTT;
	vector<string> maDA;
public:
	THUCTAPSINH();
	THUCTAPSINH(const THUCTAPSINH&);
	~THUCTAPSINH();
	double tinhluong();
	void input();
	void output();
};

