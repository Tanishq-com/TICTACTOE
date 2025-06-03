#include<stdio.h>

int main(){
    
    for (int i=1;i<21;i++){
        int count=0;
        for (int j=1;j<=i/2;j++){
            if (i%j==0){
                count+=1;
            }   
        }
         if (count==1){
                printf("%d\n",i);
            }
    }
    return 0;
}
