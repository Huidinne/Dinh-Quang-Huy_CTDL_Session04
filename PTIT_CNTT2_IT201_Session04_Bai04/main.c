#include <stdio.h>

int main(void) {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    if (n <= 0 ) {
        printf("So luong phan tu khong hop le");
        return 0;
    }
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int number , index;
    int flag = 0;
    printf("Nhap vao so muon tim kiem: ");
    scanf("%d", &number);
    for (int i = 0; i < n; i++) {
        if (number == arr[i]) {
            index = i;
            flag = 1;
        }
    }
    if (flag == 0) {
        printf("Khong tim thay phan tu");
        return 0;
    }
    printf("%d" ,index);
    return 0;
}