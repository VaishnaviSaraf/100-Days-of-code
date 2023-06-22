#include<stdio.h>
int main(){
    char name[]="Miami";
    int i;
    // printf("Enter your name : ");
    // for(int i=0;i<10;i++){
    //     scanf("%c",&name[i]);
    // }
    printf("%s",name);
    for(i=0;name[i]!='\0';i++){
    } 
    char temp[i]; 
    i=i-1; 
    int j=0;
    while(i!=-1){
        temp[j]=name[i];
        j++;
        i--;
    }
    printf("\n%s",temp);
    return 0;
}