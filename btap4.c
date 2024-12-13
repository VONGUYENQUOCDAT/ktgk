#include <stdio.h>
int main () {
	int n;
	printf("Moi ban nhap mot so nguyen duong: ");
	scanf("%d",&n);
	if (n <= 0) {
        printf("Moi ban nhap lai mot so nguyen duong.\n");
        return 0;
	}
	for (int i=1;i<=n;i++) {
		if (n % i == 0) {
            printf("%d\n", i);
        }
	}
return 0;
}


