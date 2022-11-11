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

void ajouter(int id, char idreclamation,char reclamation, char type,int liste,int numerobv);
void modifier(int id, char idreclamation, char reclamation ,char type,int liste,int numerobv);
reclamation supprimer(int id,char p.idreclamation);
reclamation chercher(int id, char idreclamation);

#endif // reclamation_H_INCLUDED
