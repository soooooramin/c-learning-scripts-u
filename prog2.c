#include <stdio.h>
int main (void)
{
	int x = 0;
	int m = 0;
	int n = 0;
	
	printf("x:");
	scanf("%d" , &x);
	printf("m:");
	scanf("%d" , &m);
	printf("n:");
	scanf("%d" , &n);

	if (x % m==0 && x%n == 0){
		printf("x ha m to n no koubaisuu dearu \n");
	}

	else{
		printf("x ha m to n no koubaisuu denai \n");
	}

	return 0;
}

