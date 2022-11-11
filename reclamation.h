#ifndef RECLAMATION_H_INCLUDED
#define RECLAMATION_H_INCLUDED

typedef struct
{
int id;
char idreclamation[20];
char reclamation[200] ;
char type[20];
int liste;
int numerobv;
}reclamation;

int ajouter(int id, char idreclamation,char reclamation, char type,int liste,int numerobv);
int modifier(int id, char idreclamation, char reclamation ,char type,int liste,int numerobv);
int supprimer(int id,char idreclamation);
reclamation chercher(int id, char idreclamation);

#endif // reclamation_H_INCLUDED
