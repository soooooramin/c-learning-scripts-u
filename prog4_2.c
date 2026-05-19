#include <stdio.h>
int main(void)
{
    double bekijou;
    int i;
    bekijou = 1;
    for( i=1; i<=1500; i++)
    {
    bekijou = bekijou * 2;
    printf("%2d: %lf \n", i, bekijou);
    }
    return 0;
}