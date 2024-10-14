/*
Write a C program to demonstrate increment and decrement operators.
*/

#include<stdio.h>
#include<conio.h>

void main(){
    int num1;

    printf("Enter value : ");
    scanf("%d", &num1);

    num1++;
    printf("post-increment is %d \n", num1);
    printf("pre-increment is %d \n", ++num1);
    num1--;
    printf("post-decrement is %d \n", num1);
    printf("pre-decrement is %d \n", --num1);
    
}

/*

Test cases:

1) Visible:

Input:

Enter value : 5

Output:

post-increment is 6
pre-increment is 7
post-decrement is 6
pre-decrement is 5


2) Hidden:

Input:

Enter value : 17

Output:

post-increment is 18
pre-increment is 19
post-decrement is 18
pre-decrement is 17


3) Hidden:

Input:

Enter value : -10

Output:

post-increment is -9
pre-increment is -8
post-decrement is -9
pre-decrement is -10

*/