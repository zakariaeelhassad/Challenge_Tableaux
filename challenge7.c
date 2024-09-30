#include <stdio.h>
#include <stdlib.h>

int main()
{


    int x,temp;
    printf("entrer les nomber d'elements du tableau :");
    scanf("%d",&x);
    int T[x];
    for(int i = 0 ; i < x ; i++){
        printf("element %d d'un tableau :",i+1);
        scanf("%d",&T[i]);
    }

    for(int i = 0 ; i < x-1 ; i++ ){

        for(int j = i+1 ; j<x;j++){
                if(T[j]<T[i]){
                   temp = T[i];
                   T[i]=T[j];
                T[j] = temp;
                }
    }
    }


    for(int i = 0 ; i < x ; i++){
        printf("%d | ",T[i]);
    }
    return 0;
}
