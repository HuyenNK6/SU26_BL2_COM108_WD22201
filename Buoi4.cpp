#include <stdio.h>
int main(){
	//Bai 1: nhap so nguyen -> kiem tra so am hay duong
	int number;
	printf("Moi nhap so nguyen number= ");
	scanf("%d", &number); //lenh doc gia tri tu ban phim
	// %d : dinh dang du lieu cua so nguyen number
	// & : xac dinh dia chi cua bien number
	if (number >= 0){
		printf("%d la so nguyen duong\n", number);
	}else {
		printf("%d la so nguyen am\n", number);
	}
	//Bai 2: nhap so nguyen -> kiem tra la so chan hay le
	int so;
	printf("Moi nhap so nguyen duong a= ");
	scanf("%d", &so);
	//%: là phép chia lay du -> so chan chia 2 du 0
	if (so % 2 == 0){
		printf("%d la so chan\n", so);
	}else{
		//cách kiem tra so le: (so % 2 == 1) hoac  (so % 2 != 0)
		printf("%d la so le\n", so);
	}
	//Bai 3: nhap diem toan, van, anh -> tinh diem tb -> xep loai
	float diemToan, diemVan, diemAnh, diemTB;
	printf("Moi nhap diem Toan = ");
	scanf("%f", &diemToan);
	printf("Moi nhap diem Van = ");
	scanf("%f", &diemVan);
	printf("Moi nhap diem Anh = ");
	scanf("%f", &diemAnh);
	//tinh diem trung binh
	diemTB= (diemToan + diemVan+ diemAnh)/3;
	printf("Diem trung binh = %.2f\n", diemTB);//%.2f lay 2 chu so sau dau phay
	if(diemTB >= 9 && diem <= 10){
		printf("Hoc luc: Xuat sac\n");
	}else if(diemTB >= 8){ // 8 <= diemTB <9
		//diemTB >= 8 && diem <9 : bo phan diem <9 
		printf("Hoc luc: Gioi\n");
	}else if(diemTB >= 7){//7 <= diemTB <8
		printf("Hoc luc: Kha\n");
	}else if(diemTB >= 5){//5 <= diemTB <7
		printf("Hoc luc: Trung binh\n");
	}else if(diemTB >= 3){//3 <= diemTB <5
		printf("Hoc luc: Yeu\n");
	}else if(diemTB >= 0){
		printf("Hoc luc: Kem\n");
	}
	
	
	
	
	
	return 0;
}
