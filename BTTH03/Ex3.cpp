#include <stdio.h>

int kiem_tra_hop_le(int thang, int nam) {
    if (thang <= 0 || thang > 12 || nam <= 0) {
        return 0;
    }
        return 1; 
}

int tinh_so_ngay(int thang, int nam) {
    switch(thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30; 
        case 2:
            if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0)) {
                return 29; 
            } else {
                return 28; 
            }
    }
}

int main() {
    int thang, nam;
    printf("Nhap thang: ");
    scanf("%d", &thang);
    printf("Nhap nam: ");
    scanf("%d", &nam);
    
    if (kiem_tra_hop_le(thang, nam) == 0) {
        printf("INVALID\n");
    } else {
        int so_ngay = tinh_so_ngay(thang, nam);
        printf("%d\n", so_ngay);
    }
    
    return 0;
}
