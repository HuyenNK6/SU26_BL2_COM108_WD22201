#include <stdio.h>
int main(){
	//Bai 1: in ra cac so tu 1- n
	int n;
	printf("Moi nhap so nguyen duong n: ");
	scanf("%d", &n);
	//for (khoi tao; dieu kien; buoc nhay)
	for(int i = 1; i <= n; i++){
		printf("i = %d ; ", i);
	}
	printf("Bai 2: In tu n-0 \n");	
	for(int i = n;  i  >= 0; i--){
		printf("i = %d ; ", i);
	}
	//Bai 3: BTVN
	//Bài 4: su dung vong lap while -> tinh tong 1-> n
	int j = 0, tong = 0;
	//while(dieu kien)
	while (j <= n){
		tong += j; //tong = tong + j;
		j++;//tang 1don vi
	}
	printf("Tong = %d\n", tong);
	//nhap tuoi 18-30 => sai yeu cau nhap lai
	int tuoi = 0;
	//tuoi <18 hoac tuoi >30 => sai phai nhap lai
	do{
		printf("Moi ban nhap tuoi:");
		scanf("%d", & tuoi);
		if(tuoi < 18 || tuoi > 30){
			printf("Ban nhap sai!! nhap lai!!! \n");
		}
	}while(tuoi < 18 || tuoi > 30);
	printf("Nam nay ban %d tuoi\n", tuoi); //khi dung in
	
	
	
	return 0;
}
