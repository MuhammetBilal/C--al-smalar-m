#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int main()
{
/*	char dizi[100];
	char dizi2[100];
	int adet;
	
	printf("kelime giriniz\n");
	gets(dizi);
	
	
	adet=strlen(dizi);
	
	
	for(int i=0 ; 0<adet ; i++)
	{
		dizi2[i]=dizi[adet-i-1];
		printf("%s",dizi2[i]);
		
	}
	dizi2[adet] = '\0';

*/	
	
	
/////////////////////////////////////////////////
/*2. Kullanici tarafindan girilen string ifade içinde yine kullanici tarafindan girilen n. elamandan baslamak ve 
sonlandirmak üzere girilen string ifadenin n sayisina göre palindrom olup olmadigini bulunuz.
Not: Palindrom bastan ve sondan kontrol edildiginde tüm karakterleri sirasiyla ayni olan string ifadelerdir. Strlen 
fonksiyonu kullanabilirsiniz.
Örnek1: abcdcbt 2. elemandan itibaren kontrol edilecek ise;
bcdcb bastan ve sondan esit oldugu için seçilen ifade palindromdur.
Örnek2: aKbcdcbRt 3. elemandan itibaren kontrol edilecek ise;
bcdcb yine bastan ve sondan esit oldugu için seçilen ifade palindromdur**/
/*
 char string[30];
    printf("Girdi girin : ");
    scanf("%s",&string);
    int adet=strlen(string);
    int baslangic,bitis;
    printf("kacinci elemandan baslasin");
    scanf("%d",&baslangic);
    
    int flag=1;
    for (int i = baslangic; i < adet-baslangic+1; i++)
    {
        if (string[i]!=string[adet-i-1]){
            flag=0;
            break;
        }
    }

    if (flag==1){
        printf("Palindrome.\n");
    }else{
        printf("Palindrome degil.\n");
    }
	*/
//////////////////////////////////////////////////////////////////3.SORU----> bitti
/*	Kullanici tarafindan girilen string ifadede her kelime ‘_’ ile ayrilmis olup bu string ifadenin kaç kelimeden 
olustugunu bulunuz.*/
/*	
		char dizi[100];
		int adet=0,sayac=0;
		
		printf("her kelimenin arasina '_' girerek cumle giriniz. \n");
		scanf("%s",&dizi);
		
		
			while(dizi[adet]!='\0')
	{
	  adet++;	
		
	}
		
		for(int i=0 ; i<adet ; i++)
		{
			if(dizi[i]=='_')
			{
				sayac++;
			}
		}
		printf("'%s' --> %d kelimedir.",dizi,sayac+1);

*/
///////////////////////////////////////////////////// 4.SORU-----> bitti

/*	4. Kullanici tarafindan girilen iki string ifadeyi karsilastiran ve (küçük, büyük veya esit seklinde) sonuç
döndürünüz. Not: Strcmp kullanilmayacaktir.
Str1: “ali”, Str2: “alc” Sonuc: str1 str2’den buyuktur. 
Str1: “ali”, Str2: “alz” Sonuc: str1 str2’den kucuktur.*/
/*
  char dizi[100],dizi2[100];
  int adet,adet2,deger=0,deger2=0;
  printf("string ifade giriniz.\n");
  scanf("%s",&dizi);
  
  adet=strlen(dizi);
  
  for(int i=0 ; i<adet ; i++ )
  {
  	 int temp=dizi[i];
  	 deger+=temp;
  	 
  }
	
  printf("1. dizinin ASCII degeri %d\n",deger);	
  	
  printf("2. string ifadeyi giriniz\n");
  scanf("%s",&dizi2);	
	
  adet2=strlen(dizi2);
  
  for(int i=0 ; i<adet2 ; i++)
  {
  	int temp=dizi2[i];
  	deger2+=temp;
  }	
	
  printf("2. dizinin ASCII degeri %d\n",deger2);	
	
	if(deger>=deger2)
	{
		printf("'%s', '%s' den buyuktur.\n",dizi,dizi2);
	}
	else
	{
		printf("'%s', '%s' den buyuktur.\n",dizi2,dizi);
	}
	
	*/
	
//////////////////////////////////////////////////////////////// 5.SORU
/*Bir metinde bastan sona (bir sonraki > bir önceki) kaç tane kendisinden büyük karakter oldugunu bulunuz.
Örnek: “abcdezmf” Sonuc: b>a, c>b, d>c, e>d, z>e seklinde 5 adet bu kurala uygun karakter dizisi vadir.*/
/*
  char dizi[100],adet,sayac=0,deger1,deger2;
   
   printf("string bir ifade giriniz.");
   scanf("%s",dizi);
   
   adet=strlen(dizi);
   
   for(int i=0 ; i<adet ; i++)
   {
   	 if(dizi[i+1]>dizi[i])
   	 {
   	 	sayac++;
	 }
   }	
	
	printf("%d tane var",sayac);
*/	
//////////////////////////////////////////////////// 6.SORU ------> bitti

 /* Kullanici tarafindan girilen bir string dizisini yine kullanicinin belirtmis oldugu n. elemandan itibaren kesen ve 
bu olusan yeni iki stringi iki ayri string dizisine gönderiniz.
Örnek: “kolaygelsin”, Kullanici 5 girerse; 5. Elemandan itibaren bölersek;
5. eleman ‘g’ oldugu için str1=”kolay”, str2=”gelsin” olacaktir.	*/

   
/*  char dizi[30],dizi1[30],dizi2[30];
   
   int n,adet;
   
  printf("string ifade giriniz\n");
  // scanf("%s",&dizi);
	gets(dizi);
	
	printf("\nkacinci harften itibaren baslamak istiyorsunuz\n");
	scanf("%d",&n);
	
	adet=strlen(dizi);
	
	for(int i=0 ; i<n ; i++)
	{
		dizi1[i]=dizi[i];	
	}
	
	for(int i=n ; i<adet ; i++)
	{
		dizi2[i-n]=dizi[i];
	}
    printf("str1: '%s'\n",dizi1);
    printf("str2: '%s'",dizi2);  */
	
/////////////////////////////////////////////////////////////////// 7.SORU---->	
	
/*	Kullanici tarafindan girilen string ifadede her kelime ‘_’ ile ayrilmis olup bu string ifadeden olusan kelimeleri 
bir matris yapisina gönderiniz.
Örnek: “ali_veli_sami_sukru” Sonuc: 4 olacaktir.*/
	
/*	char dizi[100],matris[100][100];
	int adet,sayac=0;
	printf("aralarinda '_' olacak sekilde string ifadeler gir: ");
	scanf("%s",dizi);
	
	adet=strlen(dizi);

    int j=0;
	
	for(int i=0 ; i<adet ; i++)
	{
		if(dizi[i]!='_')
		{
			matris[j][i]=dizi[i];
			printf("%s",dizi[i]);
		}
		else
		{
			j++;
			printf("\n");
		}
	}	
    
    */
    ///////////////////////////////////////////////////////////////////// 8. soru
    


	srand(time(NULL));
	int N=10,i,j,temp,temp2,sayac=0;
	
    char dizi[N][N];
    
    for(i=0;i<N;i++)
    {
    	for(j=0;j<N;j++)
    	{
    		temp=rand()%4;
    		if(temp==0)
    		{
    			dizi[i][j]='J';
			}
			if(temp==1)
    		{
    			dizi[i][j]='A';
			}
			if(temp==2)
    		{
    			dizi[i][j]='V';
			}
			if(temp==3)
    		{
    			dizi[i][j]='A';
			}
		}
	}
	for(i=0;i<N;i++)
    {
    	printf("\n");
    	for(j=0;j<N;j++)
    	{
    		printf("%c ",dizi[i][j]);
    	}
    }
	
	for(i=0;i<N;i++)
    {
    	for(j=0;j<N-3;j++)
    	{
    		if(dizi[i][j]=='J' &&dizi[i][j+1]=='A' && dizi[i][j+2]=='V' && dizi[i][j+3]=='A') 
    		{
    			sayac++;
			}
    	}
    }
    for(i=0;i<N;i++)
    {
    	for(j=0;j<N-3;j++)
    	{
    		if(dizi[i][j+3]=='J' &&dizi[i][j+2]=='A' && dizi[i][j+1]=='V' && dizi[i][j]=='A') 
    		{
    			sayac++;
			}
    	}
    }
    for(i=0;i<N-3;i++)
    {
    	for(j=0;j<N;j++)
    	{
    		if(dizi[i][j]=='J' &&dizi[i+1][j]=='A' && dizi[i+2][j]=='V' && dizi[i+3][j]=='A') 
    		{
    			sayac++;
			}
    	}
    }
    for(i=0;i<N-3;i++)
    {
    	for(j=0;j<N;j++)
    	{
    		if(dizi[i+3][j]=='J' &&dizi[i+2][j]=='A' && dizi[i+1][j]=='V' && dizi[i][j]=='A') 
    		{
    			sayac++;
			}
    	}
    }
    for(i=0;i<N;i++)
    {
    	for(j=0;j<N;j++)
    	{
    		if(dizi[i][j]=='J' &&dizi[i+1][j+1]=='A' && dizi[i+2][j+2]=='V' && dizi[i+3][j+3]=='A') 
    		{
    			sayac++;
			}
    	}
    }
    for(i=0;i<N;i++)
    {
    	for(j=0;j<N;j++)
    	{
    		if(dizi[i+3][j+3]=='J' &&dizi[i+2][j+2]=='A' && dizi[i+1][j+1]=='V' && dizi[i][j]=='A') 
    		{
    			sayac++;
			}
    	}
    }
    
	
	
	printf("sayac=%d",sayac);
	
	

    
 /////////////////////////////////////////////////////////////////////// 9. soru   
 /*   int N=5;//DÝNAMÝK YAPIDADIR,KELÝME VE N DEÐÝÞTÝRÝLEBÝLÝR.
	char kelime[]="sampiyonCIMBOM",matris[N][N];
	int ihareket[4]={0,1,0,-1};
	int jhareket[4]={1,0,-1,0};
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			matris[i][j]='-';
		}
	}
	int i=0,j=0,islem=0,sayac=0,boyut=0;
	while(kelime[boyut]!='\0'){
		boyut++;
	}
	int adim=0;
	do{
		while(0<=i && i<N && 0<=j && j<N && matris[i][j]=='-'){
			matris[i][j]=kelime[adim++];
			sayac++;
			i+=ihareket[islem];
			j+=jhareket[islem];
			if(adim==boyut){
				adim=0;
			}
		}
			i-=ihareket[islem];
			j-=jhareket[islem];
		islem++;
		if(islem==4){
			islem=0;//baþtaki harekete dönüyor
		}
			i+=ihareket[islem];
			j+=jhareket[islem];
	}while(sayac<N*N);
	for(int a=0;a<N;a++){
		printf("\n");
		for(int b=0;b<N;b++){
			printf("%3c",matris[a][b]);
		}
	}
  */
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
