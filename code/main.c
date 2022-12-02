#include "reclamation.h"
#include <stdio.h>
#include"reclamation.h"

int main()
{

int w,x,y ;
reclamation r1={1,"aaaaaaaaaaa","fraud",1,1} ,r2={2,"bbbbbbb","fraud",2,2},r3;

x=ajouter("reclamation.txt",r1);
if(x==1)
printf("ajout de reclamation avec succes");
else
printf ("echec d'ajout");

w=modifier("reclamation.txt",1,r2);
if(w==1){
printf("modifier avec succes");
}
else
 printf ("echec de modification");

y=supprimer("reclamation.txt",2 );
    if(y==1){
        printf("Suppression de reclamation avec succés");
	}
    else
 printf("echec Suppression");

    r3=chercher("reclamation.txt",2 );
    if(r3.idreclamation==-1)
        printf("introuvable");

int a= cond_gagnat("user.txt");
printf("les condidats gangnts %d",a);

int b=nbrReclamationParListeElectorale("reclamation.txt",1);
printf("le nbre de reclamations dans cette liste = %d",b);

    return 0;





}
