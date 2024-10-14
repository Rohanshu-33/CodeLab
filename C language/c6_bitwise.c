/*
Write a C program to demonstrate use of bitwise operators.
*/

#include <stdio.h>
#include <conio.h>

void main(){

    unsigned int a, b;  // 5 = 0101, 9 = 1001 (in binary)

    printf("Enter values for a and b : ");
    scanf("%u %u", &a, &b);

    // Bitwise AND (&)
    printf("a & b = %d\n", a & b);  // Result: 0001 (1 in decimal)

    // Bitwise OR (|)
    printf("a | b = %d\n", a | b);  // Result: 1101 (13 in decimal)

    // Bitwise XOR (^)
    printf("a ^ b = %d\n", a ^ b);  // Result: 1100 (12 in decimal)

    // Bitwise NOT (~) for 'a'
    printf("~a = %d\n", ~a);  // Result: 11111111111111111111111111111010 (-6 in decimal, due to 2's complement representation)

    // Left shift (<<)
    printf("a << 1 = %d\n", a << 1);  // Result: 1010 (10 in decimal)

    // Right shift (>>)
    printf("b >> 1 = %d\n", b >> 1);  // Result: 0100 (4 in decimal)

}


/*

Test cases:

1) Visible:

Input:

Enter values for a and b : 4 8

Output:

a & b = 0
a | b = 12
a ^ b = 12
~a = -5
a << 1 = 8
b >> 1 = 4


2) Hidden:

Input:

Enter values for a and b : 0 7

Output:

a & b = 0
a | b = 7
a ^ b = 7
~a = -1
a << 1 = 0
b >> 1 = 3


3) Hidden:

Input:

Enter values for a and b : -3 -3

Output:

a & b = -3
a | b = -3
a ^ b = 0
~a = 2
a << 1 = -6
b >> 1 = 2147483646

*/