#include <stdio.h>

int tinh_tong(int n) {
    int tong = 0;
    for (int i = 1; i <= n; i++) {
        int so_mu = i * i;
        tong += so_mu;
    }
    return tong;
}

int main() {
    int n;
    printf("Nhap gia tri cua n: ");
    scanf("%d", &n);
    
    int ket_qua = tinh_tong(n);
    printf("Ket qua: %d\n", ket_qua);
    
    return 0;
}
