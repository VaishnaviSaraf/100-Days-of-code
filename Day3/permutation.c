#include<stdio.h>
int perm(char [],int,int [],char [],int l);
int main(){
    char name[]="abc";
    char name1[]="ab";
    char name2[]="numerical";
    int i=0;
    for(i=0;i<name1[i]!='\0';i++){
    }
    int A[i];
    for(int j=0;j<i;j++){
        A[j]=0;
    }
    char res[i];
    perm(name1,0,A,res,i);
    return 0;
}
int perm(char name[],int k,int A[],char res[],int l){
    if(k==l){
        printf("\n%s",res);
        return 0;
    }
    for(int i=0;i<l;i++){
        if(A[i]==0){
            A[i]=1;
            res[k]=name[i];
            perm(name,k+1,A,res,l);
            A[i]=0;
        }
    }
}