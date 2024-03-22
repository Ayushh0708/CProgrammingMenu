#include<stdio.h>

int main(){

    int a=20;
    int *ptr=&a;

    printf("The value of Pointer is :%u",ptr);
    ptr++;
    printf("The value of Pointer is :%u",ptr);
    return 0;
}