#include <stdio.h>

int main() {
    float diem;
    printf("Nhap diem cua hoc sinh: ");
    scanf("%f", &diem);

    if (diem >= 9.0 && diem <= 10.0) {
        printf("Xuat sac\n");
    }
    else if (diem >= 8.0 && diem < 9.0) {
        printf("Gioi\n");
    }
    else if (diem >= 6.5 && diem < 8.0) {
        printf("Kha\n");
    }
    else if (diem >= 5.0 && diem < 6.5) {
        printf("Trung binh\n");
    }
    else if (diem >= 0.0 && diem < 5.0) {
        printf("Yeu\n");
    }
    else {
        printf("Diem khong hop le\n");
    }

    return 0;
}
