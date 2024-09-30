#include <stdio.h>


int main(){

    int max = 0;
    int x;
    printf("Entrer le nombre des element du tableau : ");
    scanf("%d",&x);
    int T[x];
    for (int i = 0; i < x; i++)
    {
        max = T[0];
        printf("l'element %d :\n",i+1);
        scanf("%d",&T[i]);
        if (T[i] > max)
        {
            max = T[i];
        }

    }   printf("le maximum des nombres= %d\n",max);

}