#include <stdio.h>

int main(){
	int Num,a,b,c,d,Sum;
	printf("Nhap mot so nguyen co 4 chu so : ");
	scanf("%d",&Num);
	a = Num/1000;
	b = (Num/100)%10;
	c = (Num/10)%10;
	d = Num%10;
	Sum = a+b+c+d;
	printf("Tong 4 chu so trong so nguyen ban nhap la %d",Sum);
	return 0;
}
