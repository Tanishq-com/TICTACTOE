#include<stdio.h>

int main(){
    int a,b,c;
    char op;

    scanf("%d\n",&a);
    scanf("%c\n",&op);
    scanf("%d\n",&b);

    switch(op){
        case '+':
        c=a+b;
        printf("%d",c);
        break;

        case '-':
        c=a-b;
        printf("%d",c);
        break;

        case '*':
        c=a*b;
        printf("%d",c);
        break;

        case '/':
        c=a/b;
        printf("%d",c);
        break;

    }
    return 0;
}   