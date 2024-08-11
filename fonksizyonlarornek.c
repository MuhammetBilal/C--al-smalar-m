#include<stdio.h>

float dortislem(float sayi1 , float sayi2 , char islem)
{
	if (islem == '+')
    {
	  return sayi1+sayi2;
    }
      
	  else if (islem == '-')
      {
	    return sayi1-sayi2;
      }
    
   	    else if (islem == '*')
        {
	      return sayi1*sayi2;
        }
    
	      else if (islem == '/')
          {
	         return sayi1/sayi2;
          }
          
             else 
             {
             	printf("gecersiz deger");
			 }
}


int main()
{
	float sayi1,sayi2,sonuc;
	char islem;
	
	printf("lutfen islem seciniz(+,-,*,/)");
	scanf("%s",&islem);
	
	printf("iki tane sayi giriniz\n");
	scanf("%f%f",&sayi1,&sayi2);
	
	printf("sonuc%.2f",dortislem(sayi1,sayi2,islem));
		
	
	return 0;
}
