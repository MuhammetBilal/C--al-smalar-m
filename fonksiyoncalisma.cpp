#include<stdio.h>
#include<stdlib.h>
#include<time.h>

 void islem(char tur, int sayi, int sayi1)
 {
 	if(tur=='+')
 	{
 		printf("toplama isleminin sonucu: %d",sayi1+sayi);
	 }
	 
	else if(tur=='-')
 	{
 		printf("cikarma isleminin sonucu: %d",sayi1-sayi);
	 }
	 
	else if(tur=='*')
 	{
 		printf("carpma isleminin sonucu: %d",sayi1*sayi);
	 }
	 
	else if(tur=='/')
 	{
 		printf("bolme isleminin sonucu: %d",sayi1/sayi);
	 }
	 
	 else
	 {
	 	printf("gecerli deger giriniz");
	 	
	 }
	 
 }
 
 void bosluk()
 {
 	printf("\n");
 }


int main()
{
	char tur;
	int sayi,sayi1;
	
	printf("islem turunu secin");
	bosluk();
	scanf("%c",&tur);
	
	printf("sayi giriniz");
	bosluk();
	scanf("%d%d",&sayi,&sayi1);
	
	islem( tur, sayi, sayi1);
	
	tur='+';
	bosluk();
	printf("2 tane not giriniz");
	bosluk();
	scanf("%d%d",&sayi,&sayi1);
	
	islem( tur, sayi, sayi1);
	
	
}
