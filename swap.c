// swap function using call by value and call by refrence
#include <stdio.h>

void swap(int a, int b);
void _swap(int *a, int*b);

int main(){
int x =  3, y = 5;
printf("x = %d & y = %d\n",x,y);
swap(x,y);

printf("a = %d & b = %d\n",x,y);
_swap(&x,&y);

return 0;}

// call by value
void swap(int a, int b){
int t = a;
a = b;
b= t;
printf("a = %d & b = %d\n",a,b);
}

// call by refrence 
void _swap(int *a, int* b){
    int t = *a;
    *a = *b;
    *b=t;
    printf("a = %d & b = %d\n",*a,*b);
}
