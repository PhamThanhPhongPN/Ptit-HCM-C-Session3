#include <stdio.h>


int main(){
	float cao,canh,DienTich;
	printf("Nhap chieu cao cua tam giac: ");
	scanf("%f", &cao);
	printf("Nhap do dai canh cua tam giac: ");
	scanf("%f", &canh);
	DienTich = (cao*canh)/2;
	printf("Dien tich hinh tam giac la %.2f \n", DienTich);
	return 0;
}
