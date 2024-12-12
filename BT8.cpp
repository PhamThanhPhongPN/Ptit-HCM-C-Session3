#include <stdio.h>

int main(){
	int Num,a,b,c,d;
	printf("Nhap mot so nguyen co 4 chu so : ");
	scanf("%d",&Num);
	a = Num/1000;
	b = (Num/100)%10;
	c = (Num/10)%10;
	d = Num%10;
	printf("So dao nguoc cua so nguyen ban nhap la la %d%d%d%d",d,c,b,a);
	return 0;
}
