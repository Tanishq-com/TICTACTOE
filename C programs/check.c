#include<stdio.h>

int main(){
    int x = 10;
    int a[5] = {10,20,30,40,50};
    int *y, **z;
    y = &x;
    z = &y;
    printf("x = %d,y=%d,z=%d\n",x,*y,**z);
    printf("a = %d,&a = %d,a+1 = %d,&a+1 = %d",a,&a,a+1,&a+1);
}