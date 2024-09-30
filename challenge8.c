#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[4]={4,7,8,18};
    int C[4];
    for(int i = 0 ; i < 4 ; i++){
        C[i]=T[i];
    }
    for(int i = 0 ; i < 4 ; i++){
        printf("C%d = %d \n",i+1,C[i]);
    }
    return 0;
}
