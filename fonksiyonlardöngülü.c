#include<stdio.h>

int tekmiciftmi(int mbe)
{
	if (mbe%2==0)
	{
		return 1;
	}
	
	else
	{
		return 0;
	}
	
}


int main()

{
	int sayi,sonuc;
	
	printf("sayi girin");
	scanf("%d",&sayi);
	
	sonuc=tekmiciftmi(sayi);
	
	if(sonuc==1)
	{
		printf("sayi cift sayidir.");
	}
	
	else if (sonuc==0)
	{
		printf("sayi tek sayidir.");
	}
	
	
	return 0;
}
