#include <stdio.h>
int factional(int n)
{
    if(n == 0)
        return 1;
    else
        return n * factional(n-1);
}
int main(void)
{
    int a, b, answer;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if(a >= b)
    {
        answer = factional(a)/(factional(b)*factional(a-b));
        printf("Answer:%d\n", answer);
    }
    else
    {
        printf("I can't calculate that.\n");
    }
}