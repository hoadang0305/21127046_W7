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
	cout << "   -----------------------" << endl;
	cout << "   |  KHOI TAO PLAYLIST  |" << endl;
	cout << "   -----------------------" << endl;
	cout << "nhap so luong bai hat:";
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
		cout << "   ------------------------" << endl;
		cout << "   |  <>   PLAYLIST   <>  |" << endl;
		cout << "   ------------------------" << endl;
		for (int i = 0; i < x; i++) {
			cout << "-----------------" << endl;
			cout << "bai hat thu " << i + 1 << endl;
			this->playlist[i]->outputBaiHat();
		}
	}
	else cout << "playlist dang rong !" << endl;
}
void MUSICAPP::baiHatDeXuatVIP() {
	if (this->playlist.size() > 0) {
		int x;
		if (this->playlist.size() <= 5) x = this->playlist.size();
		else x = 5;
		this->sapXepPlayList();
		cout << " nhap the loai ban muon nghe:" << endl;
		cout << "1 - Viet Nam" << endl;
		cout << "2 - Au My" << endl;
		cout << "3 - Han Quoc" << endl;
		int n;
		string temp;
		do {
			cin >> n;
			if (n != 1 && n != 2 && n != 3) cout << "the loai khong hop le, hay nhap lai: ";
		} while (n != 1 && n != 2 && n != 3);
		if (n == 1) {
			temp = "Viet Nam";
		}
		else if (n == 2) {
			temp = "Au My";
		}
		else {
			temp = "Han Quoc";
		}
		cout << "   ------------------------" << endl;
		cout << "   |    PLAYLIST VIP      |" << endl;
		cout << "   ------------------------" << endl;
		for (int i = 0; i < x; i++) {
			cout << "-----------------" << endl;
			if (this->playlist[i]->getTheLoai() == temp) {
				cout << "bai hat top" << i + 1 << endl;
				this->playlist[i]->outputBaiHat();
			}
		}
	}
	else cout << "playlist dang rong!" << endl;
}
int MUSICAPP::checkTaiKhoanAvailable(string taikhoan, string matkhau) {
	for (int i = 0; i < userlist.size(); i++) {
		if (userlist[i]->getTenDangNhap() == taikhoan && userlist[i]->getMatKhau() == matkhau) {
			return i;
		}
	}
	return -1;
}
TAIKHOAN* MUSICAPP::xuLiDangNhapDangKi() {
	cout << "ban muon dang nhap hay dang ki ?" << endl;
	cout << "1 - dang nhap" << endl;
	cout << "2 - dang ki" << endl;
	int x;
	do {
		cin >> x;
		if (x != 1 && x != 2) cout << "phuong thuc khong hop le, nhap lai:";
	} while (x != 1 && x != 2);
	if (x == 1) {
		int check = 0;
		string taikhoan, matkhau;
		cout << "nhap ten tai khoan: ";
		do {
			rewind(stdin);
			getline(cin, taikhoan);
			cout << "nhap mat khau: ";
			getline(cin, matkhau);
			if (this->checkTaiKhoanAvailable(taikhoan, matkhau) == -1) {
				cout << "tai khoan khong ton tai,ban muon nhap lai hay dang ki? " << endl;
				cout << "1 - nhap lai tai khoan, mat khau" << endl;
				cout << "2 - dang ki moi" << endl;
				int temp;
				do {
					cin >> temp;
					if (temp != 1 && temp != 2) cout << "input khong hop le, vui long nhap lai:" << endl;
				} while (temp != 1 && temp != 2);
				if (temp == 1) check = 1;
				else {
					check = 2;
					TAIKHOAN* TKnew;
					cout << "1 - tai khoan pho thong" << endl;
					cout << "2 - tai khoan vip" << endl;
					int temp;
					do {
						cin >> temp;
						if (temp != 1 && temp != 2) cout << "input khong hop le, hay nhap lai:";
					} while (temp != 1 && temp != 2);
					if (temp == 1) {
						TKnew = new TAIKHOAN;
						TKnew->taoTaiKhoan();
						userlist.push_back(TKnew);
						return TKnew;
					}
					else {
						TKnew = new TAIKHOANVIP;
						TKnew->taoTaiKhoan();
						userlist.push_back(TKnew);
						return TKnew;
					}
				}
			}
			else {
				int flag = this->checkTaiKhoanAvailable(taikhoan, matkhau);
				return userlist[flag];
			}
		} while (check == 1);
	}
	else {
		TAIKHOAN* TKnew;
		cout << "1 - tai khoan pho thong" << endl;
		cout << "2 - tai khoan vip" << endl;
		int temp;
		do {
			cin >> temp;
			if (temp != 1 && temp != 2) cout << "input khong hop le, hay nhap lai:";
		} while (temp != 1 && temp != 2);
		if (temp == 1) {
			TKnew = new TAIKHOAN;
			TKnew->taoTaiKhoan();
			userlist.push_back(TKnew);
			return TKnew;
		}
		else {
			TKnew = new TAIKHOANVIP;
			TKnew->taoTaiKhoan();
			userlist.push_back(TKnew);
			return TKnew;
		}
	}
}
void MUSICAPP::appRunning(TAIKHOAN* temp) {
	int check = 0;
	do {
		int x;
		cout << "   -----------------------" << endl;
		cout << "   |         MENU        |" << endl;
		cout << "   -----------------------" << endl;
	
		cout << "1 - nghe nhac" << endl;
		cout << "2 - xuat dang sach nhac yeu thich" << endl;
		cout << "3 - xuat thong tin tai khoan" << endl;
		cout << "4 - kiem tra tien ban quyen" << endl;
		cout << "5 - nap them tien VIP" << endl;
		cout << "0 - dang xuat" << endl;
		cout << "nhap chuc nang: ";
		do {
			cin >> x;
			if (x < 0 && x > 5) cout << "input khong hop le, vui long nhap lai: ";
		} while (x < 0 && x > 5);
		if (x == 1) {
			if (temp->isVip() == false) {
				this->xuatTop5();
			}
			else {
				this->baiHatDeXuatVIP();
			}
			int checkloop = 0;
			do {
				cout << "------------" << endl;
				cout << "1 - chon bai hat de nghe" << endl;
				cout << "2 - chon bai hat de them vao playlist yeu thich" << endl;
				cout << "3 - thoat chuc nang" << endl;
				cout << "chon chuc nang: ";
				int a;
				do {
					cin >> a;
					if (a != 1 && a != 2 && a != 3) cout << "input khong hop le, vui long nhap lai: ";
				} while (a != 1 && a != 2 && a != 3);
				if (a == 1) {
					this->phatNhac(temp);
					checkloop = 0;
				}
				else if (a == 2) {
					this->chonBaiHatYeuThich(temp);
					checkloop = 0;
				}
				else {
					checkloop = 1;
				}
			} while (checkloop == 0);
		}
		else if (x == 2) {
			temp->xuatDanhSachYeuThich();
		}
		else if (x == 3) {
			temp->xuatThongTinTaiKhoan();
		}
		else if (x == 4) {
			cout << "so tien ban quyen ban phai tra la: " << temp->getPhiBanQuyen() << endl;
		}
		else if (x == 5) {
			if (temp->isVip() == false) {
				cout << "ban khong phai la thanh vien VIP" << endl;
			}
			else {
				float tien;
				cout << "so thang vip cua ban la: " << temp->getThangVIP() << endl;
				cout << "so tien ban nhap la: ";
				cin >> tien;
				if (tien > 20000) {
					temp->addThangVIP((int)tien / 20000);
				}
				else {
					cout << "khong du tien de nap!" << endl;
				}
			}
		}
		else {
			check = 1;
		}

	} while (check == 0);
}
void MUSICAPP::phatNhac(TAIKHOAN* a) {
	cout << "chon bai hat de nghe:";
	int x;
	int check = this->playlist.size() + 1;
	do {
		cin >> x;
		if (x < 0 && x > check) cout << "input khong hop le, vui long nhap lai: ";
	} while (x < 0 && x > check);
	cout << "-----------------------" << endl;
	if (this->playlist[x-1]->getGiaTriBanQuyen() > 0) a->addPhiBanQuyen(this->playlist[x-1]->getGiaTriBanQuyen());
	cout << this->playlist[x-1]->getTenBaiHat() << endl;
	cout <<"lyric:" <<  this->playlist[x-1]->getLyric() << endl;
}
void MUSICAPP::chonBaiHatYeuThich(TAIKHOAN* a) {
	cout << "chon bai hat de them vao:";
	int check = this->playlist.size() + 1;
	int x;
	do {
		cin >> x;
		if (x < 0 && x > check) cout << "input khong hop le, vui long nhap lai: ";
	} while (x < 0 && x > check);
	a->addBaiHatYeuThich(this->playlist[x-1]);
	a->addPhiBanQuyen(this->playlist[x-1]->getGiaTriBanQuyen());
	cout << "bai hat da duoc them vao playlist yeu thich!";
}