#include <stdio.h>

void reverse(int arr[], int n);
void print( int arr[], int n);

int main(){
    int n=5;
    int arr[]={1,2,3,4,5};
    reverse(arr,n);
    print(arr,n);
    return 0;
}

void reverse (int arr[], int n){
    for (int i=0;i<(n/2);i++){
        int firstvalue = arr[i];
        int secondvalue = arr[n-i-1];
        arr[i] = secondvalue;
        arr[n-i-1] = firstvalue;
    }
}

void print( int arr[], int n){
    for (int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
