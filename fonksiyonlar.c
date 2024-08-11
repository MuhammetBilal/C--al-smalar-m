#include<stdio.h>
#include<stdlib.h>
void tekmiciftmi(int can)
{

if(can%2==0)
{
	printf("sayi cift sayidir");
}

else
{
	printf("sayi tek sayidir");
}
}

int main()
{
	
int sayi;

printf("lutfen sayi giriniz");
scanf("%d",&sayi);

tekmiciftmi (sayi);	
	

	return 0;
	
}
