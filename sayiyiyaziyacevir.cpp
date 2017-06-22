#include <stdio.h>
//3 basamaklý sayýlar için yapýldý.
void goster(int sayi)
{
	int kontrol;
	kontrol=sayi/100;
	if(kontrol==9) printf("Dokuzyuz");
	else if(kontrol==8) printf("Sekizyuz");
	else if(kontrol==7) printf("Yediyuz");
	else if(kontrol==6) printf("Altiyuz");
	else if(kontrol==5) printf("Besyuz");
	else if(kontrol==4) printf("Dortyuz");
	else if(kontrol==3) printf("Ucyuz");
	else if(kontrol==2) printf("Ikiyuz");
	else if(kontrol==1) printf("Yuz");
	kontrol=(sayi%100)/10;
	if(kontrol==9) printf("Doksan");
	else if(kontrol==8) printf("Seksen");
	else if(kontrol==7) printf("Yetmis");
	else if(kontrol==6) printf("Altmis");
	else if(kontrol==5) printf("Elli");
	else if(kontrol==4) printf("Kirk");
	else if(kontrol==3) printf("Otuz");
	else if(kontrol==2) printf("Yirmi");
	else if(kontrol==1) printf("On");
	kontrol=(sayi%100)%10;
	if(kontrol==9) printf("Dokuz");
	else if(kontrol==8) printf("Sekiz");
	else if(kontrol==7) printf("Yedi");
	else if(kontrol==6) printf("Altý");
	else if(kontrol==5) printf("Bes");
	else if(kontrol==4) printf("Dort");
	else if(kontrol==3) printf("Uc");
	else if(kontrol==2) printf("Iki");
	else if(kontrol==1) printf("Bir");
}



int main()
{
	int x;
printf("Sayiyi Giriniz:");
scanf("%d",&x);
goster(x);
}
