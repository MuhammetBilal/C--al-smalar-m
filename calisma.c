 #include<stdio.h>
 #include<string.h>
int main ()
{
/*	float sayi=(float)9/4;  // parantez içindeki floati yazmazsak 9 ile 4 int bir deger old
	 						// için sonucuda int olarak algilayip 2.25 degil 2 olarak basacaktir.
	printf("%f\n",sayi);
	
	
	int i;                 // Alfabeyi yazdirma 
	
	for(i='a';i<='z'; i++)
	{
		printf("%c\t",i);
	}
	
	
	printf("\n%d\t %d\t %d\t %d\t %d\t",'a','b','c','#','q');  // harf degerleriyle sayi yazdirma
	
	
	
   // cok boyutlu sayi dizileri	
	
	 
	 int dizi[3][2]={{1,2},{3,4},{5,6}};
	 
	 printf("%d",dizi[0][1]);
	 
	 
	 
   // matris	 
	 
	 int i,j,matris[10][10];     // matris atama
	 
	 for(i=0 ; i<10 ; i++)
	 {
	 	
	 	for (j=0 ; j<10 ; j++)
	 	{
	 	  	
	 	   if(i==j)
	 	    {
	 	      matris[i][j]=1;	
		    }
		   else
		    { 
		      matris[i][j]=0;
		    } 	
		}
	 	
	 }
	 
	 
	  for(i=0 ; i<10 ; i++)      // bastirma
	 {
	 	
	 	for (j=0 ; j<10 ; j++)
	 	{
	 	  	
	 	   printf("%2d",matris[i][j]);
		}
	 	   printf("\n");
	 }
	 
	 
	 //  matris toplama ornek
	 
	 int dizi1[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	 int dizi2[3][4]={{3,4,5,1},{7,1,9,2},{1,2,3,4}};
	 int toplam[3][4];
	 int i,j;
	 for (i=0 ; i<3 ; i++)
	 {
	 	
	 	for ( j=0 ; j<4 ; j++)
	 	{
	 		
	 	  toplam[i][j]=dizi1[i][j]+dizi2[i][j];	
	 		
		}
	 	
	 	
	 }
	 
	 
	 	 for (i=0 ; i<3 ; i++)
	    {
	 	
	 	   for ( j=0 ; j<4 ; j++)
	 	   {
	 		
	 	     printf("%4d",toplam[i][j]);	
	 		
		   }
	 	
	 	       printf("\n");
	    }
	 
	 
	 // calisma 5 10. soru
	 
	 
int dizi[10][10];
int i,j,sayac=0,sayi=1,enbuyuk=0,a;

for(i=0 ; i<10 ; i++)
{
	
	for(j=0 ; j<10 ; j++)
    {       
           	dizi[i][j]=sayi*7;
    		sayi++;
    		sayac++;
    		
    		if(sayac==100)
    		{ break;
			}
	}
    	
	}
	
	

	 
	 
	 for(i=0 ; i<10 ; i++)
{
	
	for(j=0 ; j<10 ; j++)
    {
       printf("%4d",dizi[i][j]);
	}
	
	printf("\n");
}
	 
	  // 3 boyutlu sayi dizisii

 
 int dizi[2][3][2];
 int i,j,k;
	 
	 printf("12 adet sayi giriniz.");
	 
	 for(i=0 ; i<2 ; i++)
	 {
	 	for(j=0 ; j<3 ; j++)
	 	{
	 		for(k=0 ; k<2 ; k++)
	 		{   
	 			scanf("%d",&dizi[i][j][k]);
			 }
		}
	 }
	 
	
	 for(i=0 ; i<2 ; i++)
	 {
	 	for(j=0 ; j<3 ; j++)
	 	{
	 		for(k=0 ; k<2 ; k++)
	 		{
	 		   printf("dizi[%d][%d][%d] = %d\n",i,j,k,dizi[i][j][k]);
			 }
		}
	 }
	
	// karakter dizilerii
	
	
 
	
	
	
	
	
	
	
	
	return 0;
}
