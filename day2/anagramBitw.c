#include<stdio.h>
void ana(char[],char[]);
int main(){
    char name[]="aai";
    char name1[]="baba";
    char name2[]="numerical";
    ana(name,name1);
    ana(name1,name);
    ana(name2,name1);
    return 0;
}
void ana(char name[],char name1[]){
    int h1=0,h2=0;
    int x=1;
    for(int i=0;name[i]!='\0';i++){
        x=1;
        x=x<<(name[i]-97);
        h1=h1|x;
    }
    for(int i=0;name1[i]!='\0';i++){
        x=1;
        x=x<<(name1[i]-97);
        h2=h2|x;
    }
    if(h1 == h2){
        printf("\n%s and %s are anagrams",name,name1);
    }else{
        printf("\n%s and %s are not anagrams",name,name1);
    }
}