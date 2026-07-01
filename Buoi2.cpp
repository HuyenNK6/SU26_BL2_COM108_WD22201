#include <stdio.h>

int main(){
	const float PI= 3.14;//khai bao HANG SO
	//PI= 5;	//báo lôi vì ko thay doi gia tri PI
	printf("So PI= %f\n", PI);
	//NHAP GIA TRI TU BAN PHIM
	int tuoi;
	printf("Moi nhap tuoi cua ban: ");
	scanf("%d", &tuoi); //%d: dinh dang kieu du lieu
	//&tuoi: luu dia chi cua bien tuoi -> scanf tìm va gán giá tri cho tuoi
	printf("Tuoi cua ban la: %d\n",tuoi);
	///////////////tình trang troi lenh
	getchar();//chi them khi bi loi
	char x;
	printf("Moi nhap ky tu dau tien trong ten ban: ");
	scanf("%c", &x);
	printf("Chu cai dau tien trong ten ban la: %c\n", x);
	/////////
	double chieuCao;
	printf("Moi nhap chieu cao cua ban: ");
	scanf("%lf", &chieuCao);
	printf("Chieu cao cua ban la: %.2lf\n", chieuCao);
	return 0;
}
