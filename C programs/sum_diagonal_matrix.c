#include<stdio.h>

int main(){
    int num,count=0,n[50][50];

    scanf("%d",&num);

    for (int i=0;i<num;i++){
        for (int j=0;j<num;j++){
            scanf("%d",&n[i][j]);
            if ((i==j) || (i+j == num-1)){
                count+=n[i][j];
            }
        }
    }

    printf("%d",count);

    return 0;
}