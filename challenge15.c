#include <stdio.h>


int main(){
    int T1[5] = {1,2,3,4,5};
    int T2[5] = {6,7,8,9,10};
    int T3[10];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 5; j < 10; j++)
    {
        T3[i]=T1[i];
        T3[j]=T2[j-5];
    }
    }
    for (int i = 0; i <10 ; i++)
    {
        printf("%d |",T3[i]);
    }
printf("\n");


}