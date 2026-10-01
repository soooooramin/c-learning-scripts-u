#include <stdio.h>
int time(int hh, int mm, int ss)
{
    return hh * 3600 + mm * 60 + ss;
}

void hhmmss(int total, int *hh, int *mm, int *ss)
{
    *hh = total / 3600;
    total %= 3600;
    *mm = total / 60;
    *ss = total % 60;
    return;
}

int main(void){
    int hh, mm, ss, total, rh, rm, rs;
    printf("Enter times_a hours, minutes, and seconds: ");
    scanf("%d %d %d", &hh, &mm, &ss);
    int atotal = time(hh, mm, ss);

    printf("Enter times_b hours, minutes, and seconds: ");
    scanf("%d %d %d", &hh, &mm, &ss);
    int btotal = time(hh, mm, ss);
    
    if(atotal >= btotal)
    {
        total = atotal - btotal;
        hhmmss(total, &rh, &rm, &rs);
        printf("The difference is %02d:%02d:%02d.\n", rh, rm, rs);
    }
    else{
        total = btotal - atotal;
        hhmmss(total, &rh, &rm, &rs);
        printf("The difference is %02d:%02d:%02d.\n", rh, rm, rs);
    }
    return 0;
}