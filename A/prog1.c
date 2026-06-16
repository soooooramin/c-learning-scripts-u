#include <stdio.h>
int main(void)
{
    int insertNum;
    int oneDigit = 0;
    int tenDigit = 0;
    int hundredsDigit = 0;

    printf("Input a three-digit number : ");
    scanf("%d", &insertNum);

    hundredsDigit = insertNum / 100;
    tenDigit = (insertNum % 100) / 10;
    oneDigit = insertNum % 10;

    printf("Hundreds digit = %d\n", hundredsDigit);
    printf("Tens digit = %d\n", tenDigit);
    printf("Ones digit = %d\n", oneDigit);

    return 0;
}
