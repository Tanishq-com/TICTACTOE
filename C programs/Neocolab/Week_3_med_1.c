#include<stdio.h>

int main(){
    int n,num[100],i=0,digit,ncopy;
    
    scanf("%d",&n);
    ncopy=n;
    while (ncopy>0){
        digit = ncopy%10;
        ncopy/=10;
        num[i]=digit;
        i++;
    }

    int max=num[0];
    for (int j=0;j<i;j++){
        if (num[j]>max){
            max=num[j];
        }
    }

    int min=num[0];
    for (int j=0;j<i;j++){
        if (num[j]<min){
            min=num[j];
        }
    }

    if (n>1000){
        printf("%d",(max+min));
    }
    else{
        printf("Invalid input");
    }

    return 0;
}