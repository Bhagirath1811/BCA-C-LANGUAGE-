#include<stdio.h>

void main(){

    int newarr[10];

    for(int i=0;i<10;i++){
        printf("ENTER %d ELEMENT :",i);
        scanf("%d",&newarr[i]);
        printf("\n");
    }

    for(int j=0;j<10;j++){
        printf("%d ELEMENT IS = %d \n",j,newarr[j]);
    }
}
