#include <stdio.h>

void thucHienBai1(){
	//in so chan tu 1-n
	printf("Bài 1\n");
	int n;
	printf("Moi nhap so nguyen n: ");
	scanf("%d", &n);
	printf("Các so chan tu 1- %d la:\n", n);
	for(int i = 1; i <= n ; i++){
		if(i % 2 == 0){
			printf("%d ", i);
		}
	}
}
void thucHienBai2(){
	//dem so le nho hon n
	printf("Bài 2\n");
	int n;
	printf("Moi nhap so nguyen n: ");
	scanf("%d", &n);
	int dem = 0;
	printf("Cac so le tu 1- %d la:\n", n);
	for(int i = 1; i <= n ; i++){
		if(i % 2 != 0){
			printf("%d ", i);
			dem++;//có thì tang biên dem len 1 don vi
		}
	}
	printf("\nTong so le tu 1- %d la: %d\n", n, dem);
}
void thucHienBai3(){
	//yêu câu nhâp tháng tu 1-> 12, sai nhap lai
	printf("Bài 3\n");
	int thang;
	do{
		printf("Moi nhap thang (1-12): ");
		scanf("%d", &thang);
		if(thang < 1  || thang > 12){
			printf("Ban nhap sai thang roi!!!!!!\n");
		}
	}while(thang < 1  || thang > 12);
	printf("Thang ban vua nhap la: %d\n", thang);
}
void thucHienBai4(){
	//Test nhap ma PIN (123456), nhap sai cho nhap lai, qua 3 lan thong bao khoa tai khoan
	printf("Bài 4\n");
	int password;
	int count = 0;
	do{
		printf("Moi nhap ma PIN = ");
		scanf("%d", &password);
		if(password != 123456){
			printf("Ma PIN sai!!! Vui long nhap lai!!!\n");
			count++;//sai thi tinh them 3
		}
	}while(password != 123456 && count < 3);
	if(count == 3){
		printf("Ban da bi khoa tai khoan!!!\n");
	}else{
		printf("BAN DA DANG NHAP THANH CONG!!\n");
	}	
}
//tao menu lap
int main(){
	int luaChon;

	do {
			printf("------------MENU-----------\n");
			printf("1. Bài 1\n");
			printf("2. Bài 2\n");
			printf("3. Bài 3\n");
			printf("0. Thoat CT\n");
			printf("----------------------------\n");
		printf("Moi ban nhap lua chon (1-3): ");
		scanf("%d", &luaChon);
		//Dùng goi y code: Ctrl + cách
		switch(luaChon){
			case 1:
				printf("1. Bài 1\n");
				thucHienBai1();//goi ham thuc hien bai 1
				break;
			case 2:
				printf("2. Bài 2\n");
				thucHienBai2();//goi ham thuc hien bai 2
				break;
			case 3:
				printf("3. Bài 3\n");
				thucHienBai3();//goi ham thuc hien bai 3
				break;	
			case 4:
				printf("4. Bài 4\n");
				thucHienBai4();//goi ham thuc hien bai 4
				break;
			case 0:
				printf("0. Thoát CT\n");
				return 0;
			default:
				printf("Vui long chon lai!!\n");
		}
	}while(luaChon != 0);//neu lua chon khac 0 thi se lap lai
	//chon 0 => dung CT
	return 0;
}
