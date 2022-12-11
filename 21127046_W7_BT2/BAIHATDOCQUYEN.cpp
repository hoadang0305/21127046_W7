#include "BAIHATDOCQUYEN.h"

BAIHATDOCQUYEN::BAIHATDOCQUYEN() :
	BAIHAT(){
	this->gtBanQuyen = 0;
}
BAIHATDOCQUYEN::BAIHATDOCQUYEN(const BAIHATDOCQUYEN& a) :
	BAIHAT(a){
	this->gtBanQuyen = a.gtBanQuyen;
}
BAIHATDOCQUYEN::~BAIHATDOCQUYEN(){}
void BAIHATDOCQUYEN::inputBaiHat() {
	BAIHAT::inputBaiHat();
	cout << "nhap gia tri ban quyen: ";
	cin >> this->gtBanQuyen;
	if (this->gtBanQuyen < 0) this->gtBanQuyen = 0;
}
void BAIHATDOCQUYEN::outputBaiHat() {
	BAIHAT::outputBaiHat();
	cout << "gia tri ban quyen: " << this->gtBanQuyen << endl;
}
float BAIHATDOCQUYEN::getGiaTriBanQuyen() {
	return this->gtBanQuyen;
}
string BAIHATDOCQUYEN::getTenBaiHat() {
	return this->tenBaiHat;
}
string BAIHATDOCQUYEN::getTheLoai() {
	return this->theLoai;
}
int BAIHATDOCQUYEN::getLuotNghe() {
	return this->luotNghe;
}
string BAIHATDOCQUYEN::getLyric() {
	return this->lyric;
}