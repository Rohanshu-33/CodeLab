/*
Write a C program to make a basic calculator.
*/

#include<stdio.h>
#include<conio.h>

void main(){
    int num1;
    int num2;

    printf("Enter first value : ");
    scanf("%d", &num1);
    
    printf("Enter second value : ");
    scanf("%d", &num2);

    int addition = num1 + num2;
    int subtraction = num1 - num2;
    int multiplication = num1 * num2;
    float division = (float)num1 / num2;

    printf("%d + %d = %d \n", num1, num2, addition);
    printf("%d - %d = %d \n", num1, num2, subtraction);
    printf("%d * %d = %d \n", num1, num2, multiplication);
    printf("%d / %d = %.2f \n", num1, num2, division);
    
}

/*

Test cases:

1) Visible:

Input:

Enter first value : 23
Enter second value : 12

Output:

23 + 12 = 35
23 - 12 = 11
23 * 12 = 276
23 / 12 = 1.92


2) Hidden:

Input:

Enter first value : 12
Enter second value : 4

Output:

12 + 4 = 16
12 - 4 = 8
12 * 4 = 48
12 / 4 = 3.00


3) Hidden:

Input:

Enter first value : 2
Enter second value : 4

Output:

2 + 4 = 6
2 - 4 = -2
2 * 4 = 8
2 / 4 = 0.50

*/