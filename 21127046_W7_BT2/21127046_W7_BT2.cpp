#include "BAIHATDOCQUYEN.h"
#include "TAIKHOANVIP.h"
int main() {
	BAIHAT *a = new BAIHAT;
	BAIHATDOCQUYEN b;
	a->inputBaiHat();
	//b.inputBaiHat(); 
	cout << "---------------" << endl;
	TAIKHOAN temp;
	//TAIKHOANVIP temp1;
	temp.taoTaiKhoan();
	temp.addBaiHatYeuThich(a);
	//temp.addBaiHatBanQuyenYeuThich(b);
	temp.xuatThongTinTaiKhoan();
	delete a;
	return 0;
}