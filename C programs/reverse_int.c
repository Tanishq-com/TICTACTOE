#include<stdio.h>

int main(){
    int n,digit,rev=0;
    scanf("%d",&n);

    while (n>0){
        digit=n%10;
        n/=10;
        rev+=digit;
        rev*=10; 
    }

    printf("%d",rev/10);
    return 0;
}