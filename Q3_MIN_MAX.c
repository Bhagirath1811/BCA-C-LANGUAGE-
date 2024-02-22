#include<stdio.h>

void main(){

    int newarr[10];
    int min=0,max=0;
    min=newarr[0];

    for(int i=0;i<10;i++){
        printf("ENTER %d ELEMENT :",i);
        scanf("%d",&newarr[i]);
        printf("\n");
    }

    for(int j=0;j<10;j++){
       if(newarr[j]<min){
            min=newarr[j];
       }
       if(newarr[j]>max){
            max=newarr[j];
       }

    }
    printf("MAX =%d\n",max);
    printf("MIN =%d\n",min);
}
