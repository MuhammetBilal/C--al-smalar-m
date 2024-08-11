#include<string.h>
#include<stdio.h>
int main()
{
/*	 char dizi[]="muhammet bilal";
	
	printf("%s",dizi);
	
// yer degistirme
	
dizi[7]='d';                         
printf("\n");
printf("%s",dizi);	
	


 // srtlen ----> hafizada ne kadar yer tutuyor 
 
char dizim[]="Muhammet Bilal ERKOC";        

printf("%s",dizim);	
printf("\ndizimizin boyu %d",strlen(dizim));	
	

	
// strlwr ----> dizinin butun elemanlarini kucuk harfle yazar
// strupr ----> dizinin butun elemanlarini buyuk harfle yazar	

// gets ----> scanf islevi gorur ama cok fazla tavsiye edilmez ---> gets(atanandeger);
// fgets ----> de scanf görevi görur tavsiye edilir  ----> fgets(atanandeger,sizeof(atanandeger),stdin);

char dizi[100];

printf("lutfen bir yazi giriniz.");
fgets(dizi,sizeof(dizi),stdin);        

printf("%s",strlwr(dizi));            // dizinin elemanlarinin hepsini kucuk harle yazdi

printf("%s",strupr(dizi));	          // dizinin elemanlarinin hepsini buyuk harle yazdi
		

// strcmp ----> girilen karakterleri ASCII tablosuna gore karsilastirip buyukse 1 kucukse 0 degerini verir
	
char dizi[15]="abcdef";
char dizim[15]="ABCDEF";
int sonuc;

sonuc=strcmp(dizi,dizim);

printf("%d\n",sonuc);

if (sonuc>0)
{
   printf("dizi dizimden daha buyuktur"); 
}	
	
else if (sonuc<0)
{
	printf("dizi dizimden daha kucuktur");
}

else 
{
	printf("ikiside birbirine esittir");
}
	


// strcmp ----> girilen karakterlerin ilk n tanesini ASCII tablosuna gore karsilastirip buyukse 1 kucukse 0 degerini verir	
	
char n[]="abcdef";
char m[]="ABCDEF";
int sonuc;

sonuc=strncmp(n,m,4);

printf("%d",sonuc);	
	
	
// strcopy ----> bir dizideki karakterleri diger diziye kopyalar 

char m[]="benim adim bilal";
char n[100];

strcpy(n,m);

printf("%s",n);	
	


// strncpy ----> bir dizideki n tane elemani diger diziye kopyalar

char bilal[]="merhaba";
char muhammet[100];

strncpy(muhammet,bilal,5);

printf("%s",muhammet);	
	


// strcat ----> dizilerdeki elemanlari bos bir diziye aktarir

char bos[100];
	
	strcat(bos,"benim ");
	strcat(bos,"adim ");
	strcat(bos,"Muhammet Bilal");
	
	printf("%s",bos);
	
	// ornek
	
char copy[]="benim adim ";
char copyy[]="muhammet";

printf("%s",strcat(copy,copyy));
	
	


// strncat ----> dizideki n tane elemani diger diziye aktarir

char dizi1[100];
char dizi2[100];
int tane;
	
printf("ilk yaziyi girinizz\n ");
scanf("%s",&dizi1);

printf("ikinci yaziyi girinizz\n ");
scanf("%s",&dizi2);

printf("kac tanesini aktarmak istiyosunuz\n ");
scanf("%d",&tane);

printf("%s",strncat(dizi1,dizi2,tane));	



// strrev ----> dizideki elemanlari ters cevirir

char dizi[]="bilal";
char dizii[]="kucuk";

strrev(dizi);
strrev(dizii);

printf("%s\n",dizi);
printf("%s",dizii);



// dizideki aranan kelimeyi bulup buldugu kelimeden sonrakileri diziye alir

char can[]="C dilini ogreniyoruz.";
char *sub;

sub=strstr(can,"dil");
printf("\n arama sonucunda yeni string: %s",sub);

*/
// EGZERSIZ 1

char dizi[]="bonne";
char dizim[]="soiree";
char sonuc[100]="";

 strcpy(sonuc,dizi);
 strncpy(sonuc+3,dizim,5);

printf("%s",sonuc);
		
// EGZERSIZ 2

char dizii[100][100]={"muhammet","bilal","erkoc"};

printf("\ndizinin 2. elemani: %s\n",dizii[1]);
printf("dizinin 2. elemaninin 4. karakteri: %c\n",dizii[1][3]);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
