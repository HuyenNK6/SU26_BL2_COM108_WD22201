#include <stdio.h>
int main (){
	//tao menu lua chon mon an
	//1- Com ga , 2- Bun dau, 3- Pho bo, 4- Pizza
	int luaChon;
	printf("------------MENU------------/n");
	printf("1- Com ga\n");
	printf("2- Bun dau\n");
	printf("3- Pho bo\n");
	printf("4- Pizza\n");
	printf("---Moi ban chon mon an so (1-4): ");
	scanf("%d", &luaChon);
	//comment code -> Ctrl+ /
//	if(luaChon == 1){
//		printf("Ban da lua chon mon 1- Com ga\n");
//	}else if(luaChon == 2){
//		printf("Ban da lua chon mon 2- Bun dau\n");
//	}else if(luaChon == 3){
//		printf("Ban da lua chon mon 3- Pho bo\n");
//	}else if(luaChon == 4){
//		printf("Ban da lua chon mon 4- Pizza\n");
//	}
	switch(luaChon){
		case 1:
			printf("Ban da lua chon mon 1- Com ga\n");
			break;
		case 2:
			printf("Ban da lua chon mon 2- Bun dau\n");
			break;
		case 3: 
			printf("Ban da lua chon mon 3- Pho bo\n");
			break;
		case 4:
			printf("Ban da lua chon mon 4- Pizza\n");
			break;
		default://lua chon khong phai cac case tren
			printf("Ban chon sai roi!! Vui long chon lai!!\n");
	}
	//nhap thang trong nam, in ra thang do co bao nhieu ngay
	
	int month;
	printf("Nhap thang: ");
	scanf("%d", &month);
	if (month < 1 || month > 12) {
		printf("0 hop le\n");
	} else {
		switch (month) {
			case 1:case 3:case 5:case 7:case 8:case 10:case 12:
				printf("Thang %d co 31 ngay", month);
				break;
			case 4:case 6:case 9:case 11:
				printf("Thang %d co 30 ngay", month);
				break;
			case 2:
				printf("Thang 2 co 28 hoac 29 ngay");
		}
	}
	
	return 0;	
}
