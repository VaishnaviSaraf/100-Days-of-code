#include<stdio.h>
int main(){
    char name[]="Miami";
    int i;
    printf("%s",name);
    for(i=0;name[i]!='\0';i++){
    }
    for(int j=0;j<i/2;j++){
        char temp=name[j];
        name[j]=name[i-1-j];
        name[i-1-j]=temp;
    }
    printf("\n%s",name);
    return 0;
}