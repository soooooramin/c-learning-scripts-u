#include <stdio.h>
int minimum(int num1, int num2, int num3){
    int temp;
    if (num1 <= num2){
        temp = num1;
    }
    else{
        temp = num2;
    }
    if (temp > num3){
        temp = num3;
    }
    return(temp);
}

int main (void){
    int num1, num2, num3;
    num1 = 1;
    num2 = 2;
    num3 = 3;
    printf("最小値は %d\n", minimum(num1, num2, num3));

    return 0;
}