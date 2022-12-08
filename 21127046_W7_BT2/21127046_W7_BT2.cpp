#include "BAIHATDOCQUYEN.h"
#include "TAIKHOANVIP.h"
int main() {
	BAIHAT *a = new BAIHAT;
	BAIHATDOCQUYEN* b = new BAIHATDOCQUYEN;
	a->inputBaiHat();
	b->inputBaiHat(); 
	cout << "---------------" << endl;
	//TAIKHOAN temp;
	TAIKHOANVIP temp;
	temp.taoTaiKhoan();
	temp.addBaiHatYeuThich(a);
	temp.addPhiBanQuyen(a->getGiaTriBanQuyen());
	temp.addBaiHatBanQuyenYeuThich(b);
	temp.addPhiBanQuyen(b->getGiaTriBanQuyen());
	temp.xuatThongTinTaiKhoan();
	delete a;
	return 0;
}