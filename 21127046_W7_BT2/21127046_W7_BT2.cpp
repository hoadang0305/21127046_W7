#include "MUSICAPP.h"
int main() {
	cout << "   -----------------------" << endl;
	cout << "   |    DEMO MUSIC APP   |" << endl;
	cout << "   -----------------------" << endl;
	int tieptuc = 0;
	MUSICAPP check;
	check.khoiTaoPLayList();
	cout << " -------------------------------" << endl;
	do {
		TAIKHOAN* account = check.xuLiDangNhapDangKi();
		check.appRunning(account);
		cout << "ban co muon tiep tuc test(0 - tiep tuc test, 1 - thoat)" << endl;
		cin >> tieptuc;
	} while (tieptuc == 0);
	//check.xuatTo
	/*BAIHAT* a = new BAIHAT;
	BAIHAT* b = new BAIHATDOCQUYEN;
	a->inputBaiHat();
	b->inputBaiHat(); 
	cout << "---------------" << endl;
	//TAIKHOAN temp;
	TAIKHOANVIP temp;
	temp.taoTaiKhoan();
	temp.addBaiHatYeuThich(a);
	temp.addPhiBanQuyen(a->getGiaTriBanQuyen());
	temp.addBaiHatBanQuyenYeuThich(b);
	temp.addBaiHatYeuThich(b);
	temp.addPhiBanQuyen(b->getGiaTriBanQuyen());
	temp.xuatThongTinTaiKhoan();
	delete a;
	delete b;*/
	return 0;
}