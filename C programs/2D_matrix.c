#include<stdio.h>

void sort(int *arr);
void addrow(int arr[][3]);

int main(){
    int mat[3][3]={{3,1,2},{6,5,4},{8,7,9}};
    int temp[9];
    int k=0;
    
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            temp[k]=mat[i][j];
            k++;
        }
    }
    
    //sort(temp);
    for (int i=0;i<9;i++){
        printf("%d ",*(temp+i));
    }
    
    addrow(mat);
    return 0;
}

void sort(int *arr){
    for (int i=0;i<8;i++){
        for (int j=0;j<8-i;j++){
            if (arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }    
        }
    }
}

void addrow(int arr[][3]){
    int s=0;
    for (int i=0;i<3;i++){
        s+=arr[0][i];
    }

    printf("\n%d ",s);
}
