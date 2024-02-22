#include<stdio.h>

void main(){

    int newarr[10];
    int pos=0,neg=0,zero=0,odd=0,even=0;

    for(int i=0;i<10;i++){
        printf("ENTER %d ELEMENT :",i);
        scanf("%d",&newarr[i]);
        printf("\n");
    }


    for(int j=0;j<10;j++){
       if(newarr[j]==0){
            zero++;
        }else if(newarr[j]>0){
            pos++;
        }else if(newarr[j]<0){
            neg++;
        }

        if(newarr[j]%2==0){
            odd++;
        }else if(newarr[j]%2!=0){
            even++;
        }
    }

    printf("ZERO = %d \n",zero);
    printf("POSITIVE NUMBER = %d\n",pos);
    printf("NEGATIVE NUMBER = %d\n",neg);
    printf("ODD NUMBER = %d\n",odd);
    printf("EVEN NUMBER = %d\n",even);
}
