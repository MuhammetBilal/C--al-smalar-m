#include<stdio.h>
#include<stdlib.h>
int main()
{  

  // -------------bir sayi girilecek.program  1 den girilen sayiya kadar olan sayilari toplayacak.----------------

/* int i,sayi,toplam;
  
  printf("bir sayi girin:");
  scanf("%d",&sayi);
  
  for (i=1 ; i<=sayi ; i++){
  	
  	toplam = toplam + i;
  }
   
    printf("1'den %d'e kadar olan sayilarin toplami: %d",sayi,toplam);
*/    
    
 
  //                              ---------tek ve cift sayilari yazan program:-----------
/*  
  int a;
   printf("cift sayilar:") ;
  for (a=0 ; a<=20 ; a=a+2){
   
    printf("%d ",a);
  }
   printf("\ntek sayilar:") ;
  for (a=1 ; a<=20 ; a+=2){
  	printf("%d ",a);
  }
*/



/*  //                             ----------------- while dongusu ------------------------
  
  int b; 
  
  while (b<7){
  	
  	printf("  %d\n",b);
  	b++;	
  }
  
  // ornekk
  
  int c,d;
  printf("bir sayi giriniz.");
  scanf("%d",&c);
  
  while (d<=10){
  	printf("%d\n",d*c);
  	d++;
  }*/
  
                                     // 0 dan 10 a kadar olan tek ve cift sayilari bastir.
  
/*  int d=0, e=1;
  printf("cift sayilar\n");
  while (d<=10){
  	printf("%d \n",d);
  	d+=2;
  	
  	
  }
  printf("\ttek sayilar\n");
  while (e<=10){
  	printf("\t%d\n",e);
  	e+=2;
  } */

                                     // 10 dan baslayarak birer birer azaltarak 1 e kadar yaz.
                                     
  int f=10;
  
  while (f>=1){
  	printf("%d\n",f);
  	f-=1;
  }



















return 0;
}
