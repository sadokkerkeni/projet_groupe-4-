*#include "reclamation.h"
#include<stdio.h>
int ajouter(int r.id, char r.idreclamation,char r.reclamation,char r.type,char r.liste,int r.numerobv)
{
reclamation r;
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f," %d %s %s %s %d %d",int r.id, r.idreclamation,r.reclamation,r.type,r.liste,r.numerobv);
        fclose(f);
        return 1;
    }
    else return 0;
}

int modifier(int r.id, char r.idreclamation,char r.reclamation,char r.type,char r.liste,int r.numerobv )
{
reclamation r;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f," %d %s %s %s %d %d",&r.id,r.idreclamation, r.reclamation,r.type,&r.liste,&r.numerobv ")!=EOF)
{
if(r.id!=id)
        fprintf(f2," %d %s %s %s %d %d",r.id, r.idreclamation,r.reclamation,r.type,r.liste,r.numerobv);
else

  fprintf(f2," %d %s %s %s %d %d", r.id, r.idreclamation,r.reclamation,r.type,r.liste,r.numerobv);

}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return 1;
    }

}

int supprimer(int r.id, char r.idreclamation)
{
reclamation r;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%d %s ",&r.id, r.idreclamation)!=EOF)
{
if(r.id!=id)
        fprintf(f2,"%d %s ",r.id,r.idreclamation);

}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return 1;
    }
}

reclamation chercher(int r.id, char r.idreclamation)
{
reclamation r; int tr=0;
    FILE * f=fopen(filename, "r");
 if(f!=NULL )
    {
while(fscanf(f," %d %s %s %s %d %d",&r.id,r.idreclamation, r.reclamation,r.type,&r.liste,&r.numerobv ")!=EOF && tr==0)
{if(id==r.id)
tr=1;
}
}
if(tr==0)
r.id=-1;
return r;

}
