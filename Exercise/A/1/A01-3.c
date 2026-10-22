#include <stdio.h>
int main(void){
    int sum = 0;
    int character;
    FILE* fp = fopen("constitution.txt","r");
    while((character = fgetc(fp)) != EOF){
        if(character == 'c'){
            sum++;
        }
    }
    printf("%d \n", sum);
    fclose(fp);
    return 0;
}