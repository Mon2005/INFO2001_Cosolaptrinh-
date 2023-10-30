#include <stdio.h>

int main() {
    int N, i, sum = 0;

    printf("Nhap so nguyen N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        sum += 2 * i - 1;
    }

    printf("Tong cua %d so le dau tien la: %d\n", N, sum);

    return 0;
}
