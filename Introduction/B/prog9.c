#include<stdio.h>

int main( void ){
        FILE *fp;
        int i;

        fp = fopen( "data.txt", "w" );

        for( i=1; i<=200; i++ ){
            if( i % 10 == 0 )
                fprintf( fp, "%3d\n", i );
            else
                fprintf( fp, "%3d ", i );
        }

        fclose( fp );

        return 0;
}