#include<stdio.h>

int main(){
    
    int n,arr[32];

    scanf("%d",&n);

    int i=0;

    while(n>0){
        arr[i]=n%2;
        i++;
        n/=2;
        }
 
    for (int j=i-1;j>=0;j--){
        printf("%d",arr[j]);
    }
    
    return 0;
}   
