#include <stdio.h>
//1. ham khong tra ve, khong tham so truyen vao
//void: khong tra ve
//ten ham: dong tu ; dau ()
void thucHienBai1(){
	//code o day
	printf("Bài 1\n");
}
void thucHienBai2(){
	printf("Bài 2\n");
}
void thucHienBai3(){
	printf("Bài 3\n");
}
int main(){
	int luaChon;
	printf("------------MENU-----------\n");
	printf("1. Bài 1\n");
	printf("2. Bài 2\n");
	printf("3. Bài 3\n");
	printf("0. Thoat CT\n");
	printf("----------------------------\n");
	do {
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
