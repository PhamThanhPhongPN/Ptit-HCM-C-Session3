#include <stdio.h>

int main(){
	float C, F;
	printf("Hay nhap do C ma ban muon chuyen sang do F : ");
	scanf("%f",&C);
	F = (C * 1.8 + 32);
	printf("%.1f do C ra %.1f do F", C,F);
	return 0; 
}
