#ifndef RECLAMATION_H_INCLUDED
#define RECLAMATION_H_INCLUDED
#include <stdio.h>

typedef struct
{

int idreclamation;
char reclamation[200] ;
char type[20];
int liste;
int numerobv;
}reclamation;



typedef struct
{
char nom[20];
char prenom[20];
char cin[8];
int id;
char sexe[10];
char nationalite[25];
char date_de_naissance[10];
char adresse[30];
int role;
int vote;
char mot_de_passe[20]; 
}user;


int ajouter(char *, reclamation);
int modifier(char *, int,reclamation);
int supprimer(char *, int );
reclamation chercher( char *, int);

int cond_gagnat(char* filename );
int nbrReclamationParListeElectorale(int id_listeElectorale);

#endif // reclamation_H_INCLUDED
