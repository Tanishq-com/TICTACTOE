#include<stdio.h>

int main(){
    int n,a[100][100];
    scanf("%d",&n);

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
        
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
                if (j>i){
                    a[i][j]=0;
                }

        }

    }

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
