/*
Write a C program to take different datatypes values as input from the user and print them.
*/

#include<stdio.h>
#include<conio.h>

void main(){
    int num1;
    float num2;
    char ch;
    char str[100];

    printf("Enter an int value : ");
    scanf("%d", &num1);
    
    printf("Enter a float value : ");
    scanf("%f", &num2);

    printf("Enter a character : ");
    scanf(" %c", &ch);

    printf("Enter a string : ");
    scanf("%s", &str);


    printf("The value of num1 is: %d \n", num1);
    printf("The value of num2 is: %.2f \n", num2);
    printf("The value of ch is: %c \n", ch);
    printf("The value of str is: %s \n", str);
}

/*

Test cases:

1) Visible:

Input:

Enter an int value : 10
Enter a float value : 99.9699
Enter a character : a
Enter a string : bvm college

Output:

The value of num1 is: 10
The value of num2 is: 99.97
The value of ch is: a
The value of str is: bvm


2) Hidden:

Input:

Enter an int value : -50
Enter a float value : 99
Enter a character : z
Enter a string : c language

Output:

The value of num1 is: -50
The value of num2 is: 99
The value of ch is: z
The value of str is: c language


3) Hidden:

Input:

Enter an int value : 250
Enter a float value : -23.45213
Enter a character : g
Enter a string : dennis ritchie

Output:

The value of num1 is: 250
The value of num2 is: -23.45213
The value of ch is: g
The value of str is: dennis ritchie

*/