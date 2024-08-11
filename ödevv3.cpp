#include <stdio.h>
#include<math.h>
#include<stdlib.h>



int main()
{
	int sayi,basamak1,basamak2,basamak3,basamak4,a,b,c,d;
	
	printf("\n4 basamakli sayi giriniz:");
	scanf("\n%d",&sayi);
	printf("\ngirilen sayi=%d",sayi);
	
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
	


	 if (basamak1==basamak2 && basamak1==basamak3 && basamak1==basamak4 && basamak2==basamak3 && basamak2==basamak4 && basamak3==basamak4)
	{ printf( "\nTum basamak degerleri birbirinden farkli sayi giriniz");
	return 0;
	}

	a=basamak1;
	b=basamak2;
	c=basamak3;
	d=basamak4;
	
	int enbuyuk=a;
	if (b>enbuyuk)
	{ enbuyuk=b;
	}
	 if (c>enbuyuk)
	{ enbuyuk=c;
	}
	 if (d>enbuyuk)
	{ enbuyuk=d;
	}
	
	int enkucuk=b;
	 if (a<enkucuk)
	{ enkucuk=a;
	}
	 if (c<enkucuk)
	{ enkucuk=c;
	}
	 if (d<enkucuk)
	{ 
	  enkucuk=d;
	} 
	float sonuc1,sonuc2,genelsonuc;
	 
	 if (enbuyuk==a && enkucuk==b)
	 {  if (c>d)
	     {sonuc1=((c*c)-(d*d));
		 }
		 else 
		 { sonuc1=((d*d)-(c*c));
		 }
	 }
	
	if (enbuyuk==a && enkucuk==c)
	{ if (b>d)
	  { sonuc1=((b*b)-(d*d));
	  }
	  else 
	  { sonuc1=((d*d)-(b*b));
	  }
	  
	}
	
	 if (enbuyuk==a && enkucuk==d)
	{
	if (b>c)
	 { sonuc1=((b*b)-(c*c));
	}
	  else 
	  { sonuc1=((c*c)-(b*b));
	  }
}
	if (enbuyuk==b && enkucuk==a)
	{ if (c>d)
	  { sonuc1=((c*c)-(d*d));
	  }
	  else 
	  { sonuc1=((d*d)-(c*c));
	  }
	}
	
     if (enbuyuk==b && enkucuk==c)
	{ if (a>d)
	  { sonuc1=((a*a)-(d*d));
	  }
	  else 
	  { sonuc1=((d*d)-(a*a));
	  }
	}
	if (enbuyuk==b && enkucuk==d)
	{ if (c>a)
	  { sonuc1=((c*c)-(a*a));
	  }
	  else 
	  { sonuc1=((a*a)-(c*c));
	  }
	}
	
	
    if (enbuyuk==c && enkucuk==a)
	{ if (b>d)
	  { sonuc1=((b*b)-(d*d));
	  }
	  else 
	  { sonuc1=((d*d)-(b*b));
	  }
	}
	
	
	 if (enbuyuk==c && enkucuk==b)
	{ if (a>d)
	  { sonuc1=((a*a)-(d*d));
	  }
	  else 
	  { sonuc1=((d*d)-(a*a));
	  }
	}
	
	 if (enbuyuk==c && enkucuk==d)
	{ if (a>b)
	  { sonuc1=((a*a)-(b*b));
	  }
	  else 
	  { sonuc1=((b*b)-(a*a));
	  }
	}
	
     if (enbuyuk==d && enkucuk==a)
	{ if (c>b)
	  { sonuc1=((c*c)-(b*b));
	  }
	  else 
	  { sonuc1=((b*b)-(c*c));
	  }
	}
	
		 if (enbuyuk==d && enkucuk==b)
	{ if (a>c)
	  { sonuc1=((a*a)-(c*c));
	  }
	  else 
	  { sonuc1=((c*c)-(a*a));
	  }
	}
	
	 if (enbuyuk==d && enkucuk==c)
	{ if (a>b)
	  { sonuc1=((a*a)-(b*b));
	  }
	  else 
	  { sonuc1=((b*b)-(a*a));
	  }
	}
	
	sonuc2=(enbuyuk*enbuyuk*enbuyuk)-(enkucuk*enkucuk*enkucuk);
	genelsonuc=sonuc1/sonuc2;
	if (genelsonuc<0)
	{ genelsonuc=genelsonuc*(-1);
	}
	
		if (genelsonuc<0)
	{ genelsonuc=genelsonuc*(-1);
	}
	
	printf("\nmin. deger=%f",genelsonuc);
	
	
	float sonuc3;
	
	if (enkucuk==b && enbuyuk==a  )
	{ if (c>d)
	  {sonuc3=((c*c)-(d*d))*((a*a*a)-(b*b*b));
	    }
	    else if (c<d)
	    {  sonuc3=((d*d)-(c*c))*((a*a*a)-(b*b*b));
	    }
	}


	if (enbuyuk==a && enkucuk==c)
	{ if (b>d)
	   {sonuc3=((b*b)-(d*d))*((a*a*a)-(c*c*c));
       } 
	  else if (b<d)
	  { sonuc3=((d*d)-(b*b))*((a*a*a)-(c*c*c));
	  }
	}
	
	
	
	if (enkucuk==d && enbuyuk==a  )
	{ if (b>c)
	 { sonuc3=((b*b)-(c*c))*((a*a*a)-(d*d*d));
	 }
	   else if (b<c)
	    { sonuc3=((c*c)-(b*b))*((a*a*a)-(d*d*d));
	    }
	}
	
    
	if (enbuyuk==b && enkucuk==a)
	{ if (d>c)
	 { sonuc3=((d*d)-(c*c))*((b*b*b)-(a*a*a));
	 } 
	   else if (d<c)
	    { sonuc3=((c*c)-(d*d))*((b*b*b)-(a*a*a));
	    }
	}
	
		
		if (enkucuk==c && enbuyuk==b )
	{ if (a>d)
	 { sonuc3=((a*a)-(d*d))*((b*b*b)-(c*c*c));
	 }
	   else if (a<d)
	    { sonuc3=((d*d)-(a*a))*((b*b*b)-(c*c*c));
	    }
	}
	
		if (enbuyuk==b && enkucuk==d)
	{ if (a>c)
	 { sonuc3=((a*a)-(c*c))*((b*b*b)-(d*d*d));
	 }
	   else if (a<c)
	    { sonuc3=((c*c)-(a*a))*((b*b*b)-(d*d*d));
	    }
	}
	
		if (enkucuk==a && enbuyuk==c )
	{ if (b>d)
	 { sonuc3=((b*b)-(d*d))*((c*c*c)-(a*a*a));
	 }
	   else if (b<d)
	    { sonuc3=((d*d)-(b*b))*((c*c*c)-(a*a*a));
	    }
	}
	
		if (enbuyuk==c && enkucuk==b)
	{ if (a>d)
	 { sonuc3=((a*a)-(d*d))*((c*c*c)-(b*b*b));
	 }
	   else if (a<d)
	    { sonuc3=((d*d)-(a*a))*((c*c*c)-(b*b*b));
	    }
	}
	
		if (enbuyuk==c && enkucuk==d)
	{ if (b>a)
	 { sonuc3=((b*b)-(a*a))*((c*c*c)-(d*d*d));
	 }
	   else if (b<a)
	    { sonuc3=((a*a)-(b*b))*((c*c*c)-(d*d*d));
	    }
	}
	
		if (enbuyuk==d && enkucuk==a)
	{ if (b>c)
	 { sonuc3=((b*b)-(c*c))*((d*d*d)-(a*a*a));
	 }
	   else if (b<c)
	    { sonuc3=((c*c)-(b*b))*((d*d*d)-(a*a*a));
	    }
	}
	
		if (enbuyuk==d && enkucuk==b)
	{ if (a>c)
	 { sonuc3=((a*a)-(c*c))*((d*d*d)-(b*b*b));
	 }
	   else if (a<c)
	    { sonuc3=((c*c)-(a*a))*((d*d*d)-(a*a*a));
	    }
	}
	
		if (enbuyuk==d && enkucuk==c)
	{ if (a>b)
	 { sonuc3=((a*a)-(b*b))*((d*d*d)-(c*c*c));
	 }
	   else if (a<b)
	    { sonuc3=((b*b)-(a*a))*((d*d*d)-(c*c*c));
	    }
	}
	
	printf("\nmax. deger%.3f",sonuc3);

	
	if(sonuc3<0)
	{ sonuc3=sonuc3*(-1);
	}

	return 0;
}
