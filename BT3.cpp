#include <stdio.h>


int main(){
	float Pi = 3.14;
	float banKinh, ChuVi, DienTich;
	printf("Nhap ban kinh hinh tron: ");
	scanf("%f", &banKinh);
	ChuVi = 2 * Pi * banKinh;
	DienTich = Pi * (banKinh*banKinh);
	printf("Chu vi hinh tron la %.2f \n", ChuVi);
	printf("Dien tich hinh tron la %.2f \n", DienTich);
	return 0;
}
