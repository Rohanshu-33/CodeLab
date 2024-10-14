/*
Write a C program to demonstrate relational operators.
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int num1;
    int num2;

    // Taking input
    printf("Enter first and second value : ");
    scanf("%d %d", &num1, &num2);

    // Greater than operator
    printf("%d > %d : %d \n", num1, num2, num1 > num2);

    // Less than operator
    printf("%d < %d : %d \n", num1, num2, num1 < num2);

    // Greater than or equal to operator
    printf("%d >= %d : %d \n", num1, num2, num1 >= num2);

    // Less than or equal to operator
    printf("%d <= %d : %d \n", num1, num2, num1 <= num2);

    // Equal to operator
    printf("%d == %d : %d \n", num1, num2, num1 == num2);

    // not equal to operator
    printf("%d != %d : %d \n", num1, num2, num1 != num2);
}

/*

Test cases:

1) Visible:

Input:

Enter first and second value : 2 5

Output:

2 > 5 : 0
2 < 5 : 1
2 >= 5 : 0
2 <= 5 : 1
2 == 5 : 0
2 != 5 : 1


2) Hidden:

Input:

Enter first and second value : 10 10

Output:

10 > 10 : 0
10 < 10 : 0
10 >= 10 : 1
10 <= 10 : 1
10 == 10 : 1
10 != 10 : 0


3) Hidden:

Input:

Enter first and second value : 6 1

Output:

6 > 1 : 1
6 < 1 : 0
6 >= 1 : 1
6 <= 1 : 0
6 == 1 : 0
6 != 1 : 1

*/