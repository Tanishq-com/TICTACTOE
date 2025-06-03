#include<stdio.h>

int main(){
    int n,count=0;

    scanf("%d",&n);

    for (int i=1;i<n/2;i++){
        if (n%i==0){
            count+=1;
        }
    }

        printf("%d\n",count);
    if (count==1){
        printf("prime");
    }

    else{
        printf("not prime");

    }
    return 0;
}