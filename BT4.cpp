#include <stdio.h>

int main(){
	float Toan, Van, Anh, Sum, Average;
	printf("Nhap diem toan : ");
	scanf("%f",&Toan);
	printf("Nhap diem van : ");
	scanf("%f",&Van);
	printf("Nhap diem anh : ");
	scanf("%f",&Anh);
	Sum = Toan + Van + Anh;
	Average = Sum/3.0; 
	printf("Tong diem 3 mon la %.2f diem ", Sum);
	printf("Trung binh cong diem 3 mon la %.2f diem ", Average);
	return 0; 
}
