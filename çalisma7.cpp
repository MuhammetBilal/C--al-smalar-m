#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main()
{
	srand(time(NULL));
	/////////////////////////////////////////////SORU 1
/*	int n,sayi,enbuyuk=-1,enkucuk=101;
	float ort,toplam=0;
	
	n=rand()%9+2;
	
	int matris[n][n];
	
	for(int i=0 ; i<n ; i++)
	{
		
		for(int j=0 ; j<n ; j++)
		{
			sayi=rand()%100+1;
			matris[i][j]=sayi;
			toplam+=sayi;
			if(enbuyuk<sayi)
			{
				enbuyuk=sayi;
			}
				if(enkucuk>sayi)
			{
				enkucuk=sayi;
			}
		}
	}
	
		for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			printf("%4d",matris[i][j]);
		}
		printf("\n");
	}
	
	ort=toplam/(n*n);
	printf("\nenbuyuk: %d\n",enbuyuk);
	printf("enkucuk: %d\n",enkucuk);
	printf("ortalama: %.2f\n",ort);  */
	
	///////////////////////////////////////////  SORU 2
	
/*	int Nogrenci,Mders,sayi,toplam=0;
	
	
	Nogrenci=rand()%9+2;
	Mders=rand()%9+2;
	Mders++;
	double matris[Nogrenci][Mders],ortalama;
	
	
	for(int i=0 ; i<Nogrenci ; i++)
	{
		ortalama=0;
		for(int j=0 ; j<Mders-1 ; j++)
		{
			sayi=rand()%100+1;
			matris[i][j]=sayi;
			ortalama+=sayi;
			
		}
			ortalama=ortalama/(Mders-1);
			matris[i][Mders-1]=ortalama;
	}
	
	printf("\t     ");
	for(int i=0 ; i<Mders-1 ; i++)
	{
		printf("%d.DERS   ",i+1);
	}
	
	printf("\n");
	
		for(int i=0 ; i<Nogrenci ; i++)
	{
		    printf("%d. ogrenci   ",i+1);
		for(int j=0 ; j<Mders ; j++)
		{
			printf("%.2lf\t",matris[i][j]);
			
		}
		printf("\n");
	}
	*/
////////////////////////////////////////////////////3 . SORU	
/*
	int sayi=1,satir=4,sutun=9,faktoriyel=1,kendiussu=1,sayi2=1;
    int dizi[satir][sutun];
	
		sayi2=sayi;	
		
	for(int i=0 ; i<satir ; i++)
	{
		for(int j=0 ; j<sutun ; j++)
		{
			if(i==0)
			{  
				dizi[i][j]=j+1;
			}
			
			if(i==1)
			{   
				dizi[i][j]=(j+1)*(j+1);
			}
			
			if(i==2)
			{   
			    faktoriyel=1;
				for(int k=1 ; k<=sayi ; k++)
				{
					faktoriyel*=k;
				}
				dizi[i][j]=faktoriyel;
				sayi++;
			}
			
				if(i==3)
			{   
			    kendiussu=1;
			    for(int k=0 ; k<sayi2 ; k++)
			    {
			    	kendiussu*=sayi2;
				}
				dizi[i][j]=kendiussu;
				sayi2++;
			}
		    
		}	
	}

   for(int i=0 ; i<satir ; i++)
   {
   	  for(int j=0 ; j<sutun ; j++)
   	  {
   	  	printf("%d  \t",dizi[i][j]);
	  }
	  printf("\n");
   }
	*/
	
	/////////////////////////////////////////////////////////////4. SORU
/*	
	int N,sayi;
	N=3;
	int dizi[N][N];
	
	for(int i=0 ; i<N ; i++)
	{   
		for(int j=0 ; j<N ; j++)
		{
			sayi=rand()%100+1;
			dizi[i][j]=sayi;
		}
	}
	
	
	printf("ILK HALIII\n");
	for(int i=0 ; i<N ; i++)
	{
		for(int j=0 ; j<N ; j++)
		{
			printf("%4d",dizi[i][j]);
		}
		printf("\n");
	}
	
	int gecici;
		for(int i=0 ; i<N ; i++)
	{
		for(int j=0 ; j<N ; j++)
		{
			if(i==j)
			{
				gecici=dizi[i][j];
				dizi[i][j]=dizi[N-1-i][j];
				dizi[N-1-i][j]=gecici;
			}
		}
		
	}
		 
	
		printf("SON HALIII\n");
	for(int i=0 ; i<N ; i++)
	{
		for(int j=0 ; j<N ; j++)
		{
			printf("%4d",dizi[i][j]);
		}
		printf("\n");
	}
	
*/	
////////////////////////////////////////////////////////// 5.SORU
/// 1.resim  
/*  int N=5,sayi,sayac=0,j=0;
   int dizi[N][N];
       sayi=1;
   do
   { 
      for(int i=0 ; i<N ; i++)
      {
		dizi[i][j]=sayi;
		sayi++;
      }
        j++;
	  if(!(sayi<N*N-1))
	  {
	 	break;
	  }
	 
	 for(int i=N-1 ; i>=0 ; i-- )
	 {
	 	dizi[i][j]=sayi;
		sayi++;
	 }	
	j++;
    }while(sayi<N*N-1);


    for(int i=0 ; i<N ; i++)
    {
	   for(int j=0 ; j<N ; j++)
	   {
	     printf("%4d",dizi[i][j]);
	   }
	     printf("\n");
    } */
 //// 2.RESIM
 /*
  int N=5,sayi=1,j=N-1;
   int dizi[N][N]; 
   
   do
   {
   	
   	 for(int i=N-1 ; i>=0 ; i--)
     {
   	   dizi[i][j]=sayi;
   	   sayi++;
     }
     j--;
     
    if(!(sayi<N*N))
     {
     	break;
	 }
	 
	 for(int i=0 ; i<N ; i++)
	 {
	 	dizi[i][j]=sayi;
	 	sayi++;
	 }
   	  j--;
   }while(sayi<N*N-1);
   
    
for(int i=0 ; i<N ; i++)
    {
	   for(int j=0 ; j<N ; j++)
	   {
	     printf("%4d",dizi[i][j]);
	   }
	     printf("\n");
    } 
    */
/////////////////////////////////////////// SORU 6
/*
   int sayi=1,N=3;
   int matris[N][N];

   for(int i=0 ; i<N ; i++)
   {
   	 for(int j=0 ; j<N ; j++)
   	 {
   	 	matris[i][j]=sayi;
   	 	sayi++;
	 }
   }
       printf("ILK DURUM\n");
    for(int i=0 ; i<N ; i++)
   {
   	 for(int j=0 ; j<N ; j++)
   	 {
   	   printf("%4d",matris[i][j]);
	 }
	 printf("\n");
   }

    sayi=1;
       for(int i=0 ; i<N ; i++)
   {
   	 for(int j=0 ; j<N ; j++)
   	 {
   	 	matris[j][i]=sayi;
   	 	sayi++;
	 }
   }
   
       printf("\nSON DURUM\n");
    for(int i=0 ; i<N ; i++)
   {
   	 for(int j=0 ; j<N ; j++)
   	 {
   	   printf("%4d",matris[i][j]);
	 }
	 printf("\n");
   }
*/
 ////////////////////////////////////// SORU 7
 /*
  int N=3,sayi,M;
  
  M=N*N;
  
  int matris[N][N],dizi[M],sayac=0,sayacpozitif=0,sayacnegatif=0;
  
  do
  { sayacpozitif=0;
    do
    {
    	do
    	{
    		sayi=rand()%21-10;
		}while(sayi<=0);
		
      dizi[sayac]=sayi;
      sayacpozitif++;
      sayac++;	
	}while(sayacpozitif<N);
	
	
    if(sayac>=M)
    {
    	break;
	}
    sayacnegatif=0;
    do
    {
      do
      {
      	sayi=rand()%21-10;
	  }while(sayi>=0);
	  
	  dizi[sayac]=sayi;
	  sayacnegatif++;
      sayac++;
      
		
	}while(sayacnegatif<N);
	
  }while(sayac!=M);
  
  
  printf("dizi\n");
   for(int i=0 ; i<M ; i++)
  {
   printf("%4d",dizi[i]);
  }
  int indis=0;
 for(int i=0 ; i<N ; i++)
 { 
   for(int j=0 ; j<N ; j++)
   { 
     matris[i][j]=dizi[indis];
	 	indis++;
	 }
   	
   }
    
 
   printf("\nmatris\n");
   for(int i=0 ; i<N ; i++)
 { 
   for(int j=0 ; j<N ; j++)
   {
   	 printf("%4d",matris[i][j]);
   }
   printf("\n");
 }
*/













	
	
	
	
	
	
	
	
	
	
	return 0;
}
