#include <stdio.h>


void fibbo(int x){

    int first=0;
    int sec=1;

    printf("%d \n%d", first,sec);
    for(int i=0; i<x; i++){
    int third=first+sec;
    printf("%d", third);
    first=sec;
    sec=third;
    }
    
}

int main(){
    int a;

    printf("Enter any number: ");
    scanf("%d", &a);

    fibbo(a);


        return 0;
}