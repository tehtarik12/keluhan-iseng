#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void keluhan(){
	char akeluhan[100];
	int jenissolusi;


	do{
		printf("Silahkan Input Keluhan Anda.\n");
		printf(">> ");
		scanf("%[^\n]", &akeluhan); getchar();
	}while(strlen(akeluhan) < 5);
	
	for(int i = 0 ; i < 3 ; i++){
		printf("\n");
	}
	
		printf("Silahkan Pilih Jenis Solusi.\n");
		printf("1. Solusi Biasa\n");
		printf("2. Solusi Extreme\n");
		printf(">> ");
		scanf("&d", &jenissolusi); getchar();
		printf("\n");
	
	for(int i = 0 ; i < 3 ; i++){
		printf("\n");
	}
	
	if(jenissolusi = 1){
		
		printf("Berikut Keluhan Anda 	: %s\n", akeluhan);
		printf("Solusi Yang Diberikan   : \n");
		printf("Berdasarkan info yang dilansir menurut https://infeksiemerging.kemkes.go.id/uncategorized/bagaimana-cara-mencegah-penularan-virus-corona\n");
		printf("1. Menjaga kesehatan dan kebugaran agar stamina tubuh tetap prima dan sistem imunitas / kekebalan tubuh meningkat.\n");
		printf("2. Jaga jarak setidaknya 1 meter dengan orang lain.\n");
		printf("3. Gunakan masker dengan benar hingga menutupi mulut dan hidung ketika Anda sakit atau saat sedang keluar rumah.\n");
		printf("4. Menunda perjalanan ke wilayah/ negara dimana virus ini ditemukan.\n");
		
		for(int i = 0 ; i < 3 ; i++){
		printf("\n");
		}
	}
	else if(jenissolusi = 2){
		printf("Berikut Keluhan Anda 	: %s\n", akeluhan);
		printf("Solusi Yang Diberikan   : ", jenissolusi);
		printf("Ya caranya gausah keluar keluar blok!");
		
		for(int i = 0 ; i < 3 ; i++){
		printf("\n");
		}
	}
	
}


int main(){
	int inpmenu;
	
	do{	
		printf("Selamat Datang Di Aplikasi Yang Menerima Segala Keluh Kesah..\n");
		printf("Segala Solusi Akan Kami Berikan Kepada Anda >.<\n");
		printf("Ada Yang Bisa Kami Bantu?\n");
		printf("1. Keluhan\n");
		printf("2. Keluar\n");
		printf(">> ");
		scanf("%d", &inpmenu); getchar();
		printf("\n");
		
		switch(inpmenu)
		{
			case 1: keluhan();
			break;
			
			default:
			break;
		}
	}
	while(inpmenu != 2);
	

	return 0;
}
