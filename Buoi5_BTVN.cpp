#include <stdio.h>
//1. ham khong tra ve, khong tham so truyen vao
//void: khong tra ve
//ten ham: dong tu ; dau ()
void thucHienBai1(){
	//code o day
	//nhap chieu dai
	//nhap chieu rong
	//tinh dien tich
}
void thucHienBai2(){
	//code o day
}
void thucHienBai3(){
	//code o day
}
int main(){
	int luaChon;
	printf("------------MENU-----------\n");
	printf("1. Bài 1\n");
	printf("2. Bài 2\n");
	printf("3. Bài 3\n");
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
		default:
			printf("Vui long chon lai!!\n");
	}
	
	
	return 0;
}
