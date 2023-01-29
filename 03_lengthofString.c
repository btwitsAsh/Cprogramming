#include<stdio.h>

void countstring(char string[]);

int main(){
    int n;
    //printf("enter your name : ");
    //scanf("%d",&n);

    char string[100];
    fgets(string,100,stdin);

countstring(string);
}

void countstring(char string[]){
     int count=0;
    for (int i=0;string[i] != '\0';i++){
            count++;
        }--count;
        printf("%d",count);
}
