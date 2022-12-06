#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class NHANSU
{
protected:
	string hoten;
	string sinhnhat;
	int ID;
public:
	NHANSU();
	NHANSU(string, string, int);
	~NHANSU();
	NHANSU(const NHANSU&);
	virtual void input();
	virtual void output();
	virtual double tinhluong();
};

