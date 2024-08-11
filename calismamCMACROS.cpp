		#include<stdio.h>
		#include<stdlib.h>
		#include<math.h>
		#include<time.h>
		#include<string.h>
#define PI 3.14
#define daireninalani(r) (PI*r*r)
/*
int main ()
{	
/*	int r=2;
	double alan;
	alan=daireninalani(r);
	printf("dairenin alani: %.2lf\n",alan); 
*/	
	
/*	printf("file: %s\n",__FILE__);
	printf("date: %s\n",__DATE__);
	printf("time: %s\n",__TIME__);
	printf("line (satir): %d\n",__LINE__);
	printf("STDC: %d\n",__STDC__);
*/

// -------->   #undef PI yaptigimizda yukarida tanimli olan pi sayisini ortadan kaldirir.

/*
   #ifdef PI
     printf("%f",PI);
   #endif
   
   verilen pi degeri ile ilgili islemleri yapar sonra da kapatir  
*/
 /* 
  	char cumle[100];
  	int karakter=0;
  	
  	printf("cumle gir");
  	gets(cumle);
  	
  	int i=0,j=0;
  	
  	while(i<strlen(cumle))
  	{
  		j=0;
		while(j<=i)
		{
			printf("%c",cumle[j]);
			j++;
		}
		printf("\n");
		i++;
	}

}return 0;
*/
/*
int mukemmelsayi()
{	
    int sayi,enkucuk=1000,enbuyuk=0,sayac=0;
    while(sayac<20)
    {
    	sayi=rand()%100+1;
    	printf("%d\n",sayi);
    	if(enkucuk>sayi)
    	{
    		enkucuk=sayi;
		}
		
		if(enbuyuk<sayi)
		{
			enbuyuk=sayi;
		}
		
		sayac++;
    	
	}
	printf("en kucuk: %d",enkucuk);
	printf("en buyuk: %d",enbuyuk);
}
   
    


	
int main()
{
	
	srand(time(NULL));
	mukemmelsayi();
	
	
	
}*/
/*
int main()
{
	int *ad1,*ad2;
	
	int a=10, b=20;

	ad1=&a;
	ad2=&b;
	
	printf("atamadan once %d\n",ad1);
	printf("atamadan once %d\n",*ad1);
	
	*ad1=*ad2+*ad1;
	
	printf("atamadan sonra %d\n",ad1);
	printf("atamadan sonra %d\n",*ad1);
	

	return 0;
}

*/
/*
void degistir(int *a, int *b)
{
	int gecici;
	
	gecici=*a;
	*a=*b;
	*b=gecici;
}

int main()
{
	int a=10,b=20;
	
	printf("degistirmeden once %d %d\n",a,b);
	
	degistir(&a,&b);
	
	printf("degistirmeden sonra %d %d ",a,b);
	return 0;
}
*/
int main ()
{
	char dizi[100]="bilal";
	char *p;
	
	
	p=dizi;
	
//	printf("5. eleman '%c' dir.\n",*(p+4	));
//	printf("5. eleman '%c' dir.\n",dizi[4]);
	
	int list[]={1,2,3,4,5};
	int *m;
	
	m=list;
	
/*	printf("%d nin adresi	%d\n",*(m),m);
	printf("%d nin adresi	%d\n",*(m+1),m+1);
	printf("%d nin adresi	%d\n",*(m+2),m+2);
	printf("%d nin adresi	%d\n",*(m+3),m+3);
	printf("%d nin adresi	%d\n",*(m+4),m+4);	
*/	
	
	int n[100];
	
	
	for(int i=0 ; i<100 ; i++)
	{
	   	n[i]=0;	
	}
	
	for(int i=0 ; i<100 ; i++)
	{
	//	printf("%d",n[i]);
	}
	
	int *o;
	
/*	o=n;
	
	for(int i=0 ; i<100 ; i++)
	{
		*(o+i)=4;
	}
	
		for(int i=0 ; i<100 ; i++)
	{
		printf("%d",*(o+i));
	}
	
	printf("\n");
	
			for(int i=0 ; i<100 ; i++)
	{
		printf("%d\n",o+i);
	}
*/
    
/*	for(o=n ; o<n+100 ; o++)
	{
		*o=9;
	}	
	
		for(o=n ; o<n+100 ; o++)
	{
		printf("%d",*o);
	}
	*/
	
	
	int sayi1,sayi2;
	int *ptr1,*ptr2;
	int gecici;
	
	ptr1=&sayi1;
	ptr2=&sayi2;
	
	printf("sayi gir\n");
	scanf("%d%d",&sayi1,&sayi2);

	printf("%d%d\n",*ptr1,*ptr2);
	
	gecici=*ptr1;
	*ptr1=*ptr2;
	*ptr2=gecici;
	
	printf("%d%d",*ptr1,*ptr2);
	return 0;
}






