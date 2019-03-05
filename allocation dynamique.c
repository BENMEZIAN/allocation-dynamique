#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct etudiant{
	int matricule;
	char nom[15];
	char prenom[15];
	float moyenne;
}etudiant;


int main(int argc, char *argv[]) {
	
	      int*x;
	
	     printf("char : %d octets\n", sizeof(char));
         printf("int : %d octets\n", sizeof(int));
         printf("long : %d octets\n", sizeof(long));
         printf("double : %d octets\n", sizeof(double));
	     printf("etudiant : %d octets\n", sizeof(etudiant));
	     printf("\n");
	     x=malloc(sizeof(int));
	     
	     if(x!=NULL){
	     	printf("allocation reussi.\n");
		 }
		 printf("\n");
		 // utilisation de la mémoir allouée
		 printf("donnez votre age:");
		 scanf("%d",&x);
		 printf("Vous avez %d ans\n",x);
		 
		 // libération de l'espace allouée
		 free(x);
		 
		 
	return 0;
}
