#include "BAIHAT.h"

BAIHAT::BAIHAT() {
	this->tenBaiHat = "unknown";
	this->lyric = "unknown";
	this->tenCaSi = "unknown";
	this->theLoai = "unknown";
	this->namSangTac = 0;
	this->luotNghe = 0;
}
BAIHAT::BAIHAT(const BAIHAT& a) {
	tenBaiHat = a.tenBaiHat;
	lyric = a.lyric;
	tenCaSi = a.tenCaSi;
	theLoai = a.theLoai;
	namSangTac = a.namSangTac;
	luotNghe = a.luotNghe;
}
BAIHAT::~BAIHAT(){}
void BAIHAT::inputBaiHat() {
	cout << "nhap thong tin bai hat:" << endl;
	rewind(stdin);
	cout << "nhap ten bai hat: ";
	getline(cin, this->tenBaiHat);
	cout << "nhap loi bai nhac:";
	getline(cin, this->lyric);
	cout << "nhap ten ca si: ";
	getline(cin, this->tenCaSi);
	cout << "nhap the loai: " << endl;
	cout << " 1 - Viet Nam" << endl;
	cout << " 2 - Au My" << endl;
	cout << "3 - Han Quoc" << endl;
	int x;
	do {
		cin >> x;
		if (x != 1 && x != 2 && x != 3) cout << "khong co loai do, nhap lai: ";
	} while (x != 1 && x != 2 && x != 3);
	if (x == 1) this->theLoai = "Viet Nam";
	if (x == 2) this->theLoai = "Au My";
	else this->theLoai = "Han Quoc";
	cout << "nhap nam sang tac bai hat: ";
	cin >> this->namSangTac;
	cout << "nhap luot nghe bai hat: ";
	cin >> this->luotNghe;
	if (luotNghe < 0) luotNghe = 0;
}
void BAIHAT::outputBaiHat() {
	cout << "======THONG TIN BAI HAT======" << endl;
	cout << "ten bai hat: " << this->tenBaiHat << endl;
	cout << "loi bai hat: <<<" << this->lyric << "...>>>" << endl;
	cout << "ten ca si: " << this->tenCaSi << endl;
	cout << "the loai: nhac " << this->theLoai << endl;
	cout << "nam sang tac: " << this->namSangTac << endl;
	cout << "so luot nghe: " << this->luotNghe << endl;
}
float BAIHAT::getGiaTriBanQuyen() {
	return 0;
}
string BAIHAT::getTenBaiHat() {
	return this->tenBaiHat;
}
string BAIHAT::getTheLoai() {
	string temp = "tai khoan VIP moi co the chon the loai!";
	return temp;
}
int BAIHAT::getLuotNghe() {
	return this->luotNghe;
}