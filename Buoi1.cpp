//thêm thu vien-04.08.15.19.21.33.34.35.40.44.45.46.49.56
#include <stdio.h>
int main(){//
	//1. in ra màn hình
	printf("Hello World!\n");//kêt thúc câu lênh là ;
	//2. khai báo biên
	int tuoi; //%d
	tuoi = 18;//gán giá tri cho biên
	printf("Tuoi cua ban la: %d\n", tuoi);
	
	float diem = 8.5;//%f => lây 2 chu sô sau dau , -> %.2f 
	printf("Diem cua ban la: %.2f\n", diem);
	
	bool isStudent = 1;//True/ False nhung trong C se luu la 1/0
	printf("Ban la Sinh Vien (1-dung, 0-sai): %d\n",isStudent);
	
	char kyTu= 'x';//%c
	printf("kyTu la: %c\n", kyTu);
	return 0; //trang thai tra ve 0
}
