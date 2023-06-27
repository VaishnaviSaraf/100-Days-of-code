#include<stdio.h>
int perm(char [],int l,int h);
int main(){
    char name[]="abc";
    int i=0;
    for(i=0;i<name[i]!='\0';i++){
    }
    perm(name,0,i-1);
    return 0;
}
int perm(char name[],int l,int h){
    if(l==h){
        printf("\n%s",name);
        return 0;
    }
    for(int i=l;i<=h;i++){
        char temp=name[i];
        name[i]=name[l];
        name[l]=temp;
        perm(name,l+1,h);    
        temp=name[i];
        name[i]=name[l];
        name[l]=temp;   
    }
}