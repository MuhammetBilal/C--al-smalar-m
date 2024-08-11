#include<stdio.h>
int main()
{
/* int sayi1,sayi,listegirilen[32],listearti[32],listeeksi[32],sayaceksi=0,sayacarti=0,sayacgirilen=0;

	printf("kac tane sayi gireceksiniz.:");
	scanf("%d",&sayi1);
	
	do {
		printf("sayi giriniz.: ");
		scanf("%d",&sayi);
		listegirilen[sayacgirilen]=sayi;
		sayacgirilen++;
		
	if(sayi<0)
	{ 
	  listeeksi[sayaceksi]=sayi;
	  sayaceksi++;
	 
	}
	 if (sayi>0)
	 { 
	   listearti[sayacarti]=sayi;
	   sayacarti++;
	   
	 }	
			
	}while(sayacgirilen!=sayi1);

    printf("Girilen sayilar= ");
    
    for (int i=0 ; i<sayacgirilen ; i++)
    { printf("%d\t",listegirilen[i]);
	}
	printf("\n");
	printf("Pozitif sayilar= ");
	
	for(int i=0 ; i<sayacarti ;i++)
	{ printf("%d\t",listearti[i]);
	}
	
	printf("\n");
	
	printf("Negatif sayilar= ");
	
	for(int i=0 ; i<sayaceksi ;i++)
	{ printf("%d\t",listeeksi[i]);
	}										

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
*/	
/*	int sayi,liste[32],sayac=0;
float toplam=0;
do
{ 
 printf("sayi giriniz");
 scanf("%d",&sayi);

if (sayi>0)
{
  liste[sayac]=sayi;
  	toplam+=sayi;
  sayac++;
}

  }while(sayi!=-1);
   toplam/=sayac;


  for(int i=0 ; i<sayac ; i++)
  { printf("%d\t",liste[i]);
  }
   printf("\nortalama %f",toplam);     */
	
/*	int sayac=0,sayilar[5];

 
 
  for(int i=11 ; i<100 ; i++)
  {
  	if(i%2!=0 && i%3==0)
  	{ 
	  sayilar[sayac]=i;
	 
	  sayac++;
	  }
	  if(sayac==5)
	  {break;
	  }
  }
  
  for (int i=4 ; i>=0 ; i--)
  { printf("%d\t",sayilar[i]);
  	
  }				*/	
  
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////					
  
	//100 sayisindan küçük çift ve 3’e bölünmeyen ilk 10 adet tam sayiyi diziye alan ve küçükten
//büyüge yazdiran program kodunu 
/*
int sayilar[10],sayac=0,gecici;
 
	for (int i=100 ; i>0 ; i--)
	{ 
	  if(i%2==0 && i%3!=0)
	  { sayilar[sayac]=i;
	    sayac++;
	    
	  }
		if(sayac==10)
		{ break;
		}
	}

    for(int i=0 ; i<10 ; i++)
    { 
        for(int j=i+1 ; j<11 ; j++)
        {
        	if(sayilar[i]>sayilar[j])
        	{
        	   gecici=sayilar[i];
        	   sayilar[i]=sayilar[j];
        	   sayilar[j]=gecici;
        	    
			}
		}
	}			

	for(int i=0 ; i<10 ; i++)
	{
		printf("%d\t",sayilar[i]);
	}
	
					*/
					
////////////////////////////////////////////////////////////////////////////////////////////////////////////////					
							
/*	
	 int sayi,sayilar[]= { 10,15,20,33,22,11,9,8,48,47,12,25,12,21 },i=0;	
   
   printf("sayi giriniz");
   scanf("%d",&sayi);
  int sira=0;
  
  for ( i=0 ; i<14 ;i++)
  {
    
   if(sayilar[i]==sayi)
   { 
   printf("sayi bu dizide vardir.%d.sirada bulunmatadir\n",i+1);
   }
   sira++;
  }
	                                                                        
	*/
	
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
	
	/* int sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 };
Yukaridaki sayi dizisinde yan yana kaç tane çift sayi ikilisi oldugunu bulan program 
kodunu yaziniz. 20-60, 24-26, 50-30, 30-40 seklinde 4 adet olarak ekrana yazdirilacaktir. */

/* int adet,sayac=0,sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 };
  
  adet=sizeof(sayilar)/sizeof(int);
  
  
  for(int i=0 ; i<adet ; i++)
  { 
     
	 if( sayilar[i]%2==0 && sayilar[i+1]%2==0 )
     { printf("%d-%d,\t",sayilar[i],sayilar[i+1]);
	   sayac++;
	 }
	 
  }
  
  printf("seklinde %d adet ekrana yazdirilacaktir.",sayac); */

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
/*	int sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 };
Yukaridaki sayi dizisinde çift sayilari tek sayiya (kendinden bir sonraki sayiya) çeviren 
program kodunu yaziniz. 20->21, 60->61 seklinde olacaktir */

/*	int arti,sayi,sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 };
	
	sayi=sizeof(sayilar)/sizeof(int); 
	 
	for(int i=0 ; i<sayi ; i++)
	{
		if(sayilar[i]%2==0)
		{ 
		  arti=sayilar[i]+1;
		  printf("%d->%d\t",sayilar[i],arti);
		}
	} 													*/	
	
	/*	int sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 };
sayiukaridaki sayi dizisinde indisleri tek olan sayilarin ortalamasini bulan ve ortalamadan 
büsayiük olan (sadece tek indisli) sayilari ekrana sayiazdiran program kodunu sayiaziniz. 
Not: indis 0 ile baslar. 20 sayisi 0. Indistedir. 60, 42, 24 gibi sayilar isleme tabi tutulmalidir. */
	
/*	int adet,sayilar[]= {20,60,45,42,23,24,26,125,66,55,145,50,30,40};
	float ort,toplam=0;
	
	adet=sizeof(sayilar)/sizeof(int);
	
	for(int i=0 ; i<adet ; i++)
	{ 
	  if (i%2!=0)
	  { toplam+=sayilar[i];
	  }
	}
	
	ort=toplam/(adet/2);
	printf("%.2f",ort);
	return 0; 					*/	
	
	/*	int sayilar[]= { 1, 6, 5, 2, 1, 4, 2 };
Yukaridaki sayi dizisinde kullanici tarafindan girilen sayiya denk gelen dizi içerisindeki 
sayilarin yerlerine -1 yerlestiren ve bu islemi tüm dizideki elemanlar -1 olana kadar devam 
ettiren ve böylece kaç farkli sayi oldugunu bulan program kodunu yaziniz.
Örnek: 2 girildi. Dizi: [1, 6, 5, -1, 1, 4, -1]
 4 girildi. Dizi: [1, 6, 5, -1, 1, -1, -1]
 5 girildi. Dizi: [1, 6, -1, -1, 1, -1, -1] …. Dizi: [-1, -1, -1, -1, 1, -1, -1]
Sonuç: 5 farkli sayi bulunmaktadir. */
	
	int sayac=0,sayi,adet,sayilar[]= { 1, 6, 5, 2, 1, 4, 2,2,4 };
	
	adet=sizeof(sayilar)/sizeof(int);
	

	
while(sayac!=adet)
{

    printf("\n\nsayi giriniz.");
	scanf("%d",&sayi);
  	for(int i=0 ; i<adet ; i++)
  	{ 
  	
	
	  if(sayi==sayilar[i])
  	  { sayilar[i]=-1;
  	  sayac++;  	  
	  }

	}
	printf("%d girildi. Dizi: ",sayi);
	
			for(int i=0 ; i<adet ; i++)
     { printf(" %d ",sayilar[i]);
     }
}
printf("\n\n%d adet sayi degistirilmistir.\n",sayac);	


return 0;	
}
