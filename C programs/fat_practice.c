#include<stdio.h>

void sum(int mat[100][100],int r);

int main(){
    int r;
    scanf("%d",&r);
    
    int mat[1003][100];
    for (int i=0;i<r;i++){
        for (int j=0;j<r;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    sum(mat,r);

    return 0;
}

void sum(int mat[100][100],int r){
    int s=0;
    for (int i=0;i<r;i++){
        for (int j=0;j<r;j++){
            if (i+j==r-1){
                s+=mat[i][j];
            }
        }
    }

    printf("%d",s);
}
