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
    for (int i = 0; i < n -1; i++) {
        for (int j = 0; j < n - 1 -i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int left = 0;
    int right = n-1;
    int number;
    int flag = -1;
    printf("Nhap vao so can tim: ");
    scanf("%d", &number);
    while (left <= right) {
        int mid = (left + right) / 2;
        if ( number == arr[mid] ) {
            flag = mid;
            break;
        }else if (arr[mid] < number) {
            left = mid + 1;
        }else {
            right = mid - 1;
        }
    }
    if (flag == -1) {
        printf("Phan tu khong ton tai");
    }else {
        printf("Phan tu co ton tai");
    }
    return 0;
}