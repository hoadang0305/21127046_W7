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
	cout << "nhap the loai(Viet Nam - Au My - Han Quoc): ";
	getline(cin, this->theLoai);
	if (this->theLoai != "Viet Nam" && this->theLoai != "Au My" && this->theLoai != "Han Quoc") {
		this->theLoai = "unknown";
	}
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