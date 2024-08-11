#include<stdio.h>
int main(){
	
	double gecicisayi;	
	int sayiint,sayiint2,solbasamak=0,sagbasamak=0,int0;
	int taban;
	float sayifloat,float0,sayifloat1;
	
	printf("\nondalikli sayi giriniz.\t");
	scanf("%lf",&gecicisayi);
	
	sayiint=gecicisayi;
	sayiint2=sayiint;
	sayifloat=gecicisayi-sayiint;
	sayifloat1=sayifloat;
	while(sayiint2>0){
		sayiint2/=10;
		solbasamak++;
		
	}
	
	float0=sayifloat-int0;
    
	while (!(float0==0)){
		sayifloat=sayifloat*10;
		int0=sayifloat;
		float0=sayifloat-int0;
		sagbasamak++;
	}

	printf("taban giriniz.(2,8,16)=\t");
	scanf("%d",&taban);
    double ussag=1 ,i , ussol=0;
	float sonucsag=0 , sonucsol=0;
	 
	switch (taban)
	{
	 case(2):
	 	
	 for( i=0 ; i<sagbasamak ;i++)
	{
	 	ussag/=2;
	 	sayifloat1*=10;
	 	sonucsag+=((int)sayifloat1%10)*ussag;	
	}
	 	int i;
	 for (i=0 ; i<solbasamak ; i++)	
	 {  
	    if(ussol==0)
		{
	    	sonucsol+=(sayiint%10);
	    	sayiint/=10;
	    	ussol=1;
	    	
		} 
		else 
	    {  
	    ussol*=2;
	        sonucsol+=(sayiint%10)*ussol;
	        sayiint/=10;
	        
		}	
	 }  
	    
	printf("%f",sonucsol+sonucsag);
	break;			
 	 case(8):
	   for( i=0 ; i<sagbasamak ;i++)
	{
	 	ussag/=8;
	 	sayifloat1*=10;
	 	sonucsag+=((int)sayifloat1%10)*ussag;
	 	
	}
	 
	 for (i=0 ; i<solbasamak ; i++)	
	 {  
	    if(ussol==0)
		{
	    	sonucsol+=(sayiint%10);
	    	sayiint/=10;
	    	ussol=1;
		} 
		else 
	    {  
	    ussol*=8;
	        sonucsol+=(sayiint%10)*ussol;
	        sayiint/=10;
		}	
	 }  
	    
	printf("%f",sonucsol+sonucsag); 
	 break;
	 
	 case(16):
	 	 for( i=0 ; i<sagbasamak ;i++)
	{
	 	ussag/=16;
	 	sayifloat1*=10;
	 	sonucsag+=((int)sayifloat1%10)*ussag;
	 	
	}
	 
	 for (i=0 ; i<solbasamak ; i++)	
	 {  
	    if(ussol==0)
		{
	    	sonucsol+=(sayiint%10);
	    	sayiint/=10;
	    	ussol=1;
		} 
		else 
	    {  
	    ussol*=16;
	        sonucsol+=(sayiint%10)*ussol;
	        sayiint/=10;
		}	
	 }  
	    
	printf("%f",sonucsol+sonucsag); 
	 break;
	 
	 default:printf("gecersiz deger");
	 break;	
			
}
	return 0;
}
 
 



