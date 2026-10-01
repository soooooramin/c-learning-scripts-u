#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fp;
    int n, i, j, a[3][4];
    

    if( ( fp = fopen( "test.txt", "r" ) ) == NULL ){
    fprintf( stderr, "File open error.\n" );
    exit(1);
    }

    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            fscanf( fp, "%d", &a[i][j] );
        }
    }

    fp = fopen( "result.txt", "w" );
    /*　行の平均 */
    for(i=0; i<3; i++){
        int sum = 0;
        for(j=0; j<4; j++){
            sum += a[i][j];
        }
        fprintf(fp, "行 %d の平均: % .2f\n", i+1, (double)sum/4);

    }

    /*　列の平均 */
    for(j=0; j<4; j++){
        int sum = 0;
        for(i=0; i<3; i++){
            sum += a[i][j];
        }
        fprintf(fp, "列 %d の平均: % .2f\n", j+1, (double)sum/3);

    }

    fclose(fp);
    return 0;
}