#include <stdio.h>
int main () {
	int n;
	float sotien, ketqua;
	const float usd_vnd = 23500;
	const float eur_vnd = 25000;
	const float gbp_vnd = 28000;
	const float jpy_vnd = 180;
	const float vnd_usd = 1/23500;
	const float vnd_eur = 1/25000;
	const float vnd_gbp = 1/28000;
	const float vnd_jpy = 1/180;
	printf("==============CHUONG TRINH CHUYEN DOI TIEN TE=============\n");
	printf("1. USD to VND\n");
	printf("2. EUR to VND\n");
	printf("3. GBP to VND\n");
	printf("4. JPY to VND\n");
	printf("5. VND to USD\n");
	printf("6. VND to EUR\n");
	printf("7. VND to GBP\n");
	printf("8. VND to JPY\n");
	printf("Nhap cach chuyen doi tien: \n");
	scanf("%d",&n);
	printf("Nhap so tien ban muon chuyen doi: \n");
	scanf("%f",&sotien);
	switch (n) {
			case 1:
				ketqua=sotien*usd_vnd;
				printf("%.2f USD = %.2f VND\n",sotien,ketqua);
		break;
			case 2:
				ketqua=sotien*eur_vnd;
				printf("%.2f EUR = %.2f VND\n",sotien,ketqua);
		break;
			case 3:
				ketqua=sotien*gbp_vnd;
				printf("%.2f GBP = %.2f VND\n",sotien,ketqua);
		break;
			case 4:
				ketqua=sotien*jpy_vnd;
				printf("%.2f JPY = %.2f VND\n",sotien,ketqua);
		break;
			case 5:
				ketqua=sotien*vnd_usd;
				printf("%.2f VND = %.2f USD\n",sotien,ketqua);
		break;
			case 6:
				ketqua=sotien*vnd_eur;
				printf("%.2f VND = %.2f EUR\n",sotien,ketqua);
		break;
			case 7:
				ketqua=sotien*vnd_gbp;
				printf("%.2f VND = %.2f GBP\n",sotien,ketqua);
		break;
			case 8:
				ketqua=sotien*vnd_jpy;
				printf("%.2f VND = %.2f JPY\n",sotien,ketqua);
		break;
			default:
				printf("Khong co lua chon tren");
				break;
	}
return 0;
}

