#include <stdio.h>
#include <stdlib.h>

typedef struct student{
	int matricule;
	char nom[15];
	char prenom[20];
}student;


void main(int argc, char *argv[]){
	 
	student *stud; int i,n; 
	
 
	stud=(student*)malloc(2*sizeof(student));
	
		if(stud!=NULL){
		printf("le tableau est allouee\n");
	}
	
		for(i=0;i<2;i++){
		printf("donner les informations de l'etudiant %d\n",i+1);
		printf("le nom:");
		scanf("%s",stud[i].nom);
		printf("le prenom:");
		scanf("%s",&stud[i].prenom);
		printf("le matricule:");
		scanf("%d",&stud[i].matricule);
		printf("\n");
	}
	
	
		for(i=0;i<2;i++){
		printf("les informations de l'etudiant %d\n",i+1);
		printf("le nom est:%s\n",stud[i].nom);
		printf("le prenom est:%s\n",stud[i].prenom);
		printf("le matricule est:%d\n",stud[i].matricule);
		printf("\n");
	}

	   printf("donner n:");
	   scanf("%d",&n);
	     
	 stud=(student*)realloc(stud,sizeof(student)*n); 
	  
	 
	  if(stud!=NULL){
		printf("le tableau est allouee doublement\n");
	}else{
		printf("le tableau  n'est allouee doublement\n");
	}
	
	
	for(i=0;i<n;i++){
		printf("donner les informations de l'etudiant %d\n",i+1);
		printf("le nom:");
		scanf("%s",&stud[i].nom);
		printf("le prenom:");
		scanf("%s",&stud[i].prenom);
		printf("le matricule:");
		scanf("%d",&stud[i].matricule);
		printf("\n");
	}


	for(i=0;i<n;i++){
		printf("les informations de l'etudiant %d\n",i+1);
		printf("le nom est:%s\n",stud[i].nom);
		printf("le prenom est:%s\n",stud[i].prenom);
		printf("le matricule est:%d\n",stud[i].matricule);
		printf("\n");
	}
	  
}
