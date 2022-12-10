#include "MUSICAPP.h"
int main() {
	cout << "   -----------------------" << endl;
	cout << "   |    DEMO MUSIC APP   |" << endl;
	cout << "   -----------------------" << endl;

	MUSICAPP check;
	check.khoiTaoPLayList();
	cout << " -------------------------------" << endl;
	TAIKHOAN * account = check.xuLiDangNhapDangKi();
	
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
	//temp.addBaiHatBanQuyenYeuThich(b);
	temp.addBaiHatYeuThich(b);
	temp.addPhiBanQuyen(b->getGiaTriBanQuyen());
	temp.xuatThongTinTaiKhoan();
	delete a;
	delete b;*/
	return 0;
}