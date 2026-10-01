#include <stdio.h>

int main(void) {
    int a[3][4] = {{90, 100, 65, 70}, {65, 70, 80, 75}, {75, 80, 70, 90}};
    int sub_ave;
    int stu_ave;
    int temp;

    for(int i = 0; i < 4; i++) {
        printf("科目 %d の平均点: ", i + 1);
        for(int j = 0; j < 3; j++) {
            temp += a[j][i];
        }
        sub_ave = temp / 3;
        printf("%d\n", sub_ave);
        temp = 0;
    }

    for(int i = 0; i < 3; i++) {
        printf("学生 %d の平均点: ", i + 1);
        for(int j = 0; j < 4; j++) {
            temp += a[i][j];
        }
        stu_ave = temp / 4;
        printf("%d\n", stu_ave);
        temp = 0;
    }

    return 0;
}