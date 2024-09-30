#include <stdlib.h>

int main()
{


    int x ;
    printf("entrer les nomber d'elements du tableau :");
    scanf("%d",&x);
    int T_f[x];
    int T_e[x];
    int T_r[x];
    for(int i = 0 ; i < x ; i++){
        printf("element %d d'un tableau :",i+1);
        scanf("%d",&T_f[i]);
    }
    for (int i =0 ; i<x ; i++){
        printf("facteur %d :",i+1);
        scanf("%d",&T_e[i]);
    }
    for ( int i = 0; i<x ; i++ ){
            T_r[i] = T_f[i] * T_e[i] ;
       printf("%d * %d = %d \n",T_f[i],T_e[i],T_r[i]) ;
    }
    return 0;
}

