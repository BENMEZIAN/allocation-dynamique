#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a[20],*p[20],i,n;
	
	do{
		printf("donner la valeur de n:");
		scanf("%d",&n);
	}while(n<=0  &&  n>20);
	
	
		for(i=0;i<n;i++){
		printf("donner l'element a[%d]:",i);
		scanf("%d",&a[i]);
	   }
	   
	   printf("\n");
	   
	   for(i=0;i<n;i++){
		printf("l'element a[%d] est:%d\n",i,a[i]);
	   }
	   
	   printf("\n");
	
	for(i=0;i<n;i++){
		p[i]=&a[i]; //*(p+i)=a+i;
		printf("l'adresse de l'element a[%d] est:%u\n",i,p[i]);
	}
	
/*	règle générale:
                  p[i]=&a[i];<=====> *(p+i)=a+i;
*/
                  
	return 0;
}
