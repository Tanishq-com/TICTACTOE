#include<stdio.h>

int main(){
    int m,n,mmat[100],nmat[100],final[200];

    scanf("%d",&m);
    for (int i=0;i<m;i++){
        scanf("%d\n",&mmat[i]);
        final[i]=mmat[i];
    }

    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d\n",&nmat[i]);
    }

    for (int i=0;i<n;i++){
        final[m+i]=nmat[i];    
    }

    for (int i=0;i<n+m;i++){
        printf("%d ",final[i]);
    }
    
    return 0;
}