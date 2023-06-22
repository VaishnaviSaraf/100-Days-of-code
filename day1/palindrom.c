#include<stdio.h>
int palin(char[]);
int main(){
    char name[]="miami";
    char name1[]="dad";
    char name2[]="nitin";
    palin(name);
    palin(name1);
    palin(name2);
    return 0;
}
int palin(char name[]){
    int i,temp=0;
    for(i=0;name[i]!='\0';i++){
    }
    for(int j=0;j<i/2;j++){
        if(name[j]!=name[i-1-j]){
            temp=1;
            break;
        }else{
            temp=0;
        }
    }
    if(temp){
        printf("\n%s is not palindrom",name);
    }else{
    printf("\n%s is palindrom",name);
    }
    return temp;
}