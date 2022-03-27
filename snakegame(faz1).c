#include <stdio.h>
#include <stdlib.h>

int main() {
	typedef struct {
		int borders[30][50];
		char yon_tusu;
		int score;
		FILE *fp,fp2;		
	} snakegame;

	FILE *fp, *fp2;
    char oyuncu_bilgisi[50];

    if ( (fp = fopen("oyuncu_bilgisi.txt","w"))==NULL) {
        exit(1);
    }

    printf("Oyuncu Bilgilerini Giriniz:");
    scanf("%s",oyuncu_bilgisi);

    fprintf(fp,"%s\t",oyuncu_bilgisi);

    fclose(fp);

    if ( (fp2 = fopen("oyuncu_bilgisi.txt","r"))==NULL) {
        exit(1);
    }

    fscanf(fp2, "%s\t",oyuncu_bilgisi);
    printf("Oyuncu %s",oyuncu_bilgisi);
	
	
	return 0;
}


