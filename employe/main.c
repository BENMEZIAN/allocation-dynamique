#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

typedef struct employe{
	char nom[20];
	char prenom[20];
	char fonction[20];
	char situation[15];
	int matricule;
	float salaire;
}employe;


int main(int argc, char *argv[]) {

	employe *T;
	int i,ne;

	do{
        printf("donner ne:");
        scanf("%d",&ne);
	}while(ne<=0  &&  ne>100);

	T=(employe*)malloc(ne*sizeof(employe));

	for(i=0;i<ne;i++){
		printf("donner les informations d'employe num:%d\n",i+1);
		printf("le nom:");
		scanf("%s",&T[i].nom);
		printf("le prenom:");
		scanf("%s",&T[i].prenom);
		printf("la situation familiale:");
		scanf("%s",&T[i].situation);
		printf("la fonction:");
		scanf("%s",&T[i].fonction);
		printf("le matricule:");
		scanf("%d",&T[i].matricule);
		printf("le salaire:");
		scanf("%f",&T[i].salaire);
		printf("\n");
	}

	for(i=0;i<ne;i++){
	       printf("les informations d'employe num:%d\n",i+1);
	       printf("le nom:%s\n",T[i].nom);
	       printf("le prenom:%s\n",T[i].prenom);
	       printf("la situation familiale:%s\n",T[i].situation);
	       printf("la fonction:%s\n",T[i].fonction);
	       printf("le matricule:%d\n",T[i].matricule);
    	      printf("le salaire:%f\n",T[i].salaire);
    	      printf("\n");
	 }

	  free(T);


        system ("pause");


	return 0;
}
