#include <stdio.h>


int main(){
int s = 0;
int x;
printf("Entrer le nombre des element du tableau : ");
scanf("%d",&x);

int T[x];
for (int i = 0; i < x; i++){
    printf("l'element %d \n",i+1);
    scanf("%d",&T[i]);
    s =s + T[i];
}
printf("s = %d\n",s);

}