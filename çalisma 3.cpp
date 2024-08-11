#include <stdio.h>
int main() 
{	// 1. ORNEK
	int personel,maas=4000,zamlimaas;
		printf("\npersonel turunu girin=");
	    scanf("%d",&personel);

    switch(personel)
	{
	case 1:printf("\nonceki maas=%d TL",maas);
	        printf("\nyuzde50 zam uygulanicak");
	         zamlimaas=maas*1.5;
	          printf("\nzamli maas=%d TL",zamlimaas);
	break;
	
	
	case 2:printf("\nonceki maas=%d TL",maas);
      		printf("\nyuzde30 zam uygulanicak");
		   	 zamlimaas=maas*1.3;
			  printf("\nzamli maas=%d TL",zamlimaas);
	break;
    
	
	case 3:printf("\nonceki maas=%d TL",maas);
	        printf("\nyuzde20 zam uygulanicak");
		     zamlimaas=maas*1.2;
	           printf("\nzamli maas=%d TL",zamlimaas);
	break;	


	case 4:printf("\nonceki maas=%d TL",maas);
	        printf("\nyuzde10 zam uygulanicak");
		     zamlimaas=maas*1.1;
	          printf("\nzamli maas=%d TL",zamlimaas);
	break;


	default:printf("gecersiz deger");
	break;
	} 
	
		// 2.ORNEK

/*			
/int vize1,vize2,final,ort,but,ort2;
	
	printf("\nvize1 notunuzu girin");
	printf("\nvize2 notunuzu girin");
	printf("\nfinal notunuzu girin\n");
	scanf("\n%d\n%d\n%d",&vize1,&vize2,&final);
	
	ort=vize1*0.3+vize2*0.3+final*0.4;

	
	if (ort>=50)
	{ printf("GECTI");
	}
	else if (ort<50) 
	{ printf("Dersten butunlemeye kaldiniz.\n");	  
	
	printf("\nvize1 notunuzu giriniz.");
	printf("\nvize2 notunuzu giriniz.");
	printf("\nbutunleme notunuzu giriniz.\n");
	scanf("%d%d%d",&but,&vize1,&vize2);
    
	ort2=vize1*0.3+vize2*0.3+but*0.4;
}

	if (ort2>=50)
	 { printf("Gectiniz.");
	 }

	else
	{ printf("Kaldiniz.");
	}
	
	
	// 3.ORNEK
	
   int sayi1,sayi2,sayi3,sayi4,ort;

   printf("sayi1 i girin\n");
    scanf("\n%d",&sayi1);
    
     printf("sayi2 yi girin\n");
      scanf("\n%d",&sayi2);
    
       printf("sayi3 u girin\n");
        scanf("\n%d",&sayi3);
    
         printf("sayi4 u girin\n");
          scanf("\n%d",&sayi4);
    ort=(sayi1+sayi2+sayi3+sayi4)/4;
  
  if (sayi1>ort)
     {printf("\n%d sayisi ortalamadan buyuktur.",sayi1);
	 }   
	 
  else if (sayi1<ort) 
  {  printf ("\n%d sayisi ortalamadan kucuktur.",sayi1);
   } 
   
   if (sayi2>ort)
   { printf("\n%d sayisi ortalamadan buyuktur.",sayi2);
   }
   
   else  
  {  printf ("\n%d sayisi ortalamadan kucuktur.",sayi2);
   }
   
   if (sayi3>ort)
   { printf("\n%d sayisi ortalamadan buyuktur.",sayi3);
   }
   
   else if (sayi3<ort)
   { printf("\n %d sayisi ortalamadan kucuktur.",sayi3);
   }
   
   if (sayi4>ort)
   { printf("\n %d sayisi ortalamadan buyuktur.",sayi4);
   }
   
   else if (sayi4<ort)
   { printf("\n %d sayisi ortalamadan kucuktur.",sayi4);
   }
   */
   // 4.ORNEK
   /*
  int sayim1,sayim2,sayim3,sayim4,sonuc1,sonuc2;
  
  printf("1.sayiyi giriniz=",sayim1);
  scanf("\n%d",&sayim1);
  
  printf("2.sayiyi giriniz=",sayim2);
  scanf("\n%d",&sayim2);
  
  printf("3.sayiyi giriniz=",sayim3);
  scanf("\n%d",&sayim3);
  
  printf("4.sayiyi giriniz=",sayim4);
  scanf("\n%d",&sayim4);
  
  if ((sayim1/sayim2==3 && sayim2/sayim1==3) && (sayim3/sayim4==3 && sayim4/sayim3==3) )
  { printf("\n her iki ornekte de birbirinin 3 katidir ");
  }
  
 
 // 5. örnek 
 float x;
 float result;
 printf("x sayisi girin.");
 scanf("%f",&x);
 
   if (x<0)
   { result=3*(x)*(x);
     printf("sonuc=%.0f",result);
   }
   
    if (x>=0 && x<10)
   { result=1/(x*x);
     printf("sonuc=%f",result);
   }
   
   if (x>10)
   { result=5*x*x-(x*x*x);
   printf("\nsonuc=%f",result);
   } 
   
   // 6. ornek 
   
   float parca,maas;
   maas=4000;
   
   printf("uretilen parca sayisini giriniz.\n");
   scanf("%f",&parca);
   
   if (50<parca && parca<100)
   { maas=maas*1.2; 
   printf("zamli maas%.0f",maas);
   }
   
   else if (100<parca && parca<150)
   { maas=maas*1.25;
    printf("zamli maas%.0f",maas);
   }
    else if (150<parca && parca<200)
    { maas=maas*1.3;
    printf("zamli aas%.0f",maas);
	}
   
   // 7.ornek 
   float aci1,aci2,aci3;
   
    printf("3 tane aci girin.\n");
    scanf("%f%f%f",&aci1,&aci2,&aci3);
    
    if (aci1+aci2+aci3==180)
    { printf("");
	}
	else { 
	printf("acilar toplami 180 olmalidir.");
	return 0;} 
	
	if (aci1==aci2 && aci1==aci3 && aci2==aci3)
	{ printf("ucgen eskenar ucgendir.");
	}
	else if (aci1==aci2 && aci1==aci3 && aci2==aci3)
	{ printf("ucgen ikizgen ucgendir.");
	}
	else 
	{ printf("ucgen cesitkenar ucgendir.");
	} 
	*/
	//8. ornek 
/*	
	int sayi,a,b,c,d,e;
	
	printf("5 basamakli sayi giriniz.");
	scanf("%d",&sayi);
	
	if (sayi<9999 && sayi>=100000)
	{ printf("5 basamakli sayi giriniz"); return 0;
	} 
	
	a=sayi%10;
	printf("\n%d",a);
	sayi=sayi/10;
	b=sayi%10;
	printf("\n%d",b);
	sayi=sayi/10;
	c=sayi%10;
	printf("\n%d",c);
	sayi=sayi/10;
	d=sayi%10;
	printf("\n%d",d);
	sayi=sayi/10;
	e=sayi%10;
	printf("\n%d",e);
	 
	 if (a<b)
	 { printf("\nyeni sayi=%d%d%d%d%d",a,d,c,b,e);
	 }
	 else{ printf("\nen sagdaki basamak en soldaki basamaktan kucuk degildir.");
	 }
	/*
	// 9. ornek 
	
	float kenar1,kenar2,kenar3;
	
	printf("3 tane kenar giriniz.");
	scanf("%f%f%f",&kenar1,&kenar2,&kenar3);
	
	
	 if ((kenar1*kenar1)+(kenar2*kenar2)==(kenar3*kenar3))
	 { printf("DIK UCGEN CIZILEBILIR");
	 }
     else 
	  { printf("DIK UCGEN CIZILEMEZ.");
	 } 
   
   
   // 10. ornek
   
   int say1,say2,say3,X,Y,Z,say4;
    
    printf("3 tane sayi giriniz.");
    scanf("%d%d%d",&say1,&say2,&say3);
    
    X=say2-say1;
    Y=say3-say2;
    Z=Y-X;
    
    say4=say3+Y+Z;
    
    printf("sayi 4 = %d",say4);
    */
    // 11. ornek
   
    int sayi1,sayi2,sayi3,sayi4,sayi5,sayi6,enbuyuk,buyuk2;
    
    printf ("6 tane sayi gir.");
    scanf ("%d%d%d%d%d%d",&sayi1,&sayi2,&sayi3,&sayi4,&sayi5,&sayi6);
    
    if (sayi1>sayi2 &&  sayi1>sayi3 && sayi1>sayi4 && sayi1>sayi5 && sayi1>sayi6)
    { enbuyuk=sayi1;
	}
	else if (sayi2>sayi1 && sayi2>sayi3 && sayi2>sayi4 && sayi2>sayi5 && sayi2>sayi6 )
    { enbuyuk=sayi2;
	}
	else if (sayi3>sayi1 && sayi3>sayi2 && sayi3>sayi4 && sayi3>sayi5 && sayi3>sayi6 )
    { enbuyuk=sayi3;
	}
	else if (sayi4>sayi1 && sayi4>sayi2 && sayi4>sayi3 && sayi4>sayi5 && sayi4>sayi6)
    { enbuyuk=sayi4;
	}
	else if (sayi5>sayi1 && sayi5>sayi2 && sayi5>sayi3 && sayi5>sayi4 && sayi5>sayi6)
    { enbuyuk=sayi5;
	}
	else if (sayi6>sayi1 && sayi6>sayi2 && sayi6>sayi3 && sayi6>sayi4 && sayi6>sayi5)
    { enbuyuk=sayi6;
	}
     printf("en buyuk%d",enbuyuk);
     
      if (sayi1>sayi2 || sayi1>sayi3 || sayi1>sayi4 || sayi1>sayi5 || sayi1>sayi6 && sayi1<enbuyuk )
      { buyuk2=sayi1; 
      printf("\n2.buyuk%d",buyuk2);
	  }
	 
   
     else if ( sayi2>sayi1 || sayi2>sayi3 || sayi2>sayi4 || sayi2>sayi5 || sayi2>sayi6 && sayi2<enbuyuk)
     {  buyuk2=sayi2;
     printf("\n2.buyuk%d",buyuk2);
	 } 
	 
     
     else if ( sayi3>sayi1 || sayi3>sayi2 || sayi3>sayi4 || sayi3>sayi5 || sayi3>sayi6 &&  sayi3<enbuyuk)
     {  buyuk2=sayi3;
     printf("\n2.buyuk%d",buyuk2);
	 } 
	 
     else if ( sayi4>sayi1 || sayi4>sayi2 || sayi4>sayi3 || sayi4>sayi5 || sayi4>sayi6 && sayi4<enbuyuk)
     {buyuk2=sayi4;
     printf("\n2.buyuk%d",buyuk2);
	 } 
	 
	 
     
     else if ( sayi5>sayi1 && sayi5>sayi2 && sayi5>sayi3 && sayi5>sayi4 && sayi5>sayi6 && sayi5<enbuyuk)
     {buyuk2=sayi5;
	 printf("\n2.buyuk%d",buyuk2);
	 } 
	 
	 
     
     else if (sayi6>sayi1 && sayi6>sayi2 && sayi6>sayi3 && sayi6>sayi4 && sayi6>sayi5 && sayi6<enbuyuk)
   
     {buyuk2=sayi6;
     printf("\n2.buyuk%d",buyuk2);
	 } 
	 
	 
     
    
     
     
     
     
     
     
     
     
     
     
     
     
     
	 
	 
   
   




	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
   
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}
