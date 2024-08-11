	#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	
/*	// 1. soru (en buyuk sayiyi bulma)
	
	int sayi,a,liste[10],enbuyuk;
	for(a=0;a<10;a++){
		printf("%d. sayiyi girin.",a+1);
		scanf("%d",&sayi);
		liste[a]=sayi;
	
	
}
	enbuyuk=liste[0];
	for(a=1;a<10;a++){
		if(enbuyuk<liste[a]){
			enbuyuk=liste[a];
		}
	}
	printf("en buyuk sayi:%d",enbuyuk);
  
  */
  // 2. soru (en buyuk 2. sayiyi bulma)
/*	
	int number,i,sayilar[10],buyuk,buyuk2;
	for(i=0;i<10;i++){
		printf("%d. sayiyi giriniz.",i+1);
		scanf("%d",&number);
		sayilar[i]=number;	 
	}
	int yerdegistirme,j;
	for(i=0;i<10;i++){
		
		for (j=i+1; j<10; j++){
			if (sayilar[j]>sayilar[i]){
				yerdegistirme=sayilar[i];
				sayilar[i]=sayilar[j];
				sayilar[j]=yerdegistirme;
			}
		}	
	}
		printf("siralanis\n");
    for (i=0; i<10 ; i++){
    
    	printf("%d\t",sayilar[i]);
	}
	printf("\n\nen buyuk 2.sayi=%d",sayilar[1]);
  
  */
  // 3.soru ( mukemmel sayi )
 /*
  int sayi,bolum,bol,toplam=0;
  printf("sayi girin");	
  scanf("%d",&sayi);
  printf("sayi=%d\n ",sayi);
  
  for (bol=1; bol<=sayi; bol++ ){
  	
  	bolum= sayi % bol;
  	if(bolum==0){
  		toplam+=bol;
  		
  		printf("tam sayi bolenleri =%d\n",bol);
  		
		  }
	
	  
  }  
      printf("\ntam bolenlerin toplami=%d\n\n",toplam-sayi);
		  if (toplam-sayi==sayi){
  			printf("SAYI MUKEMMEL SAYIDIR.");
  		
	  }
*/	
    // 4.SORU 
 /*   
    int sayi,sayi2,bolen,bolum,toplam;
    
    printf("sayi girin=");
    scanf("%d",&sayi);
    
    for (sayi2=0; sayi2<sayi;sayi2++){
    	
    	printf("%d\n",sayi2);
    	
	}

    */
   //       -----------5.soru-----------
   /*
  int sayi1,sayi2,sayac,i,j;
  
  printf("iki tane sayi gir.");
  scanf("%d%d",&sayi1,&sayi2);
  
  printf("\n%d. sayi ile %d. arasindaki asal sayilar\n",sayi1,sayi2);
  
  for(i=sayi1 ; i<=sayi2 ; i++ ){
  	sayac=0;
  	for (j=2 ; j<i ; j++){
  		if (i%j == 0){
  			sayac++;
		  }
	  }
	  if (sayac == 0 && sayi1!=0 && sayi1!=1){ 
	  printf("%d\n",i);
	  
	  }
  }
	 */
	 
	 //            -------------6. soru-------------
	 
	 
/*	 
	 	int sayi,a,liste[10],enbuyuk,enkucuk,sonuc;
	for(a=0;a<10;a++){
		printf("%d. sayiyi girin.",a+1);
		scanf("%d",&sayi);
		liste[a]=sayi;	
}
	enbuyuk=liste[0];
	for(a=1;a<10;a++){
		if(enbuyuk<liste[a]){
			enbuyuk=liste[a];
			
		}
	
	}
	printf("en buyuk sayi:%d\n",enbuyuk);
	 
	enkucuk=liste[0];
	for (a=1 ; a<10 ; a++){
		if(enkucuk>liste[a]){
			enkucuk=liste[a];
		}
	} 

	printf("en kucuk sayi:%d\n",enkucuk);
	sonuc=enbuyuk-enkucuk;
	printf("fark%d",sonuc); 
*/	 
	
	// --------------------7. SORU------------------	
/**	
	int sayi,i,a=0;
	
   do {
   	printf("bir sayi giriniz.");
   	scanf("%d",&sayi);
   	
   	for (i=2 ; i<sayi ; i++){
   		
   		if (sayi%i==0){
   			break;
		   }
		   
		   
	   }
   	if (sayi!=i){
		   	a=a+1;
		   }
   }while (sayi!=i);
   	printf("%d kadar sayi girildi.",a);
  
  */
  //                               ---------------8. soru--------------
  /*
  int sayi,basamak=0;
  
  printf("sayi giriniz.");
  scanf("%d",&sayi);
  
  while(sayi>0){
  	sayi= sayi/10;
  	basamak++;
  }printf("sayi %d basamaklidir.",basamak);
  	*/
  	
  //					  ------------------------9. soru------------------------
 /* int a,dizi[10],bas=0,b=1;
  printf("sayi giriniz");
  scanf("%d",&a);
  while(a>0)
  {
  	dizi[b]=a%10;
  	a-=dizi[b];
  	a/=10;
  	bas++;
  	b++;
  }
  int i;
for(i=1;i<=bas;i++){
  	  printf("%d",dizi[i]);
  	
  } */
  
  //                     ---------------10.soru--------------
  /*
  int x,sayac=0;
  printf("sayi giriniz.");
  scanf("%d",&x);
  int yedek;
  yedek=x;
  while (x>0){
  	
  	x= x /10;
  	sayac++;
  	
  }
  int sonuc;
  
   sonuc=pow(10,sayac)-1;
   
   
   printf("Girilen deger: %d, sayi %d basamakli oldugu icin Sonuc:%d",yedek,sayac,sonuc);
  */
  
  //  ----------------------11.soru--------------------------
  
 /*
  int sayi,sayi1,sayi2,a=0;
  
  do{
  	
  	printf("sayi giriniz.");                                        BITMEDI
  	scanf("%d",&sayi);												             BITMEDI
  	sayi1=sayi;													                          	BITMEDI
  																                                         	BITMEDI
  	
	  if (sayi>sayi1){
  		printf("buyuktur");}
	  a++;
  }	while (sayi!=0);
  printf("%d",a-1);
  */

  
  // ------------------12. soru----------------------
  /*
  int i,j	;
  
  for (i=1 ; i<=5 ; i++ ){ 
  	
  	for (j=0 ; j<2*i-1 ; j++){ 
			printf("*");
}
   printf("\n");
}
  	*/
  	
  	// -----------------------------------13.SORU------------------------------
	int i,j,k; 
  	for (j=1 ; j<=5 ; j++){
  	
	  for (i=1 ; i<=5-j ; i++)
	  {
	  	printf(" ");
	  }
  	  for (k=0 ; k<2*j-1 ; k++)
	  {
  		
  		printf("*");
	  }
	  printf("\n");	
	  }  
	  
	  // 14.soru
/*	 int a,b,c;
	  for (a=1 ; a<=5 ; a++){
	  	for (b=1 ; b<=5 ; b++){
	  		
	  		if (a==1 || b==1 || a==5 || b==4){
	  			printf("*");
			  }
	  		
		  }
	  	printf("\n");
	  }
	  
	  //  15.soru,
/*	  
	  int sayi,sayac;
	  
	  do{
	  	printf("bir sayi giriniz.");
	  	scanf("%d",&sayi);
	  	
	  	if(sayi>9 && sayi<100){
	  		sayac++;
		  }
	  	
	  }while (sayi!=-1);
	  printf("girilen iki basamakli sayi %d tanedir.",sayac);
  	
  	*/
  	
                              // 16.soru 
/*	
   int sayi ;
 
 printf("sayi giriniz.");
 scanf("%d",&sayi);
 
 for (int i=sayi ; i>0 ; i--){
 	
 	int sonuc=pow(sayi,sayi);
 	
 	printf("sonuclar%d, ");
 }
*/
  /////////////17.soru
  
/*  int taban, us ,i,kuvvet=1,sonuc=0;
	
	printf("taban giriniz\n");
	scanf("%d",&taban);
	printf("us giriniz\n");
	scanf("%d",&us);
	for ( i=0 ; i<us ; i++)
	{
	kuvvet*=taban;	
	 sonuc=kuvvet;
	 
	}
	printf("sonuc %d^%d den =%d",taban,us,sonuc);
	*/
	///////////////////18.soru
	/*
	int sayi,sonuc,sayac=0,i,asalmi;
   
   	printf("sayi giriniz");
   	scanf("%d",&sayi);
   
   
   	while(sayac<3){
	
	 asalmi=1;  
   	sayi--;
   for (i=2 ; i<sayi ; i++){
   	
   	
   	if(sayi%i==0){//asal deðilse
   		asalmi=0;
	   }

   }
if(asalmi==1){//sayi asal ise
	sayac++;	
}
}
printf("%d",sayi);
    */
/////////////////////////////19. soru
/*
 int a,b,c,d,sonuc,i;	
	
	
	for(i=9999 ; i>0 ; i--){
	int y=i;
	a=y%10;
	y/=10;
	b=y%10;
	y/=10;
	c=y%10;
	y/=10;
	d=y;
	
	
	
	if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d )
	{ printf("%d",i);break;
	}
	
	
	
	
}*/
///////////////////////////// 20 .soru

	
	
	
	
	
	
	








	
	
	
	
	
	
	
	
return 0;	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

