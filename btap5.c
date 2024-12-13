#include <stdio.h>
#include <math.h>
int main () {
	int N,i;
	printf("Nhap mot so: ");
	scanf("%d",&N);
	if (N<=1) {
		printf("%d khong phai la so nguyen to",N);
		return 0;
	} else {
		for (i=2; i<=sqrt(N); i++){
			if (N%i==0) {
				printf("%d khong phai la so nguyen to",N);
				return 0;
			}
		}
		printf("%d la so nguyen to",N);
	}
return 0;
}
