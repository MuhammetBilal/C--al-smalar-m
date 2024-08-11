#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<math.h>
//////////////////////////////////////////////////////////// 1.SORU
/*
int elemanbul(int aranansayi , int boyut , int dizi[] )
{
	for(int i=0 ; i<boyut ; i++)
	{
		if(dizi[i]==aranansayi)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int aranansayi;
	int boyut;
	int sonuc;
	int dizi[]={1, 2, 5, 12, 20, 50, 4, 30};
	
	printf("aramak istediginiz sayiyi giriniz\n");
	scanf("%d",&aranansayi);
	 
	 boyut=sizeof(dizi)/sizeof(int);
	
	 sonuc=elemanbul(aranansayi ,boyut ,dizi );
	
	if(sonuc!=-1)
	{
		printf("aradiginiz sayi %d. sirada  bulundu\n",sonuc+1);
	}
	else
	{
		printf("aradiginiz sayi bulunamadi");
}
return 0;
}

*/
//////////////////////////////////////////////////////////// 2.SORU
/*
float OrtalamaBulma( int sayi1 , int sayi2 )
{
	int sayac=0;
	int toplam=0;
	for(int i=sayi1 ; i<sayi2 ; i++)
	{
		if(i%3==0)
		{
			toplam+=i;
			sayac++;
		}
	}
	
	if(sayac>0)
	{
		return (float)toplam/sayac;
	}
	else
	{
		return -1;
	}
	
}
	
int	main()
{   int sayi1,sayi2;
	float ort;
	int sonuc2;
	
	printf("sayi1 ve sayi2 yi giriniz (sayi1<sayi2)\n");
	scanf("%d%d",&sayi1,&sayi2);
	
	 float ortalama= OrtalamaBulma(  sayi1 ,  sayi2);
	
	if(ortalama!=-1)
	{
		printf("3'un kati sayilarin ortalamasi : %.2f",ortalama);
	}
	return 0; 
}
*/
//////////////////////////////////////////////////////////// 3.SORU
/*
bool asalsayibulma( int sayi)
{
	int sayac=0;
		for( int i=2 ; i*i<=sayi ; i++)
		{
			if(sayi%i==0)
			{
				 return false;
			}
		}
		
	
    return true;

}

int enbuyugu(int limit)
{
	for(int i=limit-1 ; i>1 ; i--)
	{
		if(asalsayibulma(i))
		{
			return i;
		}
	}
	
	 printf("asal sayi bulunamadi.\n");
    return -1;
}
	
int main()
{
	int limit;
	
	printf("sayi giriniz");
	scanf("%d",&limit);
	
	int asalsayi= enbuyugu(limit);
	printf("asal sayi:%d",asalsayi);
	return 0;
}
*/
//////////////////////////////////////////////////////////// 4.SORU
/*
int Sondan_Karakter_Bul( char dizi[] , char aranan)
{
	int index=-1;;
	
	for(int  i=0 ; dizi[i]!='\0' ; i++)
	{
		if(dizi[i]==aranan)
		{
			index= i;
		}
	}
	
	return index;
}
	
int main()
{
		char dizi[]="ProgramlamaninTemeli";
	char aranan;
	
	int adet= sizeof(dizi)-1;
	
	printf("Cumle: %s\n",dizi);
	
	printf("aranan elemani girin:  ");
	scanf(" %c",&aranan);
	
	int index=Sondan_Karakter_Bul(dizi,aranan);
	
	if(index!=-1)
	{
		printf("aranan eleman sondan %d. siradadir",adet-index);
	}
	else
	{
		printf("aradiginiz eleman bulunamadi");
	}
	return 0;
}
*/
//////////////////////////////////////////////////////////// 5.SORU
/*char* Karakter_Degistirme(char* dizi , char degisen , char yenisi)
{
	for( int i=0 ; dizi[i]!='\0' ; i++)
	{
		if(dizi[i]==degisen)
		{
			dizi[i]=yenisi;
			
		}
	}
	
	return dizi;
	
}
	
int main(){
	char dizi[]={"galatasaray"};
	char degisen;
	char yenisi;
	
	printf("string ifade: %s\n",dizi);
	
	printf("degistirilecek karakter\n");
	scanf(" %c",&degisen);
	
	printf("yerine ne gelsin\n");
	scanf(" %c",&yenisi);
	
	
	char* yeni=Karakter_Degistirme(dizi,degisen,yenisi);
	
	printf("yeni string: %s",yeni);
	return 0;
}
*/

//////////////////////////////////////////////////////////// 6.SORU -------> bitmedii
/*
char* Kelime_Degistirme(char* string , char eski , char yeni)
{
	for( int i=0 ; string[i]!='\0' ; i++)
	{
		if(string[i]==eski)
		{
			string[i]=yeni;
			
		}
	}
	
	return string;
	
}	
	
int main()
{
		
	char string[]={"yazilimcilar kod yazar yaz aylarinda"};
	char eski;
	char yeni;
	
	printf("string ifade: %s\n",string);
	
	printf("degistirilecek karakter\n");
	scanf(" %c",&eski);
	
	printf("yerine ne gelsin\n");
	scanf(" %c",&yeni);
	
	
	char* yenistring=Kelime_Degistirme(string,eski,yeni);
	
	printf("yeni string: %s",yenistring);
	return 0;
}
	*/
	
	
//////////////////////////////////////////////////////////// 7.SORU	
//Varyans, verilerin ne kadar birbirinden uzak yani dagilmis olduklarini ölçer. 
//Hesaplanirken önce ortalama bulunur, 
//sonra tüm verilerin ortalama ile olan farklarinin kareleri alinarak toplanir ve çikan sayi toplam veri sayisina bölünür.	
	
//standrat sapma --> varyansin kareköküdür	
/*
double varyans_hesapla(const int* dizi , int N)
{
	double toplam=0;
	double ortalama,varyans=0.0;
	
	for(int i=0 ; i<N ;i++)
	{
		toplam+=dizi[i];
	}
	
	ortalama=toplam/N;
	
	for(int i=0 ; i<N ; i++)
	{
		varyans+=(ortalama-dizi[i])*(ortalama-dizi[i]);
	}
	varyans/=N;
	
	return varyans;
}

double standart_sapma_hesapla(const int* dizi , int N)
{
	double varyans=varyans_hesapla(dizi , N);
	
	return pow(varyans,0.5);
	
}

int main ()
{   
	srand(time(NULL));
	int dizi[100];
	int N,parametre;
	
	printf("dizi kac elemanli olsun??");
    scanf("%d",&N);
    
    for(int i=0 ; i<N ; i++)
    {
    	dizi[i]=rand()%10+1;
	}
	
	printf("dizi:");
	 for(int i=0 ; i<N ; i++)
    {
     	printf("%4d",dizi[i]);
	}
	printf("\n");
    printf("parametre gir( 0 veya 1):");
	scanf("%d",&parametre);	
	
	if(parametre==1)
	{
		double varyans=varyans_hesapla(dizi,N);
		printf("%lf",varyans);
	}
	if(parametre==0)
	{
		double standartsapma=standart_sapma_hesapla(dizi,N);
		printf("%lf",standartsapma);
	}
	
	
	return 0;
}
*/
//////////////////////////////////////////////////////////// 8.SORU	

/*N tane direnci rastgele paralel ya da seri yerlestirip es deger direnci bulan ve sonucu döndüren 
fonksiyonu yaziniz. N=4, hepsi paralel ya da hepsi seri olabilecegi gibi, 2 seri 2 paralel seklinde de 
siralanabilecektir. Tüm durumlari olusturabilecek bir tasarim olusturunuz.*/



//////////////////////////////////////////////////////////// 9.SORU	
/*Parametre olarak verilen N1 ve N2’ye göre rastgele olusturulan sirali iki diziyi yine sirali birlestirip 
döndüren fonksiyonu yaziniz.*/
/*
int* Dizi_Birlestirme(int* dizi1, int* dizi2, int N1, int N2 , int* dizi3)
{
	int i=0,j=0,k=0;
	while(i<N1)
	{
		dizi3[k++]=dizi1[i++];
		
	}
		while(j<N2)
	{
		
		dizi3[k++]=dizi2[j++];
	}
	
	return dizi3;
}





int main ()
{
	int dizi1[100],dizi2[100],dizi3[100];
	int N1,N2;
	srand(time(NULL));
	
	N1=rand()%5+1;
	N2=rand()%5+1;
	
	for(int i=0 ; i<N1 ; i++)
	{
		dizi1[i]=rand()%10+1;
	}
	
	for(int i=0 ; i<N1 ; i++)
	{
		printf("%4d",dizi1[i]);
	}
	
	printf("\n");
	
	for(int i=0 ; i<N2 ; i++)
	{
		dizi2[i]=rand()%10+1;
	}
	for(int i=0 ; i<N2 ; i++)
	{
		printf("%4d",dizi2[i]);
	}
		printf("\n");
		
		int* birlesim=Dizi_Birlestirme( dizi1,  dizi2,  N1,  N2 ,  dizi3);
	
	for(int i=0 ; i<N1+N2 ;i++)
	{
		
		printf("%4d",birlesim[i]);
	}
	
	return 0;
}
*/	
//////////////////////////////////////////////////////////// 10.SORU		
/*	
int parcalama(char string[], int baslangicIndex, int uzunluk)
{
	char yeni[uzunluk];
	int sayac=0;
	for(int i=baslangicIndex ; i<=baslangicIndex+uzunluk-1 ;i++)
	{
		yeni[sayac++]=string[i];
	}
	yeni[sayac]='\0';
	printf("yeni kelime : %s",yeni);
	return *yeni;
	
	
}

int main()
{
	char string[]={"yazilimcilar"};
	int  baslangicIndex;
	int uzunluk;
	
	printf("baslangic Index'i ne olsun");
	scanf("%d",&baslangicIndex);
	
	printf("kac harfli olsun");
	scanf("%d",&uzunluk);
	
	parcalama(string,baslangicIndex,uzunluk);
	

return 0;
}
*/

	



