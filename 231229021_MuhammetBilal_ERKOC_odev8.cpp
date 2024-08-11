#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main ()
{
	srand(time(NULL));
	int N=8;
	char matris[N][N];
	char dizi[]={'A','a','F','f','K','k','V','v'};
    int random,sayac=0,i,j;
	
	for(int i=0 ; i<N ; i++)
	{
		for(int j=0 ; j<N ; j++)
		{
		  	matris[i][j]='.';
		}
	}
	random=0;
	do
	{
		
	       i=rand()%N+1;
		   j=rand()%N+1;
		   
		   if(matris[i][j]=='.')
		   {
		   	  matris[i][j]=dizi[random];
		      random++;
		      sayac++;	
		   }	
		   
	}while(sayac!=N);
	
	
	for(int i=0 ; i<N ; i++)
	{
		for(int j=0 ; j<N ; j++)
		{
		   printf("%4c",matris[i][j]);	
		}
		printf("\n");
	}
	
	
	int m,n;
	
	
	for(int i=0 ; i<8 ; i++)			//////// numaralandirma
	{
		for(int j=0 ; j<8 ; j++)
		{
			if(matris[i][j]=='A' || matris[i][j]=='a')     ///////// buyuk A
			{ 
		
			  	char gecici;
			  m=i;
			  n=j;
			  if(matris[m][n]=='A')
			  	{
			  		gecici='1';
				}
			  else 
				{
					gecici='2';
				}
		      if(0<=m+1 && m+1<8 && 0<=n+2 && n+2<8)
			  {
			  	if(matris[m+1][n+2]=='.')
				  {
			  		matris[m+1][n+2]=gecici;
				  }
				  else if('0'<=matris[m+1][n+2] && matris[m+1][n+2]<='9')
				  {
				  	matris[m+1][n+2]='0';
				  }
			  }	
			  
			  	 if(0<=m+2 && m+2<8 && 0<=n+1 && n+1<8)
			  {
			  	if(matris[m+2][n+1]=='.')
				  {
			  		matris[m+2][n+1]=gecici;
				  }
				  else if('0'<=matris[m+2][n+1] && matris[m+2][n+1]<='9')
				  {
				  	matris[m+2][n+1]='0';
				  }
			  	
			  }
			  
			  	 if(0<=m-1 && m-1<8 && 0<=n-2 && n-2<8)
			  {
			  	if(matris[m-1][n-2]=='.')
				  {
			  		matris[m-1][n-2]=gecici;
				  }
				  else if('0'<=matris[m-1][n-2] && matris[m-1][n-2]<='9')
				  {
				  matris[m-1][n-2]='0';
				  }
			  	
			  }
			  
			 	 if(0<=m-2 && m-2<8 && 0<=n-1 && n-1<8)
			  {
			  		if(	matris[m-2][n-1]=='.')
				  {
			  			matris[m-2][n-1]=gecici;
				  }
				  else if('0'<=matris[m-2][n-1] && matris[m-2][n-1]<='9')
				  {
				  	matris[m-2][n-1]='0';
				  }
			  }
			  
			  if(0<=m+1 && m+1<8 && 0<=n-2 && n-2<8)
			  {
			  		if(	matris[m+1][n-2]=='.')
				  {
			  		matris[m+1][n-2]=gecici;
				  }
				  else if('0'<=matris[m+1][n-2] && matris[m+1][n-2]<='9')
				  {
				  	matris[m+1][n-2]='0';
				  }
			  }
			  
			  if(0<=m+2 && m+2<8 && 0<=n-1 && n-1<8)
			  {
			  		if(	matris[m+2][n-1]=='.')
				  {
			  		matris[m+2][n-1]=gecici;
				  }
				  else if('0'<=matris[m+2][n-1] && matris[m+2][n-1]<='9')
				  {
				  	matris[m+2][n-1]='0';
				  }
			  }
			  
			  if(0<=m-1 && m-1<8 && 0<=n+2 && n+2<8)
			  {
			  		if(matris[m-1][n+2]=='.')
				  {
			  		matris[m-1][n+2]=gecici;
				  }
				  else if('0'<=matris[m-1][n+2] && matris[m-1][n+2]<='9')
				  {
				  	matris[m-1][n+2]='0';
				  }
			  }
			  
			 if(0<=m-2 && m-2<8 && 0<=n+1 && n+1<8)
			  {
			  		if(matris[m-2][n+1]=='.')
				  {
			        matris[m-2][n+1]=gecici;
				  }
				  else if('0'<=matris[m-2][n+1]&&matris[m-2][n+1]<='9')
				  {
				  	matris[m-2][n+1]='0';
				  }
			  }
			 
		    
		}

			
		}
	}
									//////////////////////////////// FIL (F) (f)
	 int a,b;
	 
	 for(int i=0 ; i<N ; i++)
	 {
	 	for(int j=0 ; j<N ; j++)
	 	{
	 		if(matris[i][j]=='F' || matris[i][j]=='f')
	 		{
	 			
	 			char gecici;
	 			a=i;
	 			b=j;
	 			if(matris[a][b]=='F')
	 			{
	 				gecici='3';
				}
				else
				{
					gecici='4';
				}
				sayac=0;
				do
				{
					a+=1;
					b+=1;
				if(0<=a && a<N && 0<=b && b<N)
			    {
			  	  if(	matris[a][b]=='.')
				  {
			  		matris[a][b]=gecici;
				  }
				  else if('0'<=matris[a][b] && matris[a][b]<='9')
				  {
				  	matris[a][b]='0';
				  }
			    }
			    sayac++;
			    }while(sayac<N);
			    sayac=0;
			    a=i;
			    b=j;
			    do
				{
					a-=1;
					b-=1;
				if(0<=a && a<N && 0<=b && b<N)
			    {
			  	  if(	matris[a][b]=='.')
				  {
			  		matris[a][b]=gecici;
				  }
				  else if('0'<=matris[a][b] && matris[a][b]<='9')
				  {
				  	matris[a][b]='0';
				  }
			    }
			    sayac++;
			    }while(sayac<N);
			    sayac=0;
			    a=i;
			    b=j;
			      do
				{
					a+=1;
					b-=1;
				if(0<=a && a<N && 0<=b && b<N)
			    {
			  	  if(	matris[a][b]=='.')
				  {
			  		matris[a][b]=gecici;
				  }
				  else if('0'<=matris[a][b] && matris[a][b]<='9')
				  {
				  	matris[a][b]='0';
				  }
			    }
			    sayac++;
			    }while(sayac<N);
			    sayac=0;
			    a=i;
			    b=j;
			    	      do
				{
					a-=1;
					b+=1;
				if(0<=a && a<N && 0<=b && b<N)
			    {
			  	  if(	matris[a][b]=='.')
				  {
			  		matris[a][b]=gecici;
				  }
				  else if('0'<=matris[a][b] && matris[a][b]<='9')
				  {
				  	matris[a][b]='0';
				  }
			    }
			    sayac++;
			    }while(sayac<N);
			    sayac=0;
			    a=i;
			    b=j;
			}
		}
	 }
	
	 int x,y;                                  ///////////////////////////// KALE (K) (k)
	 
	 for(int i=0 ; i<N ; i++)
	 {
	 	for(int j=0 ; j<N ; j++)
	 	{
	 		if(matris[i][j]=='K' || matris[i][j]=='k')
	 		{
	 			
	 			char gecici;
	 			sayac=0;
	 			x=i;
	 			y=j+0;
	 		
	 			if(matris[x][y]=='K')
	 			{
	 				gecici='5';
				}
				else
				{
					gecici='6';
				}
				
			    do
	 			{
	 			x+=1;
	 			y+=0;
				if(0<=x && x<N)
			    {
			  	  if(	matris[x][y]=='.')
				  {
			  		matris[x][y]=gecici;
				  }
				  else if('0'<=matris[x][y] && matris[x][y]<='9')
				  {
				  	matris[x][y]='0';
				  }
			    }
			    sayac++;
			    }while(sayac<N);
			    sayac=0;
			    x=i;
			    y=j;
			      
				  do
	 			{
	 			x-=1;
	 			y+=0;
				if(0<=x && x<N)
			    {
			  	  if(	matris[x][y]=='.')
				  {
			  		matris[x][y]=gecici;
				  }
				  else if('0'<=matris[x][y] && matris[x][y]<='9')
				  {
				  	matris[x][y]='0';
				  }
			    }
			    sayac++;
			    }while(sayac<N);
			    
				sayac=0;
			    x=i;
			    y=j;
			    
			      do
	 			{
	 			x+=0;
	 			y+=1;
				if(0<=y && y<N)
			    {
			  	  if(	matris[x][y]=='.')
				  {
			  		matris[x][y]=gecici;
				  }
				  else if('0'<=matris[x][y] && matris[x][y]<='9')
				  {
				  	matris[x][y]='0';
				  }
			    }
			    sayac++;
			    }while(sayac<N);
			    
			    sayac=0;
			    x=i;
			    y=j;
			    
			      do
	 			{
	 			x+=0;
	 			y-=1;
				if(0<=y && y<N)
			    {
			  	  if(	matris[x][y]=='.')
				  {
			  		matris[x][y]=gecici;
				  }
				  else if('0'<=matris[x][y] && matris[x][y]<='9')
				  {
				  	matris[x][y]='0';
				  }
			    }
			    sayac++;
			    }while(sayac<N);
			}
		}
	 }
	
	 	 int o,p;                                  ///////////////////////////// VEZIR (V) (v)
	 
	 for(int i=0 ; i<N ; i++)
	 {
	 	for(int j=0 ; j<N ; j++)
	 	{
	 		if(matris[i][j]=='V' || matris[i][j]=='v')
	 		{
	 			
	 			char gecici;
	 			o=i;
	 			p=j;
	 			if(matris[o][p]=='V')
	 			{
	 				gecici='7';
				}
				else
				{
					gecici='8';
				}
				sayac=0;
				do
				{
				  o+=1;
				  p+=0;
				if(0<=o && o<N)
			    {
			  	  if(	matris[o][p]=='.')
				  {
			  		matris[o][p]=gecici;
				  }
				  else if('0'<=matris[o][p] && matris[o][p]<='9')
				  {
				  	matris[o][p]='0';
				  }
			    }
			    sayac++;
			    }while(sayac<N);
			    o=i;
			    p=j;
			    sayac=0;
			  	do
				{
				  o-=1;
				  p+=0;
				if(0<=o && o<N)
			    {
			  	  if(	matris[o][p]=='.')
				  {
			  		matris[o][p]=gecici;
				  }
				  else if('0'<=matris[o][p] && matris[o][p]<='9')
				  {
				  	matris[o][p]='0';
				  }
			    }
			    sayac++;
			    }while(sayac<N);
			    o=i;
			    p=j;
			    sayac=0;
			 	do
				{
				  o-=0;
				  p+=1;
				if(0<=p && p<N)
			    {
			  	  if(	matris[o][p]=='.')
				  {
			  		matris[o][p]=gecici;
				  }
				  else if('0'<=matris[o][p] && matris[o][p]<='9')
				  {
				  	matris[o][p]='0';
				  }
			    }
			    sayac++;
			    }while(sayac<N);
			    o=i;
			    p=j;
			    sayac=0;
			   	do
				{
				  o-=0;
				  p-=1;
				if(0<=p && p<N)
			    {
			  	  if(	matris[o][p]=='.')
				  {
			  		matris[o][p]=gecici;
				  }
				  else if('0'<=matris[o][p] && matris[o][p]<='9')
				  {
				  	matris[o][p]='0';
				  }
			    }
			    sayac++;
			    }while(sayac<N);
			    o=i;
			    p=j;
			    sayac=0;
			    do
				{
				  o+=1;
				  p+=1;
			    if(0<=o && o<N && 0<=p && p<N)
			    {
			  	  if(	matris[o][p]=='.')
				  {
			  		matris[o][p]=gecici;
				  }
				  else if('0'<=matris[o][p] && matris[o][p]<='9')
				  {
				  	matris[o][p]='0';
				  }
			    }
			    sayac++;
			    }while(sayac<N);
			    o=i;
			    p=j;
			    sayac=0;
			    do
				{
				  o-=1;
				  p-=1;
			    if(0<=o && o<N && 0<=p && p<N)
			    {
			  	  if(	matris[o][p]=='.')
				  {
			  		matris[o][p]=gecici;
				  }
				  else if('0'<=matris[o][p] && matris[o][p]<='9')
				  {
				  	matris[o][p]='0';
				  }
			    }
			    sayac++;
			    }while(sayac<N);
			    o=i;
			    p=j;
			    sayac=0;
			     do
				{
				  o+=1;
				  p-=1;
			    if(0<=o && o<N && 0<=p && p<N)
			    {
			  	  if(	matris[o][p]=='.')
				  {
			  		matris[o][p]=gecici;
				  }
				  else if('0'<=matris[o][p] && matris[o][p]<='9')
				  {
				  	matris[o][p]='0';
				  }
			    }
			    sayac++;
			    }while(sayac<N);
			    o=i;
			    p=j;
			    sayac=0;
			 do
				{
				  o-=1;
				  p+=1;
			    if(0<=o && o<N && 0<=p && p<N)
			    {
			  	  if(	matris[o][p]=='.')
				  {
			  		matris[o][p]=gecici;
				  }
				  else if('0'<=matris[o][p] && matris[o][p]<='9')
				  {
				  	matris[o][p]='0';
				  }
			    }
			    sayac++;
			    }while(sayac<N);
			   
			}
		}
	 }
	
	printf("");
	printf("\nA:1    a:2    F:3    f:4    K:5    k:6    V:7    v:8\n\n");
	
		for(int i=0 ; i<N ; i++)
	{
		for(int j=0 ; j<N ; j++)
		{
		   printf("%4c",matris[i][j]);	
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
