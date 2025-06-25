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
    int arr1[n];
    int index = 0;
    int number;
    printf("Nhap so can tim: ");
    scanf("%d", &number);
    for (int i = 0; i < n; i++) {
        if (arr[i] == number) {
            arr1[index] = i;
            index++;
        }
    }
    for (int i = 0; i < index; i++) {
        printf("%d ", arr1[i]);
    }
    return 0;
}