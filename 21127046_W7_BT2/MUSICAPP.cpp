#include "MUSICAPP.h"

MUSICAPP::MUSICAPP() {
	playlist = {};
	userlist = {};
}
MUSICAPP::~MUSICAPP() {
	playlist.clear();
	userlist.clear();
	playlist = {};
	userlist = {};
}
void MUSICAPP::khoiTaoPLayList() {
	int n,x;
	cout << "-----------------------" << endl;
	cout << "|  KHOI TAO PLAYLIST  |" << endl;
	cout << "-----------------------" << endl;
	cout << " nhap so luong bai hat:";
	cin >> n;
	for (int i = 0; i < n; i++) {
		BAIHAT* temp;
		cout << "chon kieu bai nhac:" << endl;
		cout << "1 - bai hat pho thong" << endl;
		cout << "2 - bai hat ban quyen" << endl;
		do {
			cin >> x;
			if (x != 1 && x != 2) cout << "kieu bai hat khong hop le, nhap lai: ";
		} while (x != 1 && x != 2);
		if (x == 1) {
			temp = new BAIHAT;
			temp->inputBaiHat();
			cout << "------------------" << endl;
		}
		else {
			temp = new BAIHATDOCQUYEN;
			temp->inputBaiHat();
			cout << "------------------" << endl;
		}
		this->playlist.push_back(temp);
	}
}
void MUSICAPP::sapXepPlayList() {
	if (this->playlist.size() >1) {
		for (int i = 0; i < playlist.size()-1; i++) {
			for (int j = i + 1; j < playlist.size(); j++) {
				if (this->playlist[i]->getLuotNghe() < this->playlist[j]->getLuotNghe()) {
					swap(this->playlist[i], this->playlist[j]);
				}
			}
		}
	}
}
void MUSICAPP::xuatTop5() {
	if (this->playlist.size() > 0) {
		int x;
		if (this->playlist.size() <= 5) x = this->playlist.size();
		else x = 5;
		this->sapXepPlayList();
		cout << "------------------------" << endl;
		cout << "|  <>   PLAYLIST   <>  |" << endl;
		cout << "------------------------" << endl;
		for (int i = 0; i < x; i++) {
			cout << "-----------------" << endl;
			cout << "bai hat top" << i + 1 << endl;
			this->playlist[i]->outputBaiHat();
		}
	}
	else cout << "playlist dang rong !" << endl;
}
void MUSICAPP::baiHatDeXuatVIP() {
	if (this->playlist.size() > 0) {
		int x;
		vector<BAIHAT*> VIPlist;
		cout << " nhap the loai ban muon nghe:" << endl;
		cout << "1 - Viet Nam" << endl;
		cout << "2 - Au My" << endl;
		cout << "3 - Han Quoc" << endl;
		do {
			cin >> x;
			if (x != 1 && x != 2 && x != 3) cout << "the loai khong hop le, hay nhap lai: ";
		} while (x != 1 && x != 2 && x != 3);
		if (x == 1) {
			int temp = 0;
			for (int i = 0; i < this->playlist.size(); i++) {
				if (this->playlist[i]->getTheLoai() == "Viet Nam") {
					BAIHAT* temp;
					if (this->playlist[i]->getGiaTriBanQuyen() == 0) {
						temp = new BAIHAT;
						temp = this->playlist[i];
					}
					else {
						temp = new BAIHATDOCQUYEN;
						temp = this->playlist[i];
					}
					VIPlist.push_back(temp);
				}
			}
		}
		else if (x == 2) {
			int temp = 0;
			for (int i = 0; i < this->playlist.size(); i++) {
				if (this->playlist[i]->getTheLoai() == "Au My") {
					BAIHAT* temp;
					if (this->playlist[i]->getGiaTriBanQuyen() == 0) {
						temp = new BAIHAT;
						temp = this->playlist[i];
					}
					else {
						temp = new BAIHATDOCQUYEN;
						temp = this->playlist[i];
					}
					VIPlist.push_back(temp);
				}
			}
		}
		else {
			int temp = 0;
			for (int i = 0; i < this->playlist.size(); i++) {
				if (this->playlist[i]->getTheLoai() == "Han Quoc") {
					BAIHAT* temp;
					if (this->playlist[i]->getGiaTriBanQuyen() == 0) {
						temp = new BAIHAT;
						temp = this->playlist[i];
					}
					else {
						temp = new BAIHATDOCQUYEN;
						temp = this->playlist[i];
					}
					VIPlist.push_back(temp);
				}
			}
		}
		if (VIPlist.size() > 5) x = 5;
		else x = VIPlist.size();
		cout << "------------------------" << endl;
		cout << "|    PLAYLIST VIP      |" << endl;
		cout << "------------------------" << endl;
		for (int i = 0; i < x; i++) {
			cout << "-----------------" << endl;
			cout << "bai hat top" << i + 1 << endl;
			VIPlist[i]->outputBaiHat();
		}
	}
	else cout << "playlist dang rong!" << endl;
}
