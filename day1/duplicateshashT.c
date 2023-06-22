#include<stdio.h>
void duplicate(char[]);
int main(){
    char name[]="miami";
    char name1[]="vaishnavi";
    char name2[]="nitin";
    duplicate(name);
    duplicate(name1);
    duplicate(name2);
    return 0;
}
void duplicate(char name[]){
    int array[26]={0};
    for(int i=0;name[i]!='\0';i++){
        int temp=name[i]-97;
        array[temp]++;
    }
    for(int i=0;i<26;i++){
        if(array[i]>1){
            printf("\n%c is appeared %d times in string %s",i+97,array[i],name);
        }
    }
}