#include <stdio.h>

	int main(void)
{
		
	// 1.SORU  ??
	
		int x;
		
	 	printf("\nLutfen x sayisini giriniz.");
	
		scanf("%d",&x);
	
			x=3*x*x;
		
		printf("\nX= ise Y=%d",x);
		printf("\tolmalidir.");
		
	// 2.SORU
	
		float a;
		float b;
		float c;
		int A;
		printf("\nLutfen a sayisini giriniz.");
		scanf("%f",&a);
		printf("\nLutfen b sayisini giriniz.");
		scanf("\t%f",&b);
		printf("\nLutfen c sayisini giriniz.");
		scanf("\t%f",&c);
		A =a+b+c;
		printf("\nOrtalama:%d",A/3);
		
	// 4.SORU
	
	float K;

	printf("\n Lutfen Kelvin degeri giriniz.");
	
	scanf("%f",&K);

	printf("\nFahrenheit:%.2f",(K-213.15)*1.8+32);
	
	
	// 5.SORU ??
	
	
	int sayi;
	int toplam;
	
	printf("\n Lutfen m sayisini giriniz.");
	scanf("\n%d",&sayi);
	printf("\n Lutfen n sayisini giriniz.");
	scanf("\n%d",&sayi);
	printf("\n Lutfen p sayisini giriniz.");
	scanf("\n%d",&sayi);
	
	
	printf("\nToplam%d",toplam);
	
	
	// 6.soru 

	int vize1;
	int vize2;
	int final;
	int sonuc;
	
	printf("Vize1 notunuzu giriniz.");
	scanf("\n%d",&vize1);
	
	printf("Vize2 notunuzu giriniz.");
	scanf("\n%d",&vize2);
	
	printf("Final notunuzu giriniz.");
	scanf("\n%d",&final);

    int ortalama=vize1*0.3+vize2*0.3+final*0.4;
	printf("Ortalama=%d",ortalama);
													
	
	// 7.soru
	
	float R1,R2,R3;
	
	printf("R1 degerini giriniz=");
	scanf("\n%f",&R1);
	
	printf("R2 degerini giriniz=");
	scanf("\n%f",&R2);
	
	printf("R3 degerini giriniz=");
	scanf("\n%f",&R3);

	
	printf("Res=\t%f",1/R1+1/R2+1/R3);

	// 8.soru
	
	// 9.SORU
	
	
	int m1,m2,r;
	float G=0.865;
	
	printf("m1 degerini giriniz=");
	scanf("%d",&m1);
	
	printf("m2 degerini giriniz=");
	scanf("%d",&m2);
	
	printf("r degerini giriniz=");
	scanf("%d",&r);
	
	printf("F cekim kuvveti=%.2",(G*m1*m2)/r*r);
	
	
	// 10.SORU
	
	
	
 
	
	
	
	
	
	
	
	
		

	
	



	
	
	
		
		
		
		
		
		
		
	
	
	
	
	
	
	
	return 0;
}
