#include"CHUYENVIEN.h"
#include"GIANGVIEN.h"
#include"NGHIENCUUVIEN.h"
#include"TROGIANG.h"
#include "THUCTAPSINH.h"

int main() {
	vector<NHANSU*> listNS;
	int n = 0;
	do {
		cout << "nhap so luong nhan su:";
		cin >> n;
		if (n <= 0) cout << "so luong khong hop le, nhap lai: " << endl;

	} while (n <= 0);
	NHANSU* a = NULL;
	for (int i = 0; i < n; i++) {
		int x;
		cout << "nhan loai nhan su " << i + 1 << endl;
		cout << "1 - giang vien" << endl;
		cout << "2 - tro vien" << endl;
		cout << "3 - nghien cuu vien" << endl;
		cout << "4 - chuyen vien" << endl;
		cout << "5 - thuc tap sinh" << endl;
		do {
			cout << "chon loai nhan su: ";
			cin >> x;
			if (x < 1 || x > 5) cout << "loai khong hop le, nhap lai!" << endl;
		} while (x < 1 || x > 5);
		if (x == 1) a = new GIANGVIEN;
		else if (x == 2) a = new TROGIANG;
		else if (x == 3) a = new NGHIENCUUVIEN;
		else if (x == 4) a = new CHUYENVIEN;
		else a = new THUCTAPSINH;
		a->input();
		listNS.push_back(a);
	}
	cout << "============================================" << endl;
	int tongluong = 0;
	for (int i = 0; i < listNS.size(); i++) {
		listNS[i]->output();
		tongluong += listNS[i]->tinhluong();
	}
	cout << "tong luong phai tra: " << tongluong << endl;
	cout << "============================================" << endl;
	double luongmax = listNS[0]->tinhluong();
	int flag = 0;
	for (int i = 1; i < listNS.size(); i++) {
		if (listNS[i]->tinhluong() > luongmax) {
			luongmax = listNS[i]->tinhluong();
			flag = i;
		}
	}
	cout << "nhan vien co luong cao nhat: " << endl;
	listNS[flag]->output();
	delete a;
	return 0;
}