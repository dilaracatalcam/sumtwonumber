#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Program to add two numbers

int main() {

    int num1,num2,sum;

    //first number is taken from user
    
    printf("Please enter first number = "); 
    scanf("%d",&num1);
    
    //second number is taken from user
    
    printf("Please enter second number = ");
    scanf("%d",&num2);

    //adding two numbers
    sum = num1 + num2;
    
    //print result to screen
    printf("%d + %d = %d ",num1,num2,sum);

    return 0;
}
