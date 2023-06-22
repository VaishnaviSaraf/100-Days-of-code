#include<stdio.h>
void duplicate(char[]);
int main(){
    char name[]="miami";
    char name1[]="vaishnavi";
    char name2[]="aaa";
    duplicate(name);
    duplicate(name1);
    duplicate(name2);
    return 0;
}
void duplicate(char name[]){
    long int h=0;
    for(int i=0;name[i]!='\0';i++){
    long int x=1;
    x=x<<(name[i]-97);
    if((h & x)>0){
        printf("\n%c is duplicate character in %s",name[i],name);
    }else{
        h=(h|x);
    }
    }
}
