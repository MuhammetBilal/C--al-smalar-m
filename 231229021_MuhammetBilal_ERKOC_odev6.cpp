#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main ()
{
	srand(time(NULL));
	int sayi,n1,n2,sayac1=0,sayac2=0;
	
	
	n1=rand()%8+3;
	n2=rand()%8+3;
	
int dizi1[n1],dizi2[n2],yedek1[n1],yedek2[n2];
	

	do                            /// 1. dizi
	{
		sayi=rand()%21-10;
		
		if(sayi!=0)
		{
			dizi1[sayac1]=sayi;
			yedek1[sayac1]=sayi;
			sayac1++;
		}
			
	}while(n1!=sayac1);
	printf("DIZILER ILK DURUM\n");
	printf("Dizi1:");		
	for( int i=0 ; i<n1 ; i++)
	{
	 	printf("%d,",dizi1[i]);
	}
	
	
	
	
		do                        /// 2. dizi
	{
		sayi=rand()%21-10;
		
		if(sayi!=0)
		{
			dizi2[sayac2]=sayi;
			yedek2[sayac2]=sayi;
			sayac2++;
		}
			
	}while(n2!=sayac2);
	
	printf("\nDizi2:");		
	for( int i=0 ; i<n2 ; i++)
	{
		printf("%d,",dizi2[i]);
	}
	
int index,sayac=0,sayacgenel=0;
	
	    index=rand()%n2;
	
int mutlaksayi,rastgele;
	
	   rastgele=dizi2[index];
	 mutlaksayi=rastgele;
	if(rastgele<0)
	{
		mutlaksayi=rastgele*-1;
	//	printf(" mutlak %d",mutlaksayi);
	}
	
printf("\n\nDizi2 den %d. eleman %d rastgele alindi\n\n",index+1,rastgele);
printf("\t\t----->START GAME<-----\n\n");
	do
	{
		do                  ////////////// 2.dizi
		{
			if(rastgele<0)
			{
				index--;
			}
			if(rastgele>0)
			{
				index++;
			}
			
			if(index<0)
			{
				index=n1;
				break;
			}
			if(index>=n2)
			{
				index=-1;
				break;
			}
			if(dizi2[index]!=0)
			{
				sayac++;
			}
		
			if(mutlaksayi==sayac)
			{
				rastgele=dizi2[index];
				printf("cikan sayi dizi2'deki %d. eleman: %d\n",index+1,rastgele);
				dizi2[index]=0;
				    printf("dizi2: ");
					for(int i=0 ; i<n2 ; i++)
	                {
		              printf("%d,",yedek2[i]);
	                }
	                printf("\n");
	                printf("dizi1: ");
					for(int i=0 ; i<n1 ; i++)
	                {
		              printf("%d,",yedek1[i]);
	                }
	                printf("\n\n");
				sayacgenel++;
				sayac=0;
				mutlaksayi=rastgele;
				if(mutlaksayi<0)
				{
					mutlaksayi*=-1;
				}
			//	printf("%d",dizi2[index]);
			}
			
		}while(sayacgenel!=(n1+n2-1));
	  	
		
		do                              //////1. dizi
		{
			if(rastgele<0)
			{
				index--;
			}
			if(rastgele>0)
			{
				index++;
			}
			
			if(index<0)
			{
				index=n2;
				break;
			}
			if(index>=n1)
			{
				index=-1;
				break;
			}
			if(dizi1[index]!=0)
			{
				sayac++;
			}
		
			if(mutlaksayi==sayac)
			{
				rastgele=dizi1[index];
		        printf("cikan sayi dizi1'deki %d. eleman: %d\n",index+1,rastgele);
				dizi1[index]=0;
				    printf("dizi1: ");
					for(int i=0 ; i<n1 ; i++)
	                {
		              printf("%d,",yedek1[i]);
	                }
	                printf("\n");
	                printf("dizi2: ");
					for(int i=0 ; i<n2 ; i++)
	                {
		              printf("%d,",yedek2[i]);
	                }
	                printf("\n\n");
				sayacgenel++;
				sayac=0;
				mutlaksayi=rastgele;
				if(mutlaksayi<0)
				{
					mutlaksayi*=-1;
				}
			}
		//	printf("%d",dizi2[index]);
			
		}while(sayacgenel!=(n1+n2-1));
	
			
		
	}while(sayacgenel!=(n1+n2-1));
	
	
	printf("\n");

	for(int i=0 ; i<n1 ; i++)
	{
		if(dizi1[i]!=0)
		{
			printf("Dizi1 deki %d. eleman %d oyunu KAZANDI\n",i+1,yedek1[i]);
		}
		
	}
   
		for(int i=0 ; i<n2 ; i++)
	{
		if(dizi2[i]!=0)
		{
			printf("Dizi2 deki %d. eleman %d oyunu KAZANDI\n",i+1,yedek2[i]);
		}
		
	}	
	
		printf("\n\n\t\t----->FINISH GAME<----- ");
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
