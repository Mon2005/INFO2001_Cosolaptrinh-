#include <stdio.h>

int kiem_tra_nam_nhuan(int nam) {
    if (nam <= 0) {
        return -1; 
    }
    
    if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0)) {
        return 1;
    } else {
        return 0; 
    }
}

int main() {
    int nam;
    printf("Nhap mot nam: ");
    scanf("%d", &nam);
    
    int ket_qua = kiem_tra_nam_nhuan(nam);
    if (ket_qua == -1) {
        printf("INVALID\n");
    } else if (ket_qua == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
