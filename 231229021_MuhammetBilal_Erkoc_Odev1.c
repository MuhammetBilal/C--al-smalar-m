#include <stdio.h>
#include <stdlib.h>



int main(void)
{   // ogrenci numarasi 231.229021
 	int sahte;
 	int basamak1, basamak2, basamak3, basamak4, basamak5, basamak6;
 	
 	
 	int sayi=229021;
 	
	printf("numara=%d",sayi);
 	
	sahte=sayi%10;
	basamak1=sahte;
 	printf("\n1.basamak=%.d",sahte);
 	
	sayi=sayi/10;
 	sahte=sayi%10;
 	basamak2=sahte;
 	printf("\n2.basamak%d",sahte);
 	
	sayi=sayi/10;
 	sahte=sayi%10;
 	basamak3=sahte;
 	printf("\n3.basamak%d",sahte);
 	
	sayi=sayi/10;
 	sahte=sayi%10;
 	basamak4=sahte;
 	printf("\n4.basamak%d",sahte);
 	
	 
	sayi=sayi/10;
 	sahte=sayi%10;
 	basamak5=sahte;
 	printf("\n5.basamak%d",sahte);
 	
	sayi=sayi/10;
 	sahte=sayi%10;
 	basamak6=sahte;
 	printf("\n6.basamak%d",sahte);
 	
 	
	 
 	
 	printf("\n(z)=%d olarak hesaplandi.",basamak1+basamak2+basamak3+basamak4+basamak5+basamak6);
 	float x=1;
	float x1=2;
	float x2=3;
	float x3=4;
	float y=0;
	float z2=basamak1+basamak2+basamak3+basamak4+basamak5+basamak6;
	printf("\nx=1 icin (1-16)/5=%.1f",((x*x*x)-(0.1*y*y)-z2)/5);
	printf("\nx=2 icin (8-16)/5=%.1f",((x1*x1*x1)-(0,1*y*y)-z2)/5);
	printf("\nx=3 icin (27-16)/5=%.1f",((x2*x2*x2)-(0.1*y*y)-z2)/5);
	printf("\nx=4 icin (64-16)/5=%.1f\n",((x3*x3*x3)-(0.1*y*y)-z2)/5);
	printf("\nx=4 oldugunda elde edilen sonuc araligindan cok uzaklisildigindan x 3 alinacaktir.\n");
	
	float x4=3, y1=1, y2=2, y3=3, y4=4, y5=5, z3=basamak1+basamak2+basamak3+basamak4+basamak5+basamak6;
	
	printf("\nx=3; //3 artik 3 olarak denklemde kullanilacaktir.");
	printf("\ny=1 icin (27-0.1-16)/5 Sonuc:%.2f",((x4*x4*x4)-(0.1*y1*y1)-z3)/5);
	printf("\ny=2 icin (27-0.4-16)/5 Sonuc:%.2f",((x4*x4*x4)-(0.1*y2*y2)-z3)/5);
	printf("\ny=3 icin (27-0.9-16)/5 Sonuc:%.1f",((x4*x4*x4)-(0.1*y3*y3)-z3)/5);
	printf("\ny=4 icin (27-1.6-16)/5 Sonuc:%.2f",((x4*x4*x4)-(0.1*y4*y4)-z3)/5);
	printf("\ny=e için (27-2.5-16)/5 Sonuc:%.1f",((x4*x4*x4)-(0.1*y5*y5)-z3)/5);
	printf("\n\nSonuc olarak x=3 y=5 Toplam 16 durumunda esitlik saglanmistir.");
	







	
	
	
	
	return 0;
}
