#include <stdio.h>
#include <math.h>
#include<stdlib.h>
int main()
{
	int sayi;
	float a,b,c,d;
	printf("\n4 basamakli sayi giriniz:");
	scanf("\n%d",&sayi);
	printf("\ngirilen sayi= %d\n",sayi);
	
		if (sayi < 1000 || sayi > 9999) 
	{   printf("\n4 basamakli dogal sayi giriniz.\n");
	return 0; 
   }
	d=sayi%10;
	sayi=sayi/10;
	c=sayi%10;
	sayi=sayi/10;
	b=sayi%10;
	sayi=sayi/10;
	a=sayi%10;
	
		 if (a==b || a==c || a==d || b==c || b==d || c==d)
	{ printf( "\nTum basamak degerleri birbirinden farkli sayi giriniz");
	
	return 0;
	}

	float sonuc1,sonuc2,sonuc3,sonuc4,sonuc5,sonuc6;
	
	sonuc1=((a*a)-(b*b))/((c*c*c)-(d*d*d));
	if (sonuc1<0){
	sonuc1=sonuc1*(-1);} 
	printf("\na,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f) degerlerinde sonuc=",a,b,c,d,b,a,d,c,a,b,d,c,b,a,c,d);
	printf("  %.3f",sonuc1);
	
	sonuc2=((a*a)-(c*c))/((b*b*b)-(d*d*d));
	if (sonuc2<0){
	sonuc2=sonuc2*(-1);}
	printf("\na,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f) degerlerinde sonuc=",a,c,b,d,c,a,b,d,a,c,d,b,c,a,d,b);
	printf(" %.3f",sonuc2);

	sonuc3=((a*a)-(d*d))/((b*b*b)-(c*c*c));
	if (sonuc3<0){
	sonuc3=sonuc3*(-1);}
	printf("\na,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f) degerlerinde sonuc=",a,d,b,c,a,d,c,b,d,a,b,c,d,a,b,c);
	printf(" %.3f",sonuc3);
	
	sonuc4=((b*b)-(c*c))/((a*a*a)-(d*d*d));
	if (sonuc4<0){
	sonuc4=sonuc4*(-1);}
	printf("\na,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f) degerlerinde sonuc=",b,c,a,d,b,c,d,a,c,b,a,d,c,b,d,a);
	printf("  %.3f",sonuc4);
	
	sonuc5=((b*b)-(d*d))/((a*a*a)-(c*c*c));
	if (sonuc5<0){
	sonuc5=sonuc5*(-1);}
	printf("\na,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)a,b=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f) degerlerinde sonuc=",b,d,a,c,b,d,c,a,d,b,a,c,d,b,c,a);
	printf(" %.3f",sonuc5);

	sonuc6=((c*c)-(d*d))/((a*a*a)-(b*b*b));
	if (sonuc6<0){
	sonuc6=sonuc6*(-1);}
	printf("\na,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f) degerlerinde sonuc=",c,d,a,b,c,d,b,a,d,c,a,b,d,c,b,a);
	printf("  %.3f",sonuc6);
	
	
	if (sonuc1>sonuc2 && sonuc1>sonuc3 && sonuc1>sonuc4 && sonuc1>sonuc5 && sonuc1>sonuc6) 
	{printf("\n\na,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f) iken max. deger = %.3f\n",a,b,c,d,b,a,d,c,a,b,d,c,b,a,c,d,sonuc1);
	}
	 else if (sonuc2>sonuc1 && sonuc2>sonuc3 && sonuc2>sonuc4 && sonuc2>sonuc5 && sonuc2>sonuc6)
	 { printf("\n\na,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f) iken max. deger = %.3f\n",a,c,b,d,c,a,b,d,a,c,d,b,c,a,d,b,sonuc2);
	 }
	  else if (sonuc3>sonuc1 && sonuc3>sonuc2 && sonuc3>sonuc4 && sonuc3>sonuc5 && sonuc3>sonuc6 )
	  { printf("\n\na,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f) iken max. deger = %.3f\n",a,d,b,c,a,d,c,b,d,a,c,b,d,a,b,c,sonuc3);
	  }
	   else if (sonuc4>sonuc1 && sonuc4>sonuc2 && sonuc4>sonuc3 && sonuc4>sonuc5 && sonuc4>sonuc6 )
	  { printf("\n\na,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f) iken max. deger = %.3f\n",b,c,a,d,b,c,d,a,c,b,a,d,c,b,d,a,sonuc4);
	  }
	   else if (sonuc5>sonuc1 && sonuc5>sonuc2 && sonuc5>sonuc3 && sonuc5>sonuc4 && sonuc5>sonuc6 )
	  { printf("\n\na,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f) iken max. deger = %.3f\n",b,d,a,c,b,d,c,a,d,b,a,c,d,b,c,a,sonuc5);
	  }
	   else if (sonuc6>sonuc1 && sonuc6>sonuc2 && sonuc6>sonuc3 && sonuc6>sonuc4 && sonuc6>sonuc5 )
	  { printf("\n\na,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f) iken max. deger = %.3f\n",c,d,a,b,c,d,b,a,d,c,a,b,d,c,b,a,sonuc6);
	  }
	 
	 float sonuc7,sonuc8,sonuc9,sonuc10,sonuc11,sonuc12;
	
	 sonuc7=((a*a)-(b*b))*((c*c*c)-(d*d*d));
	 if (sonuc7<0){
	 sonuc7=sonuc7*(-1);}
	 printf("\na,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f) degerlerinde sonuc=",a,b,c,d,b,a,d,c,a,b,d,c,b,a,c,d);
	 printf("  %.3f",sonuc7);
	
	 sonuc8=((a*a)-(c*c))*((b*b*b)-(d*d*d));
	 if (sonuc8<0){
	 sonuc8=sonuc8*(-1);}
	 printf("\na,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f) degerlerinde sonuc=",a,c,b,d,c,a,b,d,a,c,d,b,c,a,d,b);
	 printf("  %.3f",sonuc8);
	 
	 sonuc9=((a*a)-(d*d))*((c*c*c)-(b*b*b));
	 if (sonuc9<0){
	 sonuc9=sonuc9*(-1);}
	 printf("\na,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f) degerlerinde sonuc=",a,d,b,c,a,d,c,b,d,a,b,c,d,a,b,c);
	 printf("  %.3f",sonuc9);
	 
	 sonuc10=((b*b)-(c*c))*((a*a*a)-(d*d*d));
	 if (sonuc10<0){
	 sonuc10=sonuc10*(-1);}
	 printf("\na,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f) degerlerinde sonuc=",b,c,a,d,b,c,d,a,c,b,a,d,c,b,d,a);
	 printf("  %.3f",sonuc10);
	 
	 sonuc11=((b*b)-(d*d))*((c*c*c)-(a*a*a));
	 if (sonuc11<0){
	 sonuc11=sonuc11*(-1);}
	 printf("\na,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f) degerlerinde sonuc=",b,d,a,c,b,d,c,a,d,b,a,c,d,b,c,a);
	 printf("  %.3f",sonuc11);
	 
     sonuc12= ((d*d)-(c*c))*((a*a*a)-(b*b*b));
	 if (sonuc12<0){
	 sonuc12=sonuc12*(-1);}
	 printf("\na,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f) degerlerinde sonuc=",c,d,a,b,c,d,b,a,d,c,a,b,d,c,b,a);
	 printf("  %.3f",sonuc12);
	 
	 if (sonuc7<sonuc8 && sonuc7<sonuc9 && sonuc7<sonuc10 && sonuc7<sonuc11 && sonuc7<sonuc12)
	 { printf("\na,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f) iken min deger = %.3f",a,b,c,d,b,a,d,c,a,b,d,c,b,a,c,d,sonuc7);
	 }
	 else if (sonuc8<sonuc7 && sonuc8<sonuc9 && sonuc8<sonuc10 && sonuc8<sonuc11 && sonuc8<sonuc12)
	 { printf("\n\na,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f) iken min. deger = %.3f",a,c,b,d,c,a,b,d,a,c,d,b,c,a,d,b,sonuc8);
	 }
	
	else if (sonuc9<sonuc7 && sonuc9<sonuc8 && sonuc9<sonuc10 && sonuc9<sonuc11 && sonuc9<sonuc12)
	 { printf("\n\na,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f) iken min. deger = %.3f",a,d,b,c,a,d,c,b,d,a,b,c,d,a,b,c,sonuc9);
	 }
	 
	 else if (sonuc10<sonuc7 && sonuc10<sonuc8 && sonuc10<sonuc9 && sonuc10<sonuc11 && sonuc10<sonuc12)
	 { printf("\n\na,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f) iken min. deger = %.3f",b,c,a,d,b,c,d,a,c,b,a,d,c,b,d,a,sonuc10);
	 }
	 
	 else if (sonuc11<sonuc7 && sonuc11<sonuc8 && sonuc11<sonuc9 && sonuc11<sonuc10 && sonuc11<sonuc12)
	 { printf("\n\na,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f) iken min. deger = %.3f",b,d,a,c,b,d,c,a,d,b,a,c,d,b,c,a,sonuc11);
	 }
	 
	 else if (sonuc12<sonuc7 && sonuc12<sonuc8 && sonuc12<sonuc9 && sonuc12<sonuc10 && sonuc12<sonuc11)
	 { printf("\n\na,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f)  -  a,b=(%.0f,%.0f)c,d=(%.0f,%.0f) iken min. deger = %.3f",c,d,a,b,c,d,b,a,d,c,a,b,d,c,b,a,sonuc12);
	 }	
return 0;	
}
	
