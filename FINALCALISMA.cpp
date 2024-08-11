#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
int buyukkucukharfdegistirme(char dizi[])
{
	int i=0;
	while(dizi[i]!='\0')
	{
		if(dizi[i]>='A' && dizi[i]<='Z')
		{
			dizi[i]=dizi[i]+32;
		}
		else if(dizi[i]>='a' && dizi[i]<='z')
		{
			dizi[i]=dizi[i]-32;
		}
		i++;
	}
	printf("metin: %s",dizi);
	
}


int main()
{
	char dizi[100];
	
	printf("cumle gir:  ");
	gets(dizi);
	
	buyukkucukharfdegistirme(dizi);
	return 0;
}
*/
/*
int asalsayilartoplami(int sayi1, int sayi2 , int toplam)
{
	
	toplam=0;
	for(int i=sayi1 ; i<sayi2 ; i++)
	{
		int kontrol=1;
		for(int j=2 ; j<i ; j++)
		{
			if(i%j==0)
			{
				kontrol=0;
			}
		
		}
		if(kontrol==1)
		{
			toplam+=i;
			
		
		}
	}
		printf("asal sayilar toplami: %d",toplam);
	return toplam;
}


int main()
{
	int sayi1,sayi2,toplam=0;
	
	printf("iki tane sayi giriniz (sayi1<sayi2): ");
	scanf("%d%d",&sayi1,&sayi2);
	
	asalsayilartoplami(sayi1,  sayi2 ,  toplam);
}
*/
/*
//BUYUK KUCUK HARF SAYISI
int buyukkucukharfdegistirme(char dizi[],int sayac , int sayac1)
{
	int i=0;
	while(dizi[i]!='\0')
	{
		if(dizi[i]>='A' && dizi[i]<='Z')
		{
			sayac++;
		}
		else if(dizi[i]>='a' && dizi[i]<='z')
		{
			sayac1++;
		}
		i++;
	}
	printf("buyuk harf  sayisi: %d\n",sayac);
	printf("kucuk harf  sayisi: %d\n",sayac1);
}


int main()
{
	char dizi[100];
	int sayac=0,sayac1=0;
	
	printf("cumle gir\n");
	gets(dizi);
	
	buyukkucukharfdegistirme(dizi,sayac,sayac1);
	return 0;
}

*/
/*
int main ()
{
/*	
	srand(time(NULL));
	
	int matris[5][5],enbuyuk=0,enkucuk=23;
	
	for(int i=0 ; i<5 ; i++)           /////doldurma
	{
		for(int j=0 ; j<5 ; j++)
		{
			matris[i][j]=rand()%50+1;
		}
	}
	
	for(int i=0 ; i<5 ; i++)       /////yazdirma
	{
		for(int j=0 ; j<5 ; j++)
		{
		printf("%4d",matris[i][j]);	
		}
		printf("\n");
	}
	int  esatir,esutun,satir,sutun;
	for(int i=0 ; i<5 ; i++)
	{
		for(int j=0 ; j<5 ; j++)
		{
			if(enbuyuk<matris[i][j])
			{
				enbuyuk=matris[i][j];
				satir=i;
				sutun=j;
				
			}
			else if(enkucuk>matris[i][j])
			{
				enkucuk=matris[i][j];
				esatir=i;
				esutun=j;
			}	
		}
	}
	satir++;
	sutun++;
	esatir++;
	esutun++;
	printf("enbuyuk %d. satirin %d. sutunundeki %d\n",satir,sutun,enbuyuk);
	printf("enkucuk %d. satirin %d. sutunundeki %d",esatir,esutun,enkucuk);
*/	
/*	
	int dizi[50],sayi,ortkucuk[50],ortbuyuk[50],sayackucuk=0,sayacbuyuk=0;
	double ortalama,toplam=0;
		srand(time(NULL));
	for(int i=0 ; i<50 ; i++)
	{
		sayi=rand()%10;
		toplam+=sayi;
		dizi[i]=sayi;
	}
	ortalama=toplam/50;
		for(int i=0 ; i<50 ; i++)
	{
	    if(dizi[i]>=ortalama)
	   {
	   	ortbuyuk[i]=dizi[i];
	   	sayacbuyuk++;
	   	
	   }
	   if(dizi[i]<ortalama)
	   {
	   	ortkucuk[i]=dizi[i];
	   	sayackucuk++;
	   }
	}
	
		for(int i=0 ; i<50 ; i++)
	{
		printf("%d. sayi %d\n",i+1,dizi[i]);
	}
	
	printf("toplam: %lf \n",toplam);
	printf("ortalama: %lf \n",ortalama);
		
	printf("ortalamadan buyukler\n");
	for(int i=0 ; i<sayacbuyuk ; i++)
	{
		printf("\n%d",ortbuyuk[i]);
	}
		
	printf("\n");	
	printf("ortalamadan kucukler\n");
	for(int i=0 ; i<sayackucuk ; i++)
	{
		printf("%d",ortkucuk[i]);
	}
	*/
	/*
	for(int i=1 ; i<7 ; i++)               // tabandaki yildiz sayisi satir sayisinin iki katinin 3 eksigi  2*i-3
	{
		for(int j=0 ; j<10-i ; j++)
		{
			printf(" ");
		}
		
		for(int k=0 ; k<2*i-1 ; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	*/
/*
	
	int dizi[100],sayi=1,toplam=0,sayac=0;
	
	while(sayi<82)
	{
		dizi[sayac]=sayi;
		toplam+=sayi;
		sayi+=2;
		sayac++;
	}
	
    printf("toplam %d",toplam);
	*/
/*	
	int dizi[]={2,1,1,0,2,1,1,2,10};
	int boyut,puan=0;
	
	boyut=sizeof(dizi)/sizeof(int);
	for(int i=0 ; i<boyut ; i++)
	{
		if(dizi[i]==2)
		{
		  puan+=3;	
		}
		if(dizi[i]==1)
		{
		  puan+=0;
		}
		if(dizi[i]==0)
		{
			puan+=1;
		}
	}
	 
	 if(puan<12)
	 {
	 	printf("hadi TRT SPOR da izliyelim sizi. PUAN: %d",puan);
	 }
	 else
	 {
	 	printf("beIN SPORTS a para vermeye devam. PUAN: %d",puan);
	 }
	*/
/*	
   int ust,alt;
   
  printf("ust degeri girin");
   scanf("%d",&ust);
   printf("alt degeri gir");
   scanf("%d",&alt);
   
   double faktoriyel=1;
   for(int i=1 ; i<=ust ;i++ )
   {
   	  faktoriyel*=i;
   }	
	
 //  printf("ust %.2lf\n",faktoriyel);	
	
	double faktoriyel2=1;
   for(int i=1 ; i<=alt ;i++ )
   {
   	  faktoriyel2*=i;
   }
	
//	printf("alt %.2lf\n",faktoriyel2);
	
	
		double faktoriyel3=1;
   for(int i=1 ; i<=(ust-alt) ;i++ )
   {
   	  faktoriyel3*=i;
   }
	
//	printf("fark %.2lf\n",faktoriyel3);
	
	double kombinasyon;
	
	kombinasyon=faktoriyel/(faktoriyel2*faktoriyel3);
	
	printf("%2lf",kombinasyon);
*/
/*
  int sayi,N=5,sayac=0,kontrol=1;
  
  for(int i=0 ; sayac<N ; i++)
  { 
     sayi=rand()%100+1;
     int asalmi=1;
  	for(int j=2 ; j<sayi ; j++)
  	{
  		if(sayi%j==0)
  		{
  			asalmi=0;
  			
  			if(kontrol==0)
  			{
  				printf("asal olmayan sayi: %d\n",sayi);
  				kontrol++;
			}
		}	
	}
	if(asalmi==1)
	{
		sayac++;
		if(kontrol==1)
		{
			printf("asal sayi: %d\n",sayi);
			kontrol--;
		}
	}
  }
  */
  /*	
	int sayi,N=5,sayac=0,kontrol=0;
	
	for(int i=0 ; sayac<5 ; i++)
	{
		int tekmi=1;
		
		sayi=rand()%100+1;
		if(sayi%2==0)
		{
			tekmi=0;	
		}
	    
		 if(tekmi==1)
		{
			if(kontrol==0)
			{
			  printf("teksayi: %d\n",sayi);
			  kontrol++;
			  
			}
		}
		
		
		else if(tekmi==0)
		{
			sayac++;
		  if(kontrol==1)
		  {
		  	printf("ciftsayi: %d\n",sayi);
		    kontrol--;
	
		  }
		}	
	}
*/	
/*
	int matris[10][10],sayi,enbuyuk=0,enkucuk=101;
	double ortalama=0;
	for(int i=0 ; i<10 ; i++)
	{
		for(int j=0 ; j<10 ; j++)
		{
			sayi=rand()%100+1;
			matris[i][j]=sayi;
			ortalama+=sayi;
			
			if(enbuyuk<matris[i][j])
			{
				enbuyuk=matris[i][j];
			}
			
			if(enkucuk>matris[i][j])
			{
				enkucuk=matris[i][j];	
	     	}
	     }
	}
		for(int i=0 ; i<10 ; i++)
	    {
		   for(int j=0 ; j<10 ; j++)
		   {
		      printf("%4d",matris[i][j]);
	       }
	       printf("\n");
	    }
	ortalama/=10;
	printf("ortlama: %.2lf\n",ortalama);
	printf("enbuyuk: %d\n",enbuyuk);
	printf("enkucuk: %d\n",enkucuk);
*/
/*
int dizi[29];
	for (int i = 0; i < 29; i++)
	{
		dizi[i] = 0;
	}
	char string[32]="bu mesaj butun ktunlulere";
		printf("%s \n",string);
	for (int i = 0; i < 29; i++)
	{
     	if (string[i]>='a'&& string[i]<='z')
		 {
		 dizi[string[i]%97]+=1;
	    }
	if (string[i]>='A'&&string[i]<='Z'){
		dizi[string[i]%65]+=1;
	}
	}

	for (int i = 0; i < 29; i++)
	{
	//	printf("%d \n",dizi[i]);
	}
	
	for(int i=0;i<29;i++){
	printf("%c harfinden %d tane var\n",i+65,dizi[i]);
	}



///////////////////////////////// harf kacinci siradadir.
	char character;
  int sira;
  
  printf("enter character");
  scanf("%c",&character);
  
  if(character>='A' && character<='Z')
  {
  	sira=(int)character-(int)'A'+1;
  	
  }
  else if(character>='a' && character<='z')
  {
  	sira=(int)character-(int)'a'+1;
  }
  else
  {
  	printf("please 	enter character");
  }
  
  printf("character %d. siradadir.",sira);
 
	
	return 0;
}
*/


























