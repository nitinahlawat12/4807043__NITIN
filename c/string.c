#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    char alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%zu\n",strlen(alphabet));
    printf("%zu\n",sizeof(alphabet));
    //concatenate string
    char a[]="Nitin";
    char b[]=" singh";
    printf("%s\n",strcat(a,b));
    char c[1];
    printf("%s\n",strcpy(c,a));
    printf("%d",strcmp(a,c));

}
