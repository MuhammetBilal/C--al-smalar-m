#include<stdio.h>
int main()
{
	int sayi1,sayi2,sayi3,sayi4,sayi5;
	float ort;
	
	printf("1. sayiyi giriniz.");
	scanf("%d",&sayi1);
	
		printf("2. sayiyi giriniz.");
	scanf("%d",&sayi2);
	
		printf("3. sayiyi giriniz.");
	scanf("%d",&sayi3);
	
		printf("4. sayiyi giriniz.");
	scanf("%d",&sayi4);
	
		printf("5. sayiyi giriniz.");
	scanf("%d",&sayi5);
	
	ort=(sayi1+sayi2+sayi3+sayi4+sayi5)/5;
	printf("ortalama%.2f",ort);
	
	if (sayi1>ort)
	{ printf("\nortalamadan buyuk%d",sayi1);
	}
	
	 if (sayi2>ort)
	{ printf("\nortalamadan buyuk%d",sayi2);
	}
	
	 if (sayi3>ort)
	{ printf("\nortalamadan buyuk%d",sayi3);
	}
	
	if (sayi4>ort)
	{ printf("\nortalamadan buyuk%d",sayi4);
	}
	
	if (sayi5>ort)
	{ printf("\nortalamadan buyuk%d",sayi5);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
