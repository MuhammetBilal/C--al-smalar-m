#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
             

{ srand(time(NULL)); 

////////////////////////////////////////// calisma sorusu 1
	srand(time(NULL));
/*	
	int N,sayi,sayac=0;
	float ort,toplam=0,sayi2;
	
	N=10;
	
	int dizi[N];
	
	for (int i=0 ; i<N ; i++)
	{   sayi=rand()%101;
	    dizi[i]=sayi;
	    toplam+=sayi;
	//	printf("\n%d",sayi);
	}
	
	printf("\nTOPLAM= %.0f",toplam);
	
	toplam/=N;
	ort=toplam;
	printf("\nORTALAMA= %.3f",ort);
	
	printf("\nilk durum");
	for(int i=0 ; i<N ; i++)
	{
		printf("\n%d",dizi[i]);
	}
	
	
	for(int i=0 ; sayac<N ; i++)
	{   
	   // sayi2=rand()%101;
	 sayi2=rand()%101;
		if(dizi[i]<ort)
		{   
		    
		     
			if(sayi2<ort)
			{
				break;
				
			}
			else
			{
			  dizi[i]=sayi2;
			  sayac++;
			}  
		} 
		
		else
		{
			continue;
		}
	}
	
	printf("\nson durum");
	for(int i=0 ; i<N ; i++)
	{
		printf("\n%d",dizi[i]);
	}
	    */                      
	                              
	///////////////////////////////////////////////// 2.soru
/*	
    float sayi,enbuyuk=0.0,enkucuk=1.0,Y;
    int N,gecici,X;
    
    N=rand();
    int dizi[N];
    
    for(int i=0 ; i<10 ; i++)
    {
	  sayi=((float)rand()/10);

     //  printf("%f\n",sayi);
       
       X=sayi;
       Y=sayi-X;
       printf("float %.5f\n",Y);
       
       if(enbuyuk<Y)
       {
       	 enbuyuk=Y;
	   }
	   if(enkucuk>Y)
	   {
	   	enkucuk=Y;
	   }
    }
 
    printf("en buyuk: %f",enbuyuk);
	printf("\nen kucuk : %f",enkucuk);  */
///////////////////////////////////////////////////// 3.soru
/*
 srand(time(NULL)); 
  int N,sayi,sayac=0;
  
  N=rand();
  
  for(int j=0 ; sayac<N ; j++)
  {
  	int asalkontrol=1;
  	sayi=rand();
  	
  	for(int i=2 ; i<sayi ; i++)
  	{
  		if(sayi%i==0)
  		{   
  		    asalkontrol=0;
  		    break;	
		}
	
	}
		
	   if(asalkontrol==1)
  	   {
  		   sayac++;
  		    printf("asal sayilar: %d \n",sayi);
	   }
  } 
 */
//////////////////////////////////////////////////// 4.soru
/*
 int N=rand()%13+1,sayac=0;
int dizi[N];
int sayi;

dizi[sayac]=5;
printf("uretilecek olan sayi adeti %d\n",N);

do{
	sayi=rand()%61+70;
    dizi[sayac+1]=sayi;
      
	  if(abs(dizi[sayac]-dizi[sayac+1])>=5)
	  {
	    printf("%d. sayi=%d\n",sayac+1,dizi[sayac]);
	    sayac++;
      }     
}while(sayac<10); 
 */
 ///////////////////////////////////////////////////// 5.soru

/*

	srand(time(NULL));
int N=rand()%13+1,sayac=0;
double dizi[N];
double sayi;
	  sayi=rand()%101+20;
	  sayi/=100;
dizi[sayac]=sayi;
printf("uretilecek olan sayi adeti %d\n",N);
  do{
	  sayi=rand()%101+20;
	  sayi/=100;
	 // printf("sayi %f\n",sayi);
      dizi[sayac+1]=sayi;
     if(abs(dizi[sayac]-dizi[sayac+1])<=0.1)
	   {
	    printf("%d. sayi=%.2lf\n",sayac+1,sayi);
	   sayac++;
       }
}while(sayac<N);

 */
    
//////////////////////////////////////////////////// 6. soru
/*
  int sayi,N,gecici,enkucuk=101;
  N=rand();
  int dizi[N];
  
  
  for(int i=0 ; i<N ; i++)
  {
  	sayi=rand()%101;
  	dizi[i]=sayi;
  //	printf("%d\n",sayi);
  	 
  	 for(int j=0 ; j<N ; j++)
  	 {
  	 	
  	 	
  	 		if(dizi[j]>dizi[i])
  	 		{
  	 		   	gecici=dizi[j];
  	 		   	dizi[j]=dizi[i];
  	 		   	dizi[i]=gecici;
			}
		
	 }
  }
	
  for(int i=0 ; i<N-1 ; i++)
  {
  	printf("%d\n",dizi[i]);
  }	
	*/
	
///////////////////////////////////////// 7. soru
/*
int sayi,N,gecici,enkucuk=101;
  N=rand();
  int dizi[N];
  
  for(int i=0 ; i<100 ; i++)
  {
  	sayi=rand()%101;
  	dizi[i]=sayi;
  
  	 
  	 for(int j=0 ; j<100 ; j++)
  	 {
  	 		if(dizi[j]<dizi[i])
  	 		{
  	 		   	gecici=dizi[j];
  	 		   	dizi[j]=dizi[i];
  	 		   	dizi[i]=gecici;
			}
		
	 }
  }
	
  for(int i=0 ; i<100 ; i++)
  {
  	printf("%d\n",dizi[i]);
  }		
	
  	*/
//  Sirasiyla bir tek ve bir çift olmak üzere [1-100] araliginda N adet rastgele sayi üretiniz.	////////////////////////8. soru
/*
	int N,sayi,sayac=0;
	
	N=rand();
	
	for(int i=0 ; i<N ; i++)
	{
		int tekmi=1;
		
		sayi=rand()%100+1;
		
		if(sayi%2==0)
		{
		  tekmi=0;
		}
		
		if(tekmi==1)
		{   if(sayac==0)
		    {
			  printf("teksayi: %d\n",sayi);
			  sayac++;
		    }
				
		}
		
		else if(tekmi==0)
		{
		  if(sayac==1)
		  {
		  	printf("cift sayi: %d\n",sayi);
		  	sayac--;
		  } 
		}
		
		
		
	}
	*/
	//. Sirasiyla bir asal ve bir asal olmayan olmak üzere [1-100] araliginda N adet rastgele sayi  üretiniz. //////////////. 9.soru
/*	
	int sayi,N,sayac=0,kontrol=1;
	
	N=10;
	
	for(int i=0 ; sayac<N ; i++)
	{
		sayi=rand()%101+1;
		
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
		{   sayac++;
		    
		    if(kontrol==1)
		    {
		    		printf("asal sayi: %d\n",sayi);
		    		kontrol--;
			}
		}
		
		
	}  
*/	
 /////////////////////////////////////////////////////////// 10.soru
/*
srand(time(NULL));

int N=rand()%24+2,min=-10,max=10;

N*=2;//çift olmasý gerektiði için

printf("sayi adeti =%d\n",N);

int dizi[N],index,sayi,sayac=0;

bool kontrol[N];//dizideki elemanýn boþluðunu kontrol etmek içindir.true ise boþ,false ise dolu anlamýndadýr.

for(int i=0;i<N;i++){//dizinin tüm elemanlarý boþ olduðundan hepsi true ile dolduruldu.
	kontrol[i]=true;
}

do{
	sayi=rand()%(max-min+1)+min;//genel denklem budur.
	index=rand()%N;
	if((kontrol[index] && sayi>0 && index%2==0)||(kontrol[index]&& sayi<0 && index%2!=0)){//sayac in tek/çiftliðine göre bi +,bi - sayý alýnýyor.
		kontrol[index]=false;
		dizi[index]=sayi;
		sayac++;
	}
}while(sayac<N);

for(int i=0;i<N;i++){//dizinin ilk halini yazdýrýyor
	printf("%d,",dizi[i]);
}
printf("\n");

int toplam=0,enbuyuk=min;

for(int i=0;i<N/2+1;i++){//N/2 saymaya nereden baþlayacaðýný gösteriyor//N
	toplam=0;
 	for(int  j=i;j<(i+N/2);j++){// i indexten baþlayýp N/2 adet sayi toplamak için
 		toplam+=dizi[j];
	 }		
 	if(enbuyuk<toplam){
 		enbuyuk=toplam;
	 }
}

for(int i=0;i<N/2+1;i++){//N/2 saymaya nereden baþlayacaðýný gösteriyor//N
	toplam=0;
 	for(int  j=i;j<(i+N/2);j++){// i indexten baþlayýp N/2 adet sayi toplamak için
 		toplam+=dizi[j];
	 }		
 	if(enbuyuk==toplam){
 		for(int j=i;j<(i+N/2);j++){
 			printf("%d\n",dizi[j]);
}
		
	}
}
*/

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
