      // ON VA ESSAYER D'ALLOUER UN TABLEAU DYNAMIQUEMENT ET LE LIBERER 
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	    int n,i;
	    int*tab;
	
	      printf("donner le nombre n:");
	      
	      do{
	      	 scanf("%d",&n);
		  }while(n<=0);
	     
	      tab=malloc(n*sizeof(int));
	      
	      if(tab!=NULL){
	      	printf("le tableau est allouee\n");
		  }
		  // on remplit le tableau
		 for (i=0;i<n;i++)
        {
            printf("l'element tab[%d] est:",i);
            scanf("%d", &tab[i]);
        }
         
         printf("\n");
        // On affiche le tableau
         for (i=0;i<n;i++)
        {
            printf("l'element tab[%d] est:%d\n",i,tab[i]);
        }
        
        free(tab);
	
	
	
	
	
	
	return 0;
}
