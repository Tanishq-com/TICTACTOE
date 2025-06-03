#include<stdio.h>

int convert(int t){
    return (t*9/5)+32;
}

int average(int s){
    return s/7;
}

int alert(int feh[]){
    int aler=(40*9/5)+32;
    for (int i=0;i<7;i++){
        if (feh[i]>aler){
            printf("\nAlert on day: %d\n",i+1);
        }
    }
    return 0;
}

int main(){
    int temp[7],sum=0;
    

    for (int i=0;i<7;i++){
        scanf("%d",&temp[i]);
        sum+=temp[i];
    }

    for (int i=0;i<7;i++){
        temp[i]=convert(temp[i]);
    }

    for (int i=0;i<7;i++){
        printf("%d\n",temp[i]);
    }

    printf("\n\nAverage is:%d\n\n",average(sum));

    alert(temp);
 
    return 0;
}
