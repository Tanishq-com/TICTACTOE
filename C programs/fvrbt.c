#include<stdio.h>
#include<stdlib.h>

int main(){
    {
        auto float f1 = 20.4;
        {
        f1 = 10.8;
        {
        f1 = 5.3;
            printf(“%.2f”, f1);
        }
            printf("\n%.2f",f1);
        }
            printf("\n%.2f",f1);
    }

        return 0;
}