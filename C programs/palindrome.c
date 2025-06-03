#include<stdio.h>
#include<string.h>

int main(){

    char s[50],copy[50];
    
    scanf("%s",s);

    strcpy(copy,s);

    strrev(s);

    //printf("%s\n",s);

    if (strcmp(s,copy)==0){
        printf("yes");
    }
    else{
        printf("No");
    }
    return 0;
}