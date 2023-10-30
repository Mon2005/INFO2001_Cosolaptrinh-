#include <stdio.h>

int main() {
    long long n;
    printf("Nhap gia tri cua n: ");
    scanf("%lld", &n);

    int tong_chan = 0;
    int tong_le = 0;

    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 == 0) {
            tong_chan += digit;
        } else {
            tong_le += digit;
        }
        n /= 10;
    }

    printf("Tong chan: %d\n", tong_chan);
    printf("Tong le: %d\n", tong_le);

    return 0;
}
