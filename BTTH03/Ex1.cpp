#include <stdio.h>
int kiem_tra_chia_het(int n) {
	if (n % 3 == 0 && n % 5 == 0){
	    return 1;
	} else {
	    return 0;
	}
}

int main() {
	int n;
	printf("Nhap so nguyen n:");
	scanf("%d",&n);
	int ket_qua = kiem_tra_chia_het(n);
	printf("%d\n",ket_qua);
	return 0;
}
