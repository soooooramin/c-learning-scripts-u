#include <stdio.h>
int main(void)
{
	int i ,n;
	float fnum = 0.0;
	n = 100;

	for (i=1; i<=n; i++)
	{
		fnum = fnum + 0.1;
		printf("%3d: %f\n", i, fnum);
	}
	
	return 0;
}
