#include <stdio.h>
int main(void)
{
int sum,m,n,temp;
sum = 0;
temp = 0;
printf("m : ");
scanf("%d", &m);
printf("n : ");
scanf("%d", &n);

if (n<m){
    temp = n;
    n = m;
    m = temp;
}
sum = m;
for (int i = m; i < n; i++){
    m = m + 1;
    sum = sum + m;
}
printf("%d\n", sum);

}