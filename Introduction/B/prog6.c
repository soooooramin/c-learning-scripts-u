#include <stdio.h>

int main(void) {
    int a[5];
    int i;
    int j;
    int ans;

    for(i = 0; i < 5; i++) {
        printf("Enter a number: ");
        scanf("%d", &a[i]);
    }
    
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            ans = a[i] * a[j];
            printf("%d * %d = %d\n", a[i], a[j], ans);
        }
    }

    return 0;
}
