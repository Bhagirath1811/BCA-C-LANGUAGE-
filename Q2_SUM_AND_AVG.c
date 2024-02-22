#include<stdio.h>

void main(){

    int newarr[10];
    int sum=0,avg=0;


    for(int i=0;i<10;i++){
        printf("ENTER %d ELEMENT :",i);
        scanf("%d",&newarr[i]);
        printf("\n");
    }

    for(int k=0;k<10;k++){
        sum=sum+newarr[k];
    }

    avg=sum/10;



    printf(" SUM OF ALL ELEMENT IS = %d \n",sum);
    printf(" AVERAGE OF ALL ELEMENT IS = %d \n",avg);

}
