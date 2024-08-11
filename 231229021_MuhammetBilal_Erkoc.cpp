#include<stdio.h>
#include<stdlib.h>
int main()
{
	int dizi[]={2,-2,7,3,4,-5,3,1};
	int adet,degisen,sayac=0,enbuyuk=0,gecici;
	
	adet=sizeof(dizi)/sizeof(int);
	
	printf("\nilk durum Dizi=");
	for(int i=0 ; i<adet ; i++)
	{
		printf("%4d",dizi[i]);
	}
	
	for(int i=0 ; i<adet ; i++)
	{
		if(dizi[i]<0)
		{
			degisen=dizi[i]*-1;
			printf("\n%d sayisi pozitif karsitiyla degistirildi",dizi[i]);
			dizi[i]=degisen;
		}	
	}
	
		printf("\nson durum Dizi=");
	for(int i=0 ; i<adet ; i++)
	{
		printf("%4d",dizi[i]);
	}
	
	printf("\n\nDizi=");
	for(int i=0 ; i<adet ; i++)
	{
		printf("%4d",dizi[i]);
	}

	for(int i=0 ; i<adet ; i++)       // bir tane sayi seciliyor
	{    
		for(int j=0 ; j<adet ; j++)   // secilen sayi haricinde bi sayi daha seciliyor
		{   
			if(dizi[j]>=dizi[i])       // ikisi karsilastiriliyor
			{
			    sayac++;              //secilen sayidan buyuk kac tane sayi oldugu sayiliyor
				
			}
			
		}
		
	  	if(sayac>=dizi[i])            // buyuk deger sayisi secilen sayidan buyuk esitse aliniyor
		{    
		   if(enbuyuk<dizi[i])          // alinan degerlerden en buyugu seciliyor
		   {
		   	 enbuyuk=dizi[i];
		   	 
		   } 
		} 
		sayac=0;
		
	}

		printf("\n\n");
 printf("1. Durum sonucu: %d",enbuyuk);
	
printf("\n\n");

     for(int i=0 ; i<adet ; i++)
     {
	   for(int j=i+1 ; j<adet ; j++)
	   {
	   	  if(dizi[i]<dizi[j])
	   	  {
	   	  	gecici=dizi[i];
	   	  	dizi[i]=dizi[j];
	   	  	dizi[j]=gecici;
		  }
	   }
     }	
  	
	int sayac2=0,enbuyuk2=0;
	

	for( int a=0 ; a<adet ; a++)
	{   
		for( int b=0 ; b<adet ; b++)
		{  
			if(dizi[b]>=dizi[a])
			{
				sayac2++;		
			}
		}
	
	    if(sayac2>=dizi[a])
		{
		    if(enbuyuk2<dizi[a])          
		    {
		   	   enbuyuk2=dizi[a];
		    }
					
		}
	  sayac2=0;
	}
	
	printf("2. Durum sonucu: %d",enbuyuk2);
	
	if (enbuyuk2==enbuyuk)
	{
		
		printf("\n\n3. Durum 1 ve 2. durumlardaki sonuclar esittir. Sonuc dogru.");
	}
	
	return 0;
}
