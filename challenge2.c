#include <stdio.h>

int main(){

int x;
printf("Entrer le nombre des element du tableau : ");
scanf("%d",&x);

int T[x];
for (int i = 0; i < x; i++){
    printf("l'element %d \n",i+1);
    scanf("%d",&T[i]);
}
for (int i = 0; i < x; i++){
    printf("%d|",T[i]);
}
printf("\n");


}