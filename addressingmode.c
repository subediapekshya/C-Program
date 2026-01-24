#include<stdio.h>
int main(){
    int a = 10;
    int b = 20;
    int arr [5] = {5,10,15,20,25};
    int *ptr;
    int i = 2;
    int x = 50;
    printf("Immediate Addressing: x = %d\n", x);
    printf("Direct Addressing: a = %d\n", a);
    int sum = a+b;
    printf("Register Addressing: sum = %d\n", sum);
    ptr = &a;
    printf("Indirect Addressing: *ptr = %d\n", *ptr);
    printf("Index Addressing: arr [%d] = %d\n", i, arr[i]);
    printf("Base + offset Addressing: *arr[%d] = %d\n", i, *(arr+i));
    printf("PC - relative addressing : loop demonstrate\n");
    for(int j = 0; j < 3; j++){
        printf("Loop iteration %d\n", j);
    }
    return 0;
}