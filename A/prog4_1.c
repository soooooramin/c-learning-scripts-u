#include <stdio.h>
int main(void)
{
    float bekijou;
    int i;
    bekijou = 1;
    for( i=1; i<=256; i++)
    {
    	bekijou = bekijou * 2;
    	printf("%2d: %f \n", i, bekijou);
    }
    return 0;
}
