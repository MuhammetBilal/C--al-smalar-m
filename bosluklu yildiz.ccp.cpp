#include<stdio.h>
int main ()
{ 

int i,j,k;

printf("     *\n");

for(i=1 ; i<5 ; i++){
	
	for (j=0 ; j<5-i ; j++){
		
		printf(" ");
		}
		
		printf("*");
		
			for (k=0 ; k<=2*i-2 ; k++){
		
		printf(" ");
		}	
	
		printf("*");
	
	printf("\n");
}














return 0;

}
