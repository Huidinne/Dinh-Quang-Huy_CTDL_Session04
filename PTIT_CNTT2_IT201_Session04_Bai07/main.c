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
    int found = -1;
    for (int i = 0; i < n/2; i++) {
        if (arr[i] == arr[n-1-i]) {
            printf("(%d,%d)\n", arr[i], arr[n-1-i]);
            found = i;
        }
    }
    if (found == -1) {
        printf("khong tim thay cap doi xung");
    }
    return 0;
}