#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int main(void)
{
  /*  printf(" Merhaba Dunya\n");

    // \n alt satira gecirir.

    printf(" \"Bu benim ilk programim.\"\n");

    // \"...\" tirnak icine alir

    // ..... satirlar arasini yorum satirina alir.


	
     int (4 bytes) | %d
       double (8 bytes) | %lf --> buyuk sayilar icin
       float (4 bytes) | %f --> ondalikli sayilar icin
       char (1 bytes)  | %c  --> tek karakter
                       | %e --> bilimsel gösterim
                       | %g --> %e ve %f'den hangisi kisaysa onu kullanir
                       | %s --> dizgi (string)
                       | %u --> isaretsiz ondalik (usigned decimal)
                       | %x --> hexadecimal (on altilik sayi sistemi)

       
	
    int rakamim=4;
    printf("\n%d",rakamim);

    int main(void);
    printf("\nBenim dogum gunum:");
    int sayim =2;
    int sayim2=30;
    double sayim3=42004;
    printf("%d%d%.0lf",sayim,sayim2,sayim3);

    float a = 1.4;
    printf("\n%.3f\n",a);

    double b =10000;
    printf("\n%.2lf",b);  

     /*Yüzdeden sonra .2 koyarsak virgülden sonra kaç basamak
       yazacagini gösterir. ÖRN: %.2 vb. */

  /* char c ='M';
    printf("\nKarakterim:%c",c);

    int sayi1;
      printf("\nLutfen bir sayi giriniz!\n");
      scanf("%d",&sayi1);
      printf("Aldigimiz sayi:%d",sayi1);

    float sayi2;
      printf("\nlutfen bir sayi giriniz!\n");
      scanf("%f",&sayi2);
      printf("2.sayim:%.0f",sayi2);

    double sayi3;
     printf("\nLutfen bir sayi giriniz!");
     scanf("%lf",&sayi3);
     printf("3.sayim:%.0lf",sayi3);

    char karakter;
     printf("\nLutfen bir karakter giriniz!");
     scanf("\n%c",&karakter);
     printf("karakterim:%c",karakter);

     //bu islem girdiyi alir hemen ardindan ciktiyi verir.

    int ilksayim;
    float ikincisayim;
    char basharf;

    printf("\nLutfen ilk sayiyi giriniz\n");
    scanf("%d",&ilksayim);

    printf("Lutfen ikinci sayiyi giriniz\n");
    scanf("%f",&ikincisayim);

    printf("Lutfen bas harfi giriniz\n");
    scanf("\n%c",&basharf);

    printf("Ilk sayim:%d Ikinci sayim:%f Bas harfim:%c",ilksayim,ikincisayim,basharf);

    //bu islem ilk once girdileri alir sonra ciktilari verir.

    int muhammet;
    printf("\nmuhammet degiskeni hafizada %d byte kadar yer kaplar.\n", sizeof(muhammet));
    printf("int degiskeni hafizada %d byte kadar yer kaplar.\n", sizeof(int));
    printf("char degiskeni hafizada %d byte kadar yer kaplar.\n", sizeof(char));
    printf("float degiskeni hafizada %d byte kadar yer kaplar.\n", sizeof(float));
   // printf("scanf degiskeni hafizada %d byte kadar yer kaplar.\n", sizeof(scanf));
    printf("double degiskeni hafizada %d byte kadar yer kaplar.\n", sizeof(double));

    //bu islem yazilan seylerin hafizada ne kadar yer kapladigini gosterir.

    const int sayim5 = 15;
    printf("%d",sayim5);

    // asagida en basa "#define PI " yazildiginda pi sayisini veren örnek yazilidir.

    printf("\n%.2f",PI); 

    /* ARITMETIC OPERATOR --> atama operatorleri

        + - * / 
		% (sayinin herhangi bi sayiya bölümünden kalani verir) 
		++ (sayiyi sadece 1 arttirir) 
		-- (sayiyi sadece 1 azaltir)

    */
   /* printf("aritmetik operator");
    int p=25;
    p+=5;
    p*=3;
    p/=10;
    p%=9;
    p++;
    printf("\n%d",p);
    
    
    int x=20, y=5;
    int sonuc;
   
    printf("\ntoplama islemi(basit)=%d",x+y);

    float yaricap=10;
    float sonuc2;
    
    printf("\ndairenin cevresi%.3f",yaricap*2*PI); */
    
    /* COMPARISON OPERATORS--> karsilastirma operatörleri
    
    == (esit mi) 
	!= (esit degil mi) 
	< (kucuk mu) 
	> (buyuk mu)
	<= (kucuk esit mi) 
	>= (buyuk esit mi)
    */
    
/*	printf("\n\nkarsilastirma operatorleri");
    int g=14, h=20;
    printf("\ng=14 , h=20");
    printf("\ng, h ye esit mi?= %d",g == h);
    printf("\ng, h den kucuk esit mi?= %d",g<= h);
    
    /* logical operators --> mantiksal operatörler
    && (ve anlamina gelir)
    || (veya anlamina gelir)
    !  (tersi, deðili anlaminagelir)
    */
  /*  printf("\n\nmantiksal operatorler");
    int A=80, B=90;
    printf("\nA=80 , B=90");
    printf("\nA<B ve A>70 = %d",A<B && A>70);
    printf("\nA>B veya A>70 = %d",A>B || A>70);
    
    int X;
    int Y;
	
	printf("\n\nX sayisini giriniz.\n");
	scanf("%d",&X);
	
	printf("Y sayisini giriniz.\n");
	scanf("%d",&Y);
	
	// if, else if, else yapilari
	
	if (X>Y)
	 {
	  printf("X, Y den buyuktur.\n");
	 } 
	 
	 else if (X==Y)
    {
     printf("X, Y ye esittir.\n");
    } 

     else
    {
     printf("X, y den kucuktur.\n"); */
	
	
	// 3 sayi arasindan en büyügünü bulma
	
/*	int W,Z,D;
	printf("3 tane sayi giriniz.\n");
	scanf("%d%d%d",&W,&Z,&D);
	
	if(W>Z && W>D)
	{
		printf("%d sayisi en buyuktur.",W);
	}
	
	if(Z>W && Z>D)
	{
		printf("%d sayisi en buyuktur.",Z);
	}
	
	if(D>Z && D>W)
	{
		printf("%d sayisi en buyuktur.",D);
	}
	
	if(W==Z && Z==D)
	{
		printf("Hepsi biribirine esittir.");
	}
	
	
	int vize1, vize2, final,ort;
	printf("Lutfen vize1 notunuzu girin.");
	scanf("%d",&vize1);	
	
	printf("Lutfen vize2 notunuzu girin.");
	scanf("%d",&vize2);
	
	printf("Lutfen final notunuzu girin.");
	scanf("%d",&final);
	
	printf("vize1=%d\nvize2=%d\nfinal=%d",vize1,vize2,final);
	
    ort=(vize1+vize2+final)/3;
    printf("\nOrtalaman=%d",ort);

	if (ort<50)
	{ printf("\nOrtalaman 50 den dusuk daha cok ders calis");
	}
	else if (ort<80)
	{ printf("\n daha iyisini yapabilirsin");
	}
	else 
	{ printf("\nsupersin");
	}
	
	
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
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	





    return 0;
}
