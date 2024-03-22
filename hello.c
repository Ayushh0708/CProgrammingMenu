#include <stdio.h>

int main()
{

    int a;
    int b;
    printf("Enter any numbers : ");
    scanf("%d", &a);  
    int sum;
    for(int i =0;i<=a;i++){
        sum += i;
        
    }printf("Sum is : %d",sum);


    return 0;
}