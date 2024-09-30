#include <stdio.h>

int main(){

int taille,somme = 0;
float moyenne;

printf("entrer le nombre des elements du tableau : ");
scanf("%d",&taille);
int table[taille];
for (int i = 0; i < taille; i++)
{
    printf("saisi l'element : %d\n",i+1);
    scanf("%d",&table[i]);
}

for (int i = 0; i < taille; i++)
{
    somme += table[i];
}

moyenne = (float)somme / (float)taille;
printf("la moyenne des element du tableau est : %.2f",moyenne);

}