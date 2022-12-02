#include "reclamation.h"

int ajouter(char *filename, reclamation r)
{
    FILE * f=fopen(filename, "a");

	 if(f!=NULL)
    {
        fprintf(f,"%d %s %s %d %d\n",r.idreclamation,r.reclamation,r.type,r.liste,r.numerobv);
        fclose(f);
        return 1;
    }
    else return 0;
}

int modifier(char * filename, int id, reclamation aux )
{
int tr=0;
reclamation r;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%d %s %s %d %d",&r.idreclamation, r.reclamation,r.type,&r.liste,&r.numerobv )!=EOF)
{
if(r.idreclamation != id){
        fprintf(f2,"%d %s %s %d %d \n",r.idreclamation,r.reclamation,r.type,r.liste,r.numerobv);
	tr=1;
}
else

  fprintf(f2,"%d %s %s %d %d \n ",aux.idreclamation,aux.reclamation,aux.type,aux.liste,aux.numerobv);

}
}

        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return tr;
  }

int supprimer(char * filename ,int id )
{
int tr=0;
reclamation r;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f!=NULL && f2!=NULL)
{
	while(fscanf(f,"%d",&r.idreclamation)!=EOF)
	{
	if(r.idreclamation==id)
	tr=1;
	else
	fprintf(f2,"%d",r.idreclamation);
}
}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return tr;
}

reclamation chercher(char * filename ,int id)
{
reclamation r;
int tr=0;
    FILE * f=fopen(filename, "r");
 if(f!=NULL )
    {
while(fscanf(f,"%d %s %s %d %d",&r.idreclamation, r.reclamation,r.type,&r.liste,&r.numerobv )!=EOF && tr==0)
{
if(id==r.idreclamation)
tr=1;
}
}
fclose(f);
if(tr==0)
r.idreclamation=-1;

return r;

}

int nbrReclamationParListeElectorale(int idliste){

int nbTotal=0;
reclamation r;

FILE * f=fopen("reclamation.txt", "a");

if(f==NULL){
return 0;
}
else{
while(fscanf(f,"%d %s %s %d %d",&r.idreclamation, r.reclamation,r.type,&r.liste,&r.numerobv )!=EOF )
{
if(r.liste==idliste){
nbTotal++;
}
}
fclose(f);
return nbTotal;
}
}

int cond_gagnat(char * filename )
{
user u;
int gagnant;
 int t[100];
 int n=0;
int maxcount = 0;
	FILE * f=fopen(filename, "r"); 
if ( f==NULL){
printf("introuvable");
return 0;
}
else{
while
(fscanf(f,"%s%s%s%d%s%s%s%s%d%d%s\n",u.nom,u.prenom,u.cin,&u.id,u.sexe,u.nationalite,u.date_de_naissance,u.adresse,&u.role,&u.vote,u.mot_de_passe)!=EOF)
{
t[n]=u.vote;
n++;
}

for (int i =0 ; i<n ; i++)
{
  int count=0;
  for (int j=0; j <n ; j++)
   {
     if (t[i]==t[j])
       count++;

   }
  if (count > maxcount)
   {
     maxcount=count;
     gagnant=t[i];
   }
}
}
fclose(f);
return gagnant;
}


