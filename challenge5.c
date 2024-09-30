#include <stdio.h>


int main(){

    int min = 0;
    int x;
    printf("Entrer le nombre des element du tableau : ");
    scanf("%d",&x);
    int T[x];
    for (int i = 0; i < x; i++){
        min = T[0];
        printf("l'element %d :",i+1);
        scanf("%d",&T[i]);
        if (T[i] < min)
        {
            min = T[i];
        }

    }   printf("le maximum des nombres= %d\n",min);

}