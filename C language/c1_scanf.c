/*
Write a C program to take an integer value as an input from the user and print it.
*/

#include<stdio.h>
#include<conio.h>

void main(){
    int num1;
    printf("Enter the value for num1 : ");
    scanf("%d", &num1);
    printf("The value of num1 is: %d", num1);
}

/*

Test cases:

1) Visible:

Input:

Enter the value for num1 : 2

Output:

The value of num1 is: 2


2) Hidden:

Input:

Enter the value for num1 : 100

Output:

The value of num1 is: 100


3) Hidden:

Input:

Enter the value for num1 : -32768

Output:

The value of num1 is: -32768


4) Hidden:

Input:

Enter the value for num1 : 32767

Output:

The value of num1 is: 32767

*/