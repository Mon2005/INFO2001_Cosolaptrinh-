#include <stdio.h>

int dem_chu_so_chan_le(long long n) {
    int dem_chan = 0;
    int dem_le = 0;

    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 == 0) {
            dem_chan++;
        } else {
            dem_le++;
        }
        n /= 10;
    }

    if (dem_chan == dem_le) {
        return 1;
    } else {
        return 0; 
    }
}

int main() {
    long long n;
    printf("Nhap gia tri cua n: ");
    scanf("%lld", &n);

    if (dem_chu_so_chan_le(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
