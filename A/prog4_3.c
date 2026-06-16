#include <stdio.h>
int main(void)
{
    int teika,waribiki,nedan;
    double percent;
    nedan = 0;
    percent = 0.0;
    printf("teika : ");
    scanf("%d", &teika);
    printf("waribiki : ");
    scanf("%d", &waribiki);
    percent = 1.0-(waribiki*0.01);
    nedan = (int)(teika*percent*1.1);
    printf("%d \n",nedan);
    return 0;
}