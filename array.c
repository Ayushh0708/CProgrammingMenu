#include <stdio.h>

int main(){

    int price[3];
    printf("Enter the price of three items: ");
    for(int i=0;i<3;i++){
        scanf("%d" ,&price[i]);
    }
    for(int i=1;i<=3;i++){
        float withGST=0.18*price[i-1]+price[i-1];
        printf("Price of %d Item %f\n",i,withGST);
    }

    return 0;
}