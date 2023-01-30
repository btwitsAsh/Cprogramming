// learning all concepts of structures and creating a small program to store address data of 5 diffrent people

// enter adress(house no, block, city, state) of 5 people:
#include<stdio.h>

typedef struct address{
    int houseNo;
    int block;
    char city[100];
    char state[100];
}add;

void printadd( add address);

int main(){

    add address[5];

    // input
    printf("enter information for person 1 : ");
    scanf("%d", &address[0].houseNo);
    scanf("%d", &address[0].block);
    scanf("%s", address[0].city);
    scanf("%s", address[0].state);

    printf("enter information for person 2 : ");
    scanf("%d", &address[1].houseNo);
    scanf("%d", &address[1].block);
    scanf("%s", address[1].city);
    scanf("%s", address[1].state);

    printf("enter information for person 3 : ");
    scanf("%d", &address[2].houseNo);
    scanf("%d", &address[2].block);
    scanf("%s", address[2].city);
    scanf("%s", address[2].state);

    printf("enter information for person 4 : ");
    scanf("%d", &address[3].houseNo);
    scanf("%d", &address[3].block);
    scanf("%s", address[3].city);
    scanf("%s", address[3].state);

    printf("enter information for person 5 : ");
    scanf("%d", &address[4].houseNo);
    scanf("%d", &address[4].block);
    scanf("%s", address[4].city);
    scanf("%s", address[4].state);

    printadd(address[0]);
    printadd(address[1]);
    printadd(address[2]);
    printadd(address[3]);
    printadd(address[4]);
}

void printadd(add address){
printf("address is %d, %d, %s, %s\n",address.houseNo,address.block,address.city,address.state);
}
