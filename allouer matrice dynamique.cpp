#include<stdio.h>
#include<stdlib.h>

main(){
	
	 int **tableau;
	  int i,j,n,m;

  
  do{
  	printf("donner n:");
  	scanf("%d",&n);
  }while(n<=0);


   do{
   	 printf("donner m:");
     scanf("%d",&m);
  }while(m<=0);
  
  
  tableau = (int **) malloc(sizeof(int *)*n);
  
   if(tableau!=NULL){
	   	printf("le tableau est allouee\n");
	}
		  
		  
  for (i=0; i<10; i++){
  	 tableau[i] = (int *) malloc(sizeof(int)*m);
  }
  
  for(i=0;i<n;i++){
  	    for(j=0;j<m;j++){
  		 printf("l'element tab[%d][%d] est:",i,j);
         scanf("%d", &tableau[i][j]);
	   }
  }
  
   for(i=0;i<n;i++){
  	   for(j=0;j<m;j++){
  		 printf("l'element tab[%d][%d] est:",i,j,tableau[i][j]);
	    }
  }
  
  





   


}

