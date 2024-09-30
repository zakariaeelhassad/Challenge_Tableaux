#include <stdio.h>

int main(){

int taille,ancien,nouveau,i;
//demande de saisi le nombre des elements du tableau
printf("donner le nombre des elements du tableau : \n");
scanf("%d",&taille);

int table[taille];

//la saisi des element du tableau
for (i = 0; i < taille; i++)
{
    printf("saisi l'element %d \n",i+1);
    scanf("%d",&table[i]);
}
//demande l'element a remplacer
printf("saisi l'element a remplacer :\n");
scanf("%d",&ancien);
//saisi le nouveau element
printf("saisi le nouveau element :\n");
scanf("%d",&nouveau);
//rechercher l'element a remplacer
for (i = 0; i < taille; i++)
{
    if (table[i] == ancien)
    {
        table[i] = nouveau;
    }
    
}
//affichage du tableau
for (i = 0; i < taille; i++)
{
    printf("%d|",table[i]);
}
printf("\n");

}