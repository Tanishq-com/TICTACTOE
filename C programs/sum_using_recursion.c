#include<stdio.h>

int sum(int n){
    if (n==0){
        return 0;
    }
    return n + sum(n-1);
}

#include<stdio.h>

int main(){
    int n = 5;

    printf("%d",sum(n));
    return 0;
}