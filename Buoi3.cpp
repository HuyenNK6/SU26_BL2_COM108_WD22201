#include <stdio.h>
int main(){
	//1. toán tu so hoc
	int a, b;
	printf("Moi nhap so nguyen a= ");
	scanf("%d", &a);
	printf("Moi nhap so nguyen b= ");
	scanf("%d", &b);
	printf("Ket qua a+b = %d\n", a+b);
	printf("Ket qua a/b = %d\n", a/b);//lay kq kieu du lieu so nguyen
	//(float)a/b => ép kieu du lieu
	printf("Ket qua a/b = %.2f\n", (float)a/b);//lay kq kieu du lieu so thuc
	printf("Ket qua a%%b = %d\n", a%b);//chia lay phan du
	
	printf("Ket qua (--a)+(--b) = %d\n", (--a)+(--b));
	printf("Sau khi thuc hien bieu thuc a= %d va b=%d\n", a,b);
	printf("Ket qua (a--)+(b--) = %d\n", (a--)+(b--));
	printf("Sau khi thuc hien bieu thuc a= %d va b=%d\n", a,b);
	//2. toan tu so sanh
	printf("Kiem tra a > b => %d\n", a > b);
	printf("Kiem tra a <= b => %d\n", a <= b);
	
	//3. toan tu logic
	printf("Ket qua: %d\n", (a>0 && b>0));
	printf("Ket qua: %d\n", (a>0 || b>0));
	printf("Kiem tra !(a >= b) => %d\n", !(a >= b));
	
	//4. toan tu gan
	int sum = a+b;
	sum += 2; //sum = sum + 2;
	printf("SUM= %d\n", sum);
	return 0;
}
