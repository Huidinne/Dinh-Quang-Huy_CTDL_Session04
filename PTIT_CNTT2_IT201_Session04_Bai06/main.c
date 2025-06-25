#include <stdio.h>

struct Student{
    int id;
    char name[20];
    int age;
};

int main(void) {
    struct Student student[5];
    printf("Nhap thong tin sinh vien: \n");
    for (int i = 0; i < 5; i++) {
        printf("ID: %d \n",i+1);
        student[i].id = i;
        printf("Ten sinh vien:");
        scanf("%s" , student[i].name);
        printf("Tuoi sinh vien:");
        scanf("%d", &student[i].age);
    }
    int number;
    printf("Nhap id sinh vien muon tim: ");
    scanf("%d", &number);
    for (int i = 0; i < 5; i++) {
        if (student[i].id == number) {
            printf("ID: %d \n", student[i].id);
            printf("Ten sinh vien: %s \n",student[i].name);
            printf("Tuoi sinh vien: %d ",student[i].age);
        }
    }
    return 0;
}