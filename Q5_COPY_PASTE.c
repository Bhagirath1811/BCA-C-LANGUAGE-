#include<stdio.h>

void main(){
    int arr_1[5];
    int arr_2[5];

    for(int i=0;i<5;i++){
        printf("ENTER %d ELEMENT OF ARRAY:",i);
        scanf("%d",&arr_1[i]);
        printf("\n");
    }

    for(int j=0;j<5;j++){
        arr_2[j]=arr_1[j];
        printf("%d ELEMENT =%d\n",j,arr_2[j]);
    }
}
