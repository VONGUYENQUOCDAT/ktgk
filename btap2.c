#include <stdio.h>
int main () {
	float a,b,tienluong,phucap,Tongtien;
	phucap=0;
	printf("Nhap so gio lam viec trong thang: ");
	scanf("%f", &a);
	printf("Nhap muc luong theo gio: ");
	scanf("%f", &b);
	tienluong=a*b;
	if (a>160) {
		phucap=tienluong*0.1;
	}	
	Tongtien=tienluong + phucap;
	printf("Tien luong co ban la: %.2f\n", tienluong);
	printf("Tien phu cap la: %.2f\n", phucap);
	printf("Tong tien luong la: %.2f\n", Tongtien);
return 0;
}
