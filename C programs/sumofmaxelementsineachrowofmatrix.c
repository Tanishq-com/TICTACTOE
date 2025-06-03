#include<stdio.h>

int main(){
    int n,m, num[100][100];

    scanf("%d %d",&n,&m);

    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            scanf("%d",&num[i][j]);
        }
    }


    for (int i=0;i<n;i++){
        int max = num[i][0];
        for (int j=1;j<m;j++){
            if (num[i][j]> max){
                max = num[i][j];
            }
        }
        printf("%d\n",max);
    }
    return 0;
}